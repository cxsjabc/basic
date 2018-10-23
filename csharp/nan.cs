using System;

namespace hello
{
    class Program
    {
        static void Main(string[] args)
        {
			float n = 0f;
            Console.WriteLine(n / 0);
            Console.WriteLine(-1f / 0);
            Console.WriteLine(3.4E+38f * 2f);
        }
    }
}
