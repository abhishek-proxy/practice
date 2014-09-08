#include<iostream>
using namespace std;

int count_height(int n)
{
    int monsoon,height = 1;
    for(int i = 0;i<n/2;i++)
    {
        monsoon = height * 2;
        height = monsoon + 1;
    }
    if(n % 2 == 1)
        height = height * 2;
    
    return  height;
}
        

int main()
{
    int n,total_height; 
    cout<<"enter the no. of cycles";
    cin>>n;
    total_height = count_height(n);
    cout<<total_height;
    return 0;

}
