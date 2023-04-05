#include<bits/stdc++.h>

using namespace std;

int main()
{
    // NON-CONST VARIABLES
    int i=20;
    int &j=i; // reference variable

    ++i;
    ++j;

    // CONST INT
    int const x=5;
    const int y=9; // you need to initialize a const variable
    // ++x;

    // REFERENCE FROM A CONST INT
    const int a=10;
    // int &b=a;
    // ++a;

    /*
    Error: binding reference of type 'int' to 'const int' discards qualifiers

    The error is indicating that you cannot bind a non-const reference to a const-object,
    as that would drop (discard in other compiler's errors), disregard or ignore the const qualifier.

    What it tries to indicate is that if the operation was allowed you would be able to modify the object
    through the reference ignoring the fact that the object itself is const, breaking const-correctness.
    */

    // CONST REFERENCE FROM A NON-CONST INT
    int m=6;
    int const &n=m;
    ++m;
    // ++n;

    // CONST REFERENCE FROM A CONST INT
    int const p=6;
    int const &q=p;
    // ++p;
    // ++q;

    cout<<endl;
    return 0;
}

/*
DOUBT: Is the memory location that a constant variable points to, made immutable or is the path to that location immutable? This is in reference to c++.

In C++, a constant variable is a variable whose value cannot be changed once it has been initialized. The memory location that a constant variable points to is not made immutable by the compiler. However, the path to that location is immutable in the sense that the constant variable cannot be used to modify the value at that location.

In other words, the constant variable itself is read-only and cannot be used to modify the value it points to. The memory location itself may still be writable, but any attempts to modify it through the constant variable will result in a compilation error.

It's worth noting that in C++, the const keyword can be used in different contexts, such as for defining constant pointers, references, or member functions. In each case, the behavior of the constant variable may differ slightly, but the basic idea is the same: the variable is read-only, but the memory location it points to may still be writable.
*/
