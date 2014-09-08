#include<iostream>
using namespace std;
int main()
{
   int n,final,x,offset=1;
    cout<<"enter the no. u want to change into octal";
    cin>>n;
    while(n!=0)
    {
        x = n%8;
        n=n/8;
        final = offset*x;
        offset=offset*10;
    }
    cout<<"octal no. is "<<final;
    return 0;

}

