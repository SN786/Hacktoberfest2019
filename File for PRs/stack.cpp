//Author:Sharif Nawaz
In this program stack is implemented using Array and inserting an element(Push) and Removing of element (Pop) is implemented on c++
language.

#include<bits/stdc++.h>
using namespace std;
#define maxi 2
class stack_c{
int top;
public:
    stack_c()
    {
        top=-1;
    }
    int arr[maxi];
    int pop();
    void push(int data);

};
void stack_c::push(int data)
{
    if(top>=maxi-1)
    {
        cout<<"OVERFLOW CONDITION\n";
    }
    else
    {
        arr[++top]=data;
        cout<<data<<"pushed into the stack\n";
    }


}
int stack_c::pop()
{
    if(top<0)
    {
        cout<<"Underflow condition\n";
    }
    else
    {
       int x=arr[top--];

        return (x);
    }


}
int main()
{
   class stack_c s;
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(90);
    cout<<s.pop()<<"Removed sucessfully\n";
}

