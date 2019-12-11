#include<iostream>
using namespace std;

#define MAX_SIZE 101

int A[MAX_SIZE];
int top=-1;

void push(int x)
{
    if(top==MAX_SIZE-1)
    {
        cout<<"Stack overflow";
        return;
    }
    top = top+1;
    A[top]=x;
}

void pop()
{
    if(top==-1)
    {
        cout<<"Stack Underflow"<<endl;
        return;
    }
    top--;
}

int Top()
{
    return A[top];
}

inzt isEmpty()
{
    if(top==-1)
        return true;
    else
        return false;
}

void print()
{
    int i;
    cout<<"Stack: "<<endl;
    for(i=0;i<=top;i++)
    {
        cout<<A[i]<<endl;
    }
}
int main()
{
    push(2);
    print();
    push(3);
    print();
    push(4);
    print();
    push(5);
    print();
    pop();
    print();
    Top();
    print();
    isEmpty();  
    print();  
    return 0;
}
