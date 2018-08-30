# miniC#

**miniC#** es un analizar léxico, escrito en **Flex** y en el **lenguaje C**, para el lenguaje de programacion miniC#. Entre sus características están el soporte a multiples archivos de entrada, correcta validación e identificación de errores y un claro manejo de mensajes de error. 

# Uso

> Se incluye un binario ejecutable para sistemas Linux de 64 bits dentro del directorio `/bin`. Si tu máquina no cuenta con una imagen Linux de 64 bits ni como Mono C# Compiler, o deseas compilar propiamente un binario ejecutable, necesitarás saltar a la sección **Compilación de minic.exe**

Abre una consola de comandos y navega hasta el directorio `/Proyecto1` (deberías ver los directorios `/bin`, `/src`, `/files` y el archivo `readme.md`). Una vez en esa ruta, ejecuta el siguiente comando para analizar un archivo miniC#:

```shell
$   mono bin/minic.exe files/Pruebas.frag
```
Para el comando anterior se infiere que el archivo `Pruebas.frag` se encuentra en el subdirectorio `/files`. El programa generará un archivo corregido `Pruebas.out` sobre el mismo directorio. El archivo `Pruebas.out` contiene los resultados del escáner.

#### Compilación de minic.exe
Para todos los procedimientos de compilación es necesario que cumplas las siguientes dependencias:
- Linux 32 o 64 bits.
- Flex 2.6
- GCC 5.4.0
- Mono C# Compiler versión 5.x


Al descargar el código fuente encontrarás en la carpeta `/src` todos los archivos para compilar el escáner. Uno de ellos está nombrado como `minicFLEX.l`. Este archivo contiene las definciones de las expresiones regulares usadas para analizar el archivo en busca de tokens  de miniC#.

Abre una consola de comandos y navega hasta el directorio `/Proyecto1` (deberías ver los directorios `/bin`, `/src` y el archivo `readme.md`). Una vez en esa ruta, ejecuta el siguiente comando:

```shell
$   flex -o src/minicFLEX.c src/minicFLEX.l && gcc -shared -fPIC src/minic.c src/minicFLEX.c -o bin/minic.so && csc src/minic.cs -out:bin/minic.exe
```

El comando anterior generará un archivo en lenguaje C, en `src/minicFLEX.c`,  que contiene el analizador léxico, mismo que se compilará en un librería del sistema. El comando toma la librería anterior y generará el archivo `bin/minic.exe`

Ahora sí, ya puedes ejecutar miniC# con el siguiente comando:

```shell
$   mono /bin/minic.exe files/Pruebas.php
```

# Funcionamiento
miniC#  se ejecuta como un programa de consola que recibe una o varias rutas de archivo. Si el archivo es válido, el programa se encargará de analizar el contenido y generar los tokens y el archivo de salida respectivo. De no recibir una ruta de archivo se mostrará un error.

El proceso del programa para validar el contenido de un archivo o expresión, es generado por Flex y un conjunto de reglas, llamadas expresiones regulares, que están definidas para validar elementos del lenguaje miniC#. Por ejemplo, el programa puede validar si una variable es válida (lexicográficamente) por medio de la expresión regular:
>`[a-zA-Z][a-zA-Z0-9_]*`

Por tanto, es necesario definir tantas expresiones regulares como elementos válidos existan en miniC#. Por nombrar algunos:
- Operadores
- Constantes
- Palabras reservadas
- Identificadores
- Etcétera.

# Justificación
miniC# es un programa y analizador léxico robusto, eficiente y flexible. Primero, el analizador léxico es capaz de reconocer gran cantidad de tokens miniC# válidos en diferentes entornos, además de lograr identificar errores básicos de léxico. En miniC#, dichos tokens son independientes entre sí (la validez de uno, no influye en la validez de otro token). Tal propiedad es importante pues permite que el programa puede manejar cada token con los requerimientos necesarios para generar un archivo limpio y corregido.

Por otro lado, miniC# separa las definiciones lexicográficas de la sección lógica y programable (el programa). Esto brinda la ventaja de poder modificar las expresiones regulares sin afectar el funcionamiento del programa y brinda la flexibilidad para hacer validaciones no lexicográficas, como el manejo de archivos, listas y memoria. Además, miniC# está escrito **100% en lenguaje C**. El resultado: un programa altamente eficiente en el manejo de recursos, de más rápida ejecución que otras alternativas en otros lenguajes de programación, ligero y optimizado para sistemas Linux, con la capacidad de portarse a otros SO.