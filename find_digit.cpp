#include<iostream>
using namespace std;

void find(int n)
{
    int mod,count = 0, i =n;
    while(n>0)
    {
        mod = n%10;
        if(i%mod==0)
            count++;
        n= n/10;
    }
    cout<<count;
}

int main()
{
    int n;
    cin>>n;
    find(n);
    return 0;
}
