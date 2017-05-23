using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    public class FileReader
    {
        public static void ReadFile(string fileName)
        {
            List<string> list = new List<string>();

            using (StreamReader sr = new StreamReader(fileName))
            {
                string line;
                while((line = sr.ReadLine()) != null)
                {
                    list.Add(line);
                    Console.WriteLine(line);
                }

            }
        }

        public static void ParseFile(string fileName)
        {
            string line;
            string[] delimitedStrings;
            //int position = 0;

            using (StreamReader sr = new StreamReader(fileName))
            {
                while ((line = sr.ReadLine()) != null)
                {
                    delimitedStrings = line.Split('.');
                    Console.WriteLine(line);
                }
            }
        }
    }
}
