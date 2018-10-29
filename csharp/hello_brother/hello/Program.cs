using System;

using System.Net;

namespace hello
{
    class MainClass
    {
        public static void Main(string[] args)
        {
            string url = "http://www.baidu.com/index.html";
            string path = "/tmp/xxxxx.html";

            Console.WriteLine("Hello World!");
            Console.WriteLine("maomao猫猫");

            WebClient webClient = new WebClient();
            webClient.DownloadFile(url, path);
        }
    }
}
