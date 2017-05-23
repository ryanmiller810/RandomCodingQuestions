using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    public class Reverser
    {
        public static string ReverseStringWithoutLibrary(string s)
        {
            char[] array = new char[s.Length];
            for (int i = s.Length - 1; i >= 0; i--)
            {
                array[(s.Length - 1) - i] = s[i];
            }
            return new string(array);
        }
    }
}
