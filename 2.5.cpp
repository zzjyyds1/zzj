#include <iostream>
    using namespace std;
    int main()
    {
        char a;
        int b = 0,c = 0, d = 0, e = 0;
        cout<< "������һ���ַ���" << endl;
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
        cout << "Ӣ����ĸ������" << b << endl;
        cout << "�ո������" << c << endl;
        cout << "���ָ�����" << d << endl;
        cout << "�����ַ�������" << e<< endl; 
        return 0;
    }
