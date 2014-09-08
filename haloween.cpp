#include<iostream>
using namespace std;

void chocolate (int n,int a[])
{
    int c[10],i;
    for( i=0;i<n;i++)
    {
        if(a[i]%2 == 0)
            c[i] = (a[i]/2)*(a[i]/2);
        else
            c[i] = ((a[i]/2) * (a[i]/2)) + (a[i]/2);
    }
    for(i = 0;i<n;i++)
        cout<<c[i];
}


int main()
{
    
    int n,a[10];
    cin>>n;
    for( int i = 0; i<n;i++)
        cin>>a[i];
    chocolate(n,a);
    return 0;

}

