#include<iostream>
using namespace std;
void p_and_c(int n,int a,int b)
{
    int final[10]={0};
    int j,k,i = n,c=0;
    j = n;
    if(a<b)
    {
        c=a;
        a=b;
    }
    else
        c=b;
    while(n>=0)
    {
        final[i-n] = c*(n-1) + a*((i-1)-(n-1));
        n--;
    }
    for(k = 0;k<j;k++)
        cout<<final[k]<<" ";
}


int main()
{
    int n,a,b;
    cin>>n;
    cin>>a;
    cin>>b;
    p_and_c(n,a,b);
    return 0;
}
