using System;
using System.Runtime.InteropServices;
using System.IO;
using System.Windows.Forms;


public class HelloWorld
{
    [DllImport ("bin/minic.so")]
    private static extern int start(int ac, string av);

    static public void Main (string[] files)
    {        
        try
        {
            if (files.Length == 0){
                Console.WriteLine("No file given as argument: EXIT!");
                return;
            }
            for (int i = 0; i < files.Length; i++)
            {
                Console.WriteLine("Now reading: '{0}'\n", files[i]);
                var x = start(1, files[i]);
                if(x == 0) 
                    Console.WriteLine("No errors reported for '{0}'\n", files[i]);
                else
                    Console.WriteLine ("\nThe file '{0}' has {1} errors\n", files[i], x);

            }
            Console.WriteLine("Finished!");
        }
        catch (System.DllNotFoundException e)
        {
            Console.WriteLine(e);
        } 
    }
}