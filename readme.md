# miniC#

**miniC#** es un analizar léxico, escrito en **Flex** y en el **lenguaje C**, para el lenguaje de programacion miniC#. Entre sus características están el soporte a multiples archivos de entrada, correcta validación e identificación de errores y un claro manejo de mensajes de error. 

# Uso

### Requesitos
Para todos los procedimientos de compilación es necesario que cumplas las siguientes dependencias:
- Linux 64 bits.
- Flex 2.6
- Bison 3.1
- GCC 5.4.0


### Compilación de miniC#

Abre una consola de comandos y navega hasta el directorio donde hayas descargado el repositorio  (deberías ver los directorios `/Analyser` y `/miniC#` , y el archivo `readme.md`). Una vez en esa ruta, ejecuta los siguientes comandos para compilar miniC#:

1. Generamos el código fuente del Parser:
```shell
$   bison Analyser/Sintactic/BisonDefinitions.y -t -d -v -o Analyser/Sintactic/Parser.c
```
2. Generamos el código fuente del Scanner:
```shell
$  flex -o Analyser/Lexical/Scanner.c Analyser/Lexical/FlexDefinitions.l
```
3. Ahora sí, generamos miniC#:
```shell
$  gcc -o miniC#/bin/mcsc.out miniC#/source/minic.c  Analyser/Sintactic/Parser.c Analyser/Lexical/Scanner.c
```
### Análisis del archivo
Para analizar un archivo ejecute el siguiente comando. Sustituye `archivo.cs` con el archivo que deseas analizar.
```shell
$  miniC# /bin/mcsc.out Test/reserved.cs
```

## Funcionamiento
miniC#  se ejecuta como un programa de consola que recibe una o ninguna ruta de archivo:

> - Si no se indica un archivo, miniC# leerá de consola las líneas que ingreses. Yo le llamo a esta función 'Debug Mode'. Presiona Ctrl + C para salir del Debug Mode.
> - Si el archivo no existe, miniC# imprime END en consola y termina su ejecución.
> - Si el archivo existe y no contiene errores, miniC# imprime END en cosola y termina su ejecución.
> - Si el archivo contiene errores, miniC# mostrará los errores en consola. Al terminar el análisis, se imprime END y termina la ejecución. Vea la sección de [Errores](#errores) para obtener mas información de cómo miniC# captura y se recupera de errores.

El proceso de miniC# para validar el contenido de un archivo o texto es:
1.	El Parser llama al Scanner para que le entregue el siguiente token.
2.	El Parser valida el token en la gramática que tiene definida.
3.	Si el token es válido, el Parser valida la expresión como correcta.
4.	Si el token no es válido, el Parser retorna un error. Vea la sección [Errores](#errores) para más detalles.

# Errores
Existen dos tipos de errores, los léxicos y los sintáctos. Un error de léxico se produce porque el archivo contiene un elemento que no existe en el lenguaje de miniC#. Este error también producirá un error sitáctico.  (Puedes saltar hasta [Termina teoría](#termina-teoría) si solo desea conocer como se manejan los errores)
#### *Inicia teoría*
Un error sintáctico esta relacionado al orden en que se generan los tokens desde el archivo. El Scanner es el encargado de generar los tokens (leyendo el archivo y devolviendo los tokens) que el Parser analiza. El Parser une los tokens buscando cumplir ciertas reglas (definidas por la gramática de miniC#). ***Si se recibe un token diferente al esperado para cumplir una regla, entonces se produce un error sintáctico***. Si el Scanner halla un error léxico, produce y envía un token inválido al Parser. Esta es la razón por la cual un error léxico deriva en un error sintáctico. 

El problema con los errores, es que hallarlos y manejarlos requiere adivinar el lugar más probable en dónde se producirá un error sintáctico. Ya sabemos que un error léxico producirá un error sintáctico, ***¡pero no es la única posibilidad!***  Pero, si hallamos un error léxico ¿por qué no se puede simplemente mostrar un error? El conflicto surge porque el Scanner y el Parser son programas independientes. Si el Scanner encuentra un error léxico, este no tiene forma de decirle al Parser que se detenga y muestre el error, y tampoco puede mostrar el error, porque el Parser continuará validando. 

Ahora sabemos que solamente el Parser es capaz de manejar los errores sintácticos. Esto nos conduce a otro problema. El Parser es muy sensible a errores. Al toparse con el primer error, se detendrá el análisis. Debemos entences manejar los errores de forma que podamos mostrarlos y continuar analizando. 
#### *Termina teoría*
La solución para manejar errores consiste en generar un token especial cuando se produce un error. Este token cumple la regla de *no cumplir las demás reglas*, por decirlo de una forma. Cuando este token se valida y se cumple la regla anterior, sabemos que se ha producido un error sintáctico. Está solución es muy versátil, ya que podemos combinar nuestro token de error con otros para hallar errores cada vez más especificos. Pero, ***aun debemos adivinar el lugar más probable en dónde se producirá un error.*** Y esto no es tarea fácil. 
>Entiendase el término *`regla`* como *`producción`* en el contexto de la gramática.

miniC# combina el token de error con tokens relacionados a las reglas siguientes:

- Declaracion de variables
- Declaracion de funciones, métodos, clases e interfaces.
- Definicion de argumentos y parámetros en funciones, métodos y estructuras.
- Expresiones aritméticas y lógicas. 

El token de error se programó para consumir el mínimo de tokens que necesite hasta poder salir de la regla que intetó validar (y falló) y empezar una nueva regla. Por ejemplo, supongamos que tenemos el siguiente código

```c#
	1.  	class Carro {
	2.		string color;
	3.		string marca;
	4.		void Carro(){
	5.		     return;
	6.		     string Color(){
	7.		            return color;
	8.		     }
	9.	        }
       10.	}
```
Para miniC# es posible entrar a cuatro reglas cuando parte del inicio (no hay regla anterior activa), que son:
- Class
- Function
- Interface
- Variable.

En el código anterior se está declarando un método dentro de otro método, lo cual no es posible en miniC#, aunque a primera vista no parece incorrecto. En este punto la regla para construir una *Function* estaba activa y la anterior era la regla *Class*. 

El parser de miniC# encontrará  el error hasta que haya leído `string` (que no es posible definirlo después de `return;`), saldrá de la regla *Function* y quedará en la regla *Class*, en dónde buscará la siguiente regla a construir. En *Class*, supongamos, es posible entrar a dos reglas, *Variable* y *Function*. El Parser lee ahora `Color`, interpretándolo como *probablemente Variable*; ahora lee `(`que resulta ser inválido para la regla *Variable* . Esto vuelve a producir un error sintáctico, que a primera vista puede ser un error del Parser, pero que en el contexto de la regla activa no lo es. 

Casos similares pueden ocurrir para otras reglas. miniC# buscará siempre el primer token para manejar lo más pronto posible el error. La captura de errores es, en general, bastante acertada. Algunas excepeciones se producen en códigos muy extensos o profundos. Sin embargo, el Parser nunca dará falsos positivos (errores que realmente no lo son). 


# Justificación
miniC# es un programa y analizador léxico y sintáctico robusto, eficiente y flexible. El Scanner es capaz de reconocer gran cantidad de tokens correctamentee y manejar errores de léxico y sintaxis de forma acertada. El programa cumple con los requerimiento para el análisis, y futura compilacion, de código miniC#. El Parser maneja adecuadamente los errores de sintaxis y es capaz de recuperse de diferentes tipos de errores en variedad de escenarios. En conjunto, el análisis y futura compilación de código miniC# es lo más correcta posible.