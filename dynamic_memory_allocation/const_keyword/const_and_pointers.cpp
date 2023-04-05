#include<bits/stdc++.h>

using namespace std;

int main()
{
    // DIFFERENCE BETWEEN POINTERS TO CONST INT AND CONST POINTERS TO INT

    // pointer pointing to a const int
    int m=7;
    int const* ptr1=&m;

    ++m;
    //++(*ptr1);

    int M=7;
    ptr1=&M;

    ++M;
    // ++(*ptr1);

    // const pointer to an int
    int n=8;
    int* const ptr2=&n;

    ++n;
    ++(*ptr2);

    int N=8;
    // ptr2=&N;

    // const pointer to a const int
    int const p=9;
    int const* const ptr3=&p;

    // ++p;
    // ++(*ptr3);

    int P=9;
    // ptr3=&P;

    cout<<endl;
    return 0;
}
