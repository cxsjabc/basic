//#define MAC

using System;

#warning "just a warning tip"

namespace hello
{
    class Program
    {
        static void Main(string[] args)
        {
			#if MAC
	            Console.WriteLine("cat");
			#else
	            Console.WriteLine("Bear");
			#endif
        }
    }
}
