using System;

namespace hello
{
    class Program
    {
        static void Main(string[] args)
        {
            string s;
			double d;

			s = Console.ReadLine();
			if(double.TryParse(s, out d)) {
				Console.WriteLine("value:{0}\n", d);
			} else {
            	Console.WriteLine("{0} is not a valid number!\n", s);
			}	
        }
    }
}
