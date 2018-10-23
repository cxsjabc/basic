using System;

namespace hello
{
    class Program
    {
        static void Main(string[] args)
        {
            string max;

            max = "hello, cat";
            Console.WriteLine(max);
			{
				string max = "hello, bear";	// compile error
            	Console.WriteLine(max);
			}
        }
    }
}
