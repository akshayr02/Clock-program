#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int h,m,s,hs,a,err;
    err=a=0;
    while(err==0)
    {
        cout << "enter hour: " << endl;
        cin >> h;
        cout << "enter minutes: " << endl;
        cin >> m;
        cout << "enter seconds: " << endl;
        cin >> s;
        cout << "enter hectoseconds: " << endl;
        cin >> hs;
        if(h<24 && m<60 && s<60 && hs<100)
        {
           err++;
        }
        else
        {
           system("cls");
        }
    }
    while(a==0)
    {
        system("cls");
        cout << h << ":" << m << ":" << s << ":" << hs << endl;
        hs++;
        if(hs>99)
        {
            hs=0;
            s++;
        }
        if(s>59)
        {
            s=0;
            m++;
        }
        if(m>59)
        {
            m=0;
            h++;
        }
        if(h>23)
        {
            h=0;
        }
    }
    return 0;
}
