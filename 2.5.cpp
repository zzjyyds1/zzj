#include <iostream>
    using namespace std;
    int main()
    {
        char a;
        int b = 0,c = 0, d = 0, e = 0;
        cout<< "请输入一行字符：" << endl;
        while ((a =getchar())&&(a != '\n'))
        {
            if ((a >= 'A' && a <= 'Z')|| (a >= 'a' && a <= 'z'))
                b = b + 1;
            else if (a >= '0' && a <= '9')
                c = c + 1;
            else if (a == ' ')
                d = d + 1;
            else
                e = e + 1;
        }
        cout << "英文字母个数：" << b << endl;
        cout << "空格个数：" << c << endl;
        cout << "数字个数：" << d << endl;
        cout << "其他字符个数：" << e<< endl; 
        return 0;
    }
