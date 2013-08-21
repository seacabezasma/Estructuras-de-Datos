#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
     int n;
     int k,l=1;
    cout<<"Digite la cantidad de filas que tendra el triangulo"<<endl;
    cin>>n;
    k=n-1;
    for (int i=1;i<=n;i++){
        for (int m=k;m>=0;m--)
        {
            cout<<" ";
            }
        for (int j=1;j<=l;j++)
        {
            if(j%2==0)
            cout<<" ";
            else cout<<"*";
            }
        cout<<endl;
        l=l+2;
        k=k-1;
        }
    system("PAUSE");
    return EXIT_SUCCESS;
}
