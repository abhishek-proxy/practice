#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
int append(node** head_ref,int new_data)
{
    struct node new_node = new node;
    struct node last = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL;
    if(*head_ref == NULL)
    {
        *head_ref = new_node;
        return 0;
    }
    else{
        while(last->next!=NULL)
            last = last->next;
        last->next = new_node;
        return 0;
    }


}
void display(*node node)
{
    while(node!=NULL)
    {
        cout<<node->data;
        node = node->next;
    }
}

int main()
{
    struct node* head = NULL;
    char ch = 'y';
    int n,x;
    
    while(ch =='y')
    {    
        cin>>n;
        x= append(&head,n);
        cin>>ch;
    }
    display(head);
    return 0;


}
