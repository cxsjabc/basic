using System;

namespace hello
{
    class Program
    {
        static void Main(string[] args)
        {
			checked {
				int i = int.MaxValue;
            	Console.WriteLine(i + 1);
			}
        }
    }
}
