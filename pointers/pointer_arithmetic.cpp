// Here, we see how pointer arithmetic works on pointers of different data types and how they move accordingly:

// error: reference to 'prev' is ambiguous
// apparently chaning 'prev' to 'PREV' did the trick, 'prev' might be clashing with another such structure or a keyword in bits/stdc++.h or the namespace std

#include<bits/stdc++.h>

using namespace std;

struct PREV
{
    int a;
    char ch;
    double d;

    PREV()
    {
        this->a=0;
        this->a='x';
        this->d=0.0;
    }

    PREV(int a, char ch, double d)
    {
        this->a=a;
        this->ch=ch;
        this->d=d;
    }
};

struct abc
{
    int a;
    char ch;
    double d;
    PREV p;

    abc(int a, char ch, double d, PREV p)
    {
        this->a=a;
        this->ch=ch;
        this->d=d;
        this->p=p; // is this possible?
    }
};

int main()
{
    PREV p(2,'b',2.2);
    abc i(1,'a',1.2,p);
    // abc i(1,'a',1.2,{1,'a',1.2});
    // is this not allowed?
    abc *ptr=&i;

    cout<<"\nSize of abc: "<<sizeof(abc);
    cout<<"\nSize of int: "<<sizeof(int);
    cout<<"\nSize of char: "<<sizeof(char);
    cout<<"\nSize of double: "<<sizeof(double);
    cout<<"\nSize of PREV: "<<sizeof(PREV);

    cout<<"\nValue of the pointer ptr: "<<ptr;
    cout<<"\nValue of the pointer ptr+1: "<<ptr+1;

    cout<<endl;
    return 0;
}
