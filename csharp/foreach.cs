using System;

namespace hello
{
    class Program
    {
        static void Main(string[] args)
        {
			char [] cells = {'a', 'b', 'c'};

			foreach(char ch in cells)
				System.Console.WriteLine(ch);
        }
    }
}
