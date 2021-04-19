using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CSBasic1
{
    class Program
    {
        static void Main(string[] args)
        {
            var name = "신" + "잎" + "새";
            Console.Write(name);
            Console.Write("개행이 안되는 녀석");
            Console.WriteLine("개행이 되는 녀석");

            var alpha = "알파";
            // var 273alpha = "숫자이름";
            var 한글변수명 = "된당";
            // string 이모티콘 = "이모지는 안된다"

            /*여러줄
             주석*/

            Console.WriteLine(52);
            Console.WriteLine(52 + 273);
            Console.WriteLine(10 / 5);
            Console.WriteLine(10 % 5);
            Console.WriteLine(7 % 3);
            Console.WriteLine(52.273);
            Console.WriteLine(0.0);
            Console.WriteLine('a');
            Console.WriteLine('가');
            Console.WriteLine("a" + "b");
            Console.WriteLine("미림여자/t정보과학고등학교");
            Console.WriteLine(DateTime.Now.Hour < 3);
                                                                                           
        }
    }
}
