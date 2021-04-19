using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CSBasic1
{
    class Program
    {
        string Var = "테스트";
        // var 은 못넣음
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

            int a = 2147483647;
            int b = 1;
            Console.WriteLine(a + b);
            double c = 52.263;
            char d = '아';

            Console.WriteLine("int: " + sizeof(int));
            Console.WriteLine("long: " + sizeof(long));
            Console.WriteLine("float: " + sizeof(float));
            Console.WriteLine("double: " + sizeof(double));
            Console.WriteLine("char: " + sizeof(char));
            Console.WriteLine("bool: " + sizeof(bool));

            bool TrueOrFalse = true;

            int output = 0;
            output += 52;
            output += 273;
            output += 103;
            Console.WriteLine(output);

            string output2 = "hello ";
            output2 += "world";
            output2 += "!";
            Console.WriteLine(output2);

            int number = 10;
            Console.WriteLine(number++);
            Console.WriteLine(++number);
            Console.WriteLine(number--);
            Console.WriteLine(--number);
            Console.WriteLine(number);

            int _int = 273;
            long _long = 624235252342;
            float _float = 52.273f;
            double _double = 52.273;
            char _char = '글';
            string _string = "문자열";

            Console.WriteLine(_int.GetType());
            Console.WriteLine(_long.GetType());
            Console.WriteLine(_float.GetType());
            Console.WriteLine(_double.GetType());
            Console.WriteLine(_char.GetType());
            Console.WriteLine(_string.GetType());

            var number3 = 100;
            var number4 = "뮻";
            var number5 = 100.0;
            var number6 = 100.0f;

            string input = Console.ReadLine();
            Console.WriteLine("input: " + input);
            while (true)
            {
                input = Console.ReadLine();
                if(input != "q")
                {
                    Console.WriteLine(input);
                }
                else
                {
                    break;
                }
            }


        }
    }
}
