// A reference variable that does not have its own memory space, it points to an existing memory space.

#include<bits/stdc++.h>

using namespace std;

int increment_without_reference(int n)
{
    return ++n;
}

int increment_with_reference(int& n)
{
    return ++n;
}

// Considered bad practice as your returning a reference to a local variable whose memory address will be gone once the function finishing executing
int& return_reference()
{
    int x=20;
    return x;
}

// Considered bad practice as your returning a pointer or address to a local variable whose memory address will be gone once the function finishing executing
int* return_pointer_or_address()
{
    int x=20;
    return &x;
}

int main()
{
    // BASIC SYNTAX__________________________________________________________________________________
    int i=10;
    int &j=i; // syntax for creating reference variable

    cout<<"i="<<i<<"\t++i="<<++i<<endl;
    cout<<"j="<<j<<"\t++j="<<++j<<endl;

    int I=10;
    // int J=&I; // error: invalid conversion from 'int*' to 'int'

    cout<<"I="<<I<<"\t++I="<<++I;
    cout<<endl;
    // cout<<"J="<<J<<"\t++J="<<++J;

    // CALLING THE INCREMENT FUNCTIONS________________________________________________________________

    // i is unchanged here
    cout<<endl;
    cout<<"i="<<i<<endl;
    cout<<increment_without_reference(i)<<endl;
    cout<<"i="<<i<<endl;

    cout<<endl;

    // i changes here
    cout<<"i="<<i<<endl;
    cout<<increment_with_reference(i)<<endl;
    cout<<"i="<<i<<endl;

    // RETURNING REFERENCE AND POINTER/ADDRESS_________________________________________________________

    // these two functions will compile but with warnings
    cout<<"return_reference(): "<<return_reference()<<endl;
    // error: reference to local variable returned

    cout<<"return_pointer_or_address(): "<<return_pointer_or_address()<<endl;
    // error: address of local variable returned

    cout<<endl;
    return 0;
}
