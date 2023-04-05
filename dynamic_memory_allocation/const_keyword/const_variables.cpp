#include<bits/stdc++.h>

using namespace std;

int main()
{
    // NON-CONST VARIABLES
    int i=20;
    int &j=i;

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
