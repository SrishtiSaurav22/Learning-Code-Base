#include<bits/stdc++.h>

using namespace std;

// FUNCTIONS WITH VARIATIONS OF CONST AND NON-CONST PARAMETERS
int func1(int *ptr)
{
    return ++(*ptr);
}

void func2(const int *ptr)
{
    // cout<<++(*ptr)<<endl;
}

void func3(int num)
{
    cout<<++num; // here, you are updating a non-const copy of the const int
}

void func4(int &num)
{
    cout<<++num;
}

int main()
{
    // CREATING VARIOUS CONST AND NON-CONST VARIABLES
    int const i=5;
    // int* p=&i;
    // Error: Invalid conversion from 'const int' to 'int*'
    // You cannot have a non-const pointer to a const int

    int const *p=&i;

    int j=10;
    int const *p1=&j;
    ++j;
    // ++(*p1);

    // CALLING ALL THE FUNCTIONS
    cout<<i<<endl;
    // cout<<func1(&i)<<endl;
    // cannot pass a const int's address to a function that can modify its value
    func2(&j);

    func3(i);

    // func4(i);
    /*
    Error: binding reference of type 'int' to 'const int' discards qualifiers

    The error is indicating that you cannot bind a non-const reference to a const-object,
    as that would drop (discard in other compiler's errors), disregard or ignore the const qualifier.

    What it tries to indicate is that if the operation was allowed you would be able to modify the object
    through the reference ignoring the fact that the object itself is const, breaking const-correctness.
    */
    
    cout<<endl;
    return 0;
}
