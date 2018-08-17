using System;
using System.Runtime.InteropServices;
using System.IO;
using System.Windows.Forms;


public class HelloWorld
{
    [DllImport ("bin/miniCS.so")]
    private static extern int start(int ac, string av);    

    static public void Main ()
    {        
        try
        {
            if(start(1, "files/test.cs") == 1) Console.WriteLine("Success!");
        }
        catch (System.DllNotFoundException e)
        {
            Console.WriteLine(e);
        }
    }
}