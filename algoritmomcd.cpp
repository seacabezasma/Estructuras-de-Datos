#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a,b,c;
cout<<"Ingrese el valor a: ";
cin>>a;
cout<<"Ingrese el valor b: ";
cin>>b;
if(a>0&&b>0)
{
            for (c=1;c>0;b=c)
            {
                c=a%b;
                a=b;
                }
                cout<<"El maximo comun divisor es: "<<a;
            }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
