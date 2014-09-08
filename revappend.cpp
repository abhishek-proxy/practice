#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
}*head,*current,*p;

void insert(int n)
{
    if(head==NULL)
    {
        head = (node*) malloc(sizeof(node));
        p=head;
    }
    else
    {
        p->next = (node *) malloc(sizeof(node));
        p->next;
    }
    p->data = n;
}
void display()
{
    current = head;
    while(current!=NULL)
    {
        cout<<current->data<<"->";
        current =  current->next;
    }
}

int main()
{
    int n;
    char ch = 'y';
    while(ch=='y')
    {
        cout<<"enter the element";
        cin>>n;
        insert(n);
        cin>>ch;

    }
    display();

    
    return 0;
}
