#include<iostream>
using namespace std;


int main()
{
    int n,x,sum=0;
    for(int i=0;i<500;i++)
    {
        n=i;
        while(n!=0)
        {
            x = n%10;
            sum=sum+x*x*x;
            n=n/10;
        }
        if(sum==i){
            cout<<i;
        }
        sum=0;
    }
    return 0;
}
