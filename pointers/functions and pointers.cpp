// This code is just displaying the first display result....none of the rest.

#include<bits/stdc++.h>

using namespace std;

void increment_pointer(int* p)
{
    p=p+1;
}

void increment_pointer_value(int* p)
{
    (*p)++;
}

// this function is to check whether the a being passed is a pointer or an array.
int check(int a[], int n)
{
    cout<<sizeof(a);
    // I got this warning here:
    // 'sizeof' on array function parameter 'a' will return size of 'int*'...
    // Hence, a function takes a pointer rather than an array.
    return 0;
}

void passing_partial_array(int *a, int n)
{
    int i,ans=0;

    for(i=0;i<n;i++)
        ans+=a[i];

    cout<<"Total sum="<<ans;
}

int main()
{
    /*
    int i=10;
    int *p=&i;

    // comment this out please.

    Here, the address stored in the pointer won't be different
    as in the function call a copy of the pointer is made
    and that is changed, not our actual pointers in main().


    cout<<p;
    increment_pointer(p);
    cout<<p;

    //Here, the value that p is pointing to, will be changed.

    cout<<*p;
    increment_pointer_value(p);
    cout<<*p;

    //_____________________________--

    int a[]={1,2,3};
    cout<<sizeof(a);

    cout<<endl;
    check(a,3);
    */

    int a[]={1,1,1,1,1,1};
    int *ap=a;

    ap+=2;

    // ensure that you are passing the pointer
    //and the size of the part of the array being taken.
    passing_partial_array(ap,4);

    cout<<endl;
    return 0;
}
