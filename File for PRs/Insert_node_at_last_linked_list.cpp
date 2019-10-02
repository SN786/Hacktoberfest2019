Author:Sharif Nawaz
This program first creates linked list after that insert elements at last node of linked list by asking user.
i.e. How many nodes do u want to create and enter elements of each node After that ask for the element to insert at last.


#include<bits/stdc++.h>
using namespace std;

struct node{
int data;
struct node *next;
};
struct node * createNode_List(int);
void display_List(struct node *start);
void append(struct node *start);
int main()
{
    int n;
	printf("Enter the number of Nodes : ");
    cin>>n;
    struct node *start=createNode_List(n);
    display_List(start);
    append(start);
    return 0;

}
void append(struct node *start)
{
    struct node *temp2,*new_node1;
    int number2;
    temp2=start;
    new_node1=(struct node * ) malloc(sizeof(struct node));
    if(temp2==NULL)
    {
        cout<<"Enter number to insert at last\n";
        cin>>number2;

        new_node1->data=number2;
        new_node1->next=NULL;
        start=new_node1;
        display_List(start);

    }
    else
    {
       cout<<"Enter number to insert at last\n";
       cin>>number2;
       while(temp2->next!=NULL)
       {
           temp2=temp2->next;
       }
       temp2->next=new_node1;
       new_node1->data=number2;
       new_node1->next=NULL;
       display_List(start);

    }


}
struct node * createNode_List(int n)
{
    int number;
    struct node * start=NULL;
    struct node * new_node,* temp;
    if(n<=0)
    {
        return NULL;
    }
    start= (struct node *)malloc(sizeof(struct node));
    if(start==NULL)
    {
        cout<<"Memory can not allocated\n";
    }
    else{
        cout<<"Enter number for 1st node\n";
        cin>>number;
        start->data=number;
        start->next=NULL;
        temp=start;
        for(int i=2;i<=n;i++)
        {
            new_node= (struct node * ) malloc(sizeof(struct node));
            if(new_node==NULL)
            {
               cout<<"Memory can not allocated\n";
            }
            else
            {
                cout<<"Enter number for"<<i<<"node\n";
                cin>>number;
                new_node->data=number;
                new_node->next=NULL;
                temp->next=new_node;
                temp=temp->next;
            }
        }


        }
    return start;

}
void display_List(struct node *start)
{
    struct node * temp=start;
    if(temp==NULL)
    {
        cout<<"Empty linked list\n";

    }
    else{
        cout<<"List is given below\n";
        while(start!=NULL)
        {
           cout<<(start->data)<<" "<<endl;
           start=start->next;
        }

        }



}

