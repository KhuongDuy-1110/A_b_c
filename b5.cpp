#include<iostream>
using namespace std;
int main()
{
    int n;
    do
    {
        cout<<"nhap n";
        cin>>n;
        if(n<20) cout<<"nhap n>20";
    } while (n<=20);
    for(int i=0; i<=n; i++)
        {if(i==n/2+1)
            continue;
        cout<< i <<" ";}
        
}
ksjdfksjfksdfjksdfjksdfjksdj