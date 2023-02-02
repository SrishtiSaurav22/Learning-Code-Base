#include<bits/stdc++.h>

using namespace std;

/*
 We know that for any variable (including pointers) passed to a function as a parameter,
 a copy of the same is created and the changes take place on that copy.
 Here, we will use double pointers to make changes to a variable whose address is passed to func3() through a pointer.
*/

void func1(int a)
{
    a++;
}
void func2(int *p)
{
    *p++;
}

void func3(int **p)
{
    (**p)++;
}

void funcA(int **p)
{
    p++;
}

void funcB(int **p)
{
    (*p)++;
}

void funcC(int **p)
{
    (**p)++;
}

int main()
{
    /*
    int a=10;
    int *p1=&a;
    int **p2=&p1;

    cout<<a<<endl;

    func1(a);

    cout<<"After func1, a="<<a<<endl;
    func2(p1);
    cout<<"After func2, a="<<a<<endl;
    func3(p2);
    cout<<"After func3, a="<<a<<endl;
    */

    int a=10;
    int *p1=&a;
    int **p2=&p1;

    funcA(p2);
    cout<<"After funcA, a="<<a<<", p1="<<p1<<", p2="<<p2<<endl;

    a=10;
    p1=&a;
    p2=&p1;

    funcB(p2);
    cout<<"After funcB, a="<<a<<", p1="<<p1<<", p2="<<p2<<endl;

    a=10;
    p1=&a;
    p2=&p1;

    funcC(p2);
    cout<<"After funcC, a="<<a<<", p1="<<p1<<", p2="<<p2<<endl;

    /*
     This is the output:

     After funcA, a=10, p1=0x61fe14, p2=0x61fe08
     After funcB, a=10, p1=0x61fe18, p2=0x61fe08
     After funcC, a=11, p1=0x61fe14, p2=0x61fe08
    */

    cout<<endl;
    return 0;
}
