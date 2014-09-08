#include<iostream>
using namespace std;

void largest_v(int n,int t,int width[20],int start[10],int end[10])
{
    int smallest,flag = 0;
    for(int i=0;i<t;i++){
        smallest=0;
        flag = 0;
        for(int j=start[i];j<end[i];j++)
        {
            if(flag==0)
            {    
                smallest = width[j];
                flag = 1;
            }
            if(smallest>width[j])
                        smallest = width[j];
        }
        cout<<smallest;
    }

}



int main()
{
    int n,t;
    int width[20],start[10],end[10];
    cout<<"Enter size of lane:\n";
    cin>>n;
    cout<<"Enter test cases:\n";
    cin>>t;
    for(int i=0;i<n;i++)
        cin>>width[i];
    for(int i=0;i<t;i++)
    {
        cin>>start[i];
        cin>>end[i];
    }
    largest_v(n,t,width,start,end);
    return 0;
}
