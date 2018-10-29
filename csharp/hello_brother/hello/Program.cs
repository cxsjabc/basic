//#define WEBCLIENT

using System;

using System.Net;


namespace hello
{
    class MainClass
    {
        public static void Main(string[] args)
        {
            /*
            Console.WriteLine("Hello World!");
            Console.WriteLine("maomao猫猫");
            */

            test_try_catch();

#if WEBCLIENT
            string url = "http://www.baidu.com/index.html";
            string path = "/tmp/xxxxx.html";

            WebClient webClient = new WebClient();
            webClient.DownloadFile(url, path);
#endif
        }

        private static void test_try_catch()
        {
            try
            {
                try
                {
                    throw new Exception("maomao exception");
                }
                catch (Exception e)
                {
                    System.Console.WriteLine(e.Message + e.StackTrace);
                    throw;
                }
                finally
                {
                    System.Console.WriteLine("finally processed...");
                }
            } catch (Exception e)
            {
                System.Console.WriteLine(e.Message + e.StackTrace); 
            }
        }
    }
}
