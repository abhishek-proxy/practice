#include<iostream>
#include<string.h>
using namespace std;
void check(char str[20],int length)
{
    char c ;
    int j,flag;
    int hash[20] = {0};
    int i = 0;
    if(length%2 == 0)
    {
        while(i<length)
        {
            c = str[i];
            for( j = 0;j<length ; j++)
            {
                if( i!=j && hash[j] == 0 && c == str[j])
                {
                    hash[j] = 1;
                    hash[i] = 1;
                }
            }
            ++i;
        }
    }
    for( i =0 ; i<length;i++)
    {
        if(hash[i] == 1)
                flag = 0;
        else if(hash[i]==0)
        {    flag = 1;
             break;
        }
    }
    if(flag == 1)
        cout<<"NO";
    else 
        cout<<"YES";

}


int main()
{
    char str[20];
    int length;
    cout<<"enter the string";
    cin>>str;
    length = strlen(str);
    check(str,length);
    return 0;
}
