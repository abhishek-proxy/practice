#include<iostream>
#include<string.h>
using namespace std;

void gem_stone(char str[10][10],int no_of_rocks)
{  
    int flag= 1,flagr = 0,nc=0;
    int pass=1,count=0;
    char check;
    int n = strlen(str[0]);
    while(pass<=no_of_rocks)
    {
        flagr = 0;
        if(nc<n)
            check = str[0][nc];
        for(int i=0;i<str[pass][i]!='\0';i++)
        {
            if(check == str[pass][i] && flagr==0)
            {    
                flag++;
                flagr = 1;
            }
        }
        if(pass = no_of_rocks)
        {
            if(flag == no_of_rocks)
                count++;
            nc++;
            pass=0;
        }
        pass++;
    }
    
    cout<<count;
}    




int main()
{
    int no_of_rocks;
    char str[10][10];
    cout<<"enter the no. of rocks";
    cin>>no_of_rocks;
    for(int i=0;i<no_of_rocks;i++)
       cin>> str[i];

    gem_stone(str,no_of_rocks);



    return 0;
}
