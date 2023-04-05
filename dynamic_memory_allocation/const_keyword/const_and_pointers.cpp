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
//________________________________________________________________________________________________________________________________________________________________
/*
DOUBT: What is the difference between 'int const * ptr' and 'int * const ptr' in c++?

In C++, int const * ptr and int * const ptr are both pointer declarations, but they have different meanings and behaviors.

int const * ptr is a pointer to a constant integer. This means that the integer value pointed to by ptr cannot be modified through ptr. However, ptr itself can be modified to point to a different integer. For example, the following code is valid:

int num = 5;
int const * ptr = &num;  // ptr points to a constant integer
int num2 = 10;
ptr = &num2;  // ptr is reassigned to point to a different integer

On the other hand, int * const ptr is a constant pointer to an integer. This means that the pointer value ptr cannot be modified to point to a different integer. However, the integer value that ptr points to can be modified. For example, the following code is valid:

int num = 5;
int * const ptr = &num;  // ptr is a constant pointer to an integer
*ptr = 10;  // the integer value that ptr points to is modified

It's also possible to declare a pointer as both a constant pointer to a constant integer, like this: int const * const ptr. This means that both the pointer value ptr and the integer value pointed to by ptr are constant and cannot be modified.

Understanding the difference between these pointer declarations is important in C++, as it allows you to specify exactly how the pointer and its underlying data can be modified or accessed.
*/
//________________________________________________________________________________________________________________________________________________________________
/*
DOUBT: Can 'int const * ptr' pointer point to a non-const integer?

Yes, a int const * pointer can point to a non-const integer, but you must use a typecast to remove the const-ness before attempting to modify the integer through the pointer.

For example, consider the following code:

int num = 5;
int const * ptr = &num;  // ptr points to a constant integer

int* non_const_ptr = const_cast<int*>(ptr); // Cast away the const-ness of ptr

*non_const_ptr = 10;  // OK: modify the integer value that ptr points to

std::cout << num << std::endl; // outputs 10

In this code, we first declare a non-const integer variable num and a int const * pointer ptr that points to num. Since ptr is a pointer to a constant integer, we cannot directly modify the value of num through ptr.

However, we can use a typecast to remove the const-ness of ptr and create a new pointer non_const_ptr that points to the same memory location as ptr. We can then use non_const_ptr to modify the value of num.

It's important to use typecasts with caution, as modifying a constant variable through a non-const pointer can result in undefined behavior if the variable was originally declared as const for a reason. It's generally better to use non-const pointers to non-const variables whenever possible, and to only use typecasts as a last resort when working with const variables.
*/
//________________________________________________________________________________________________________________________________________________________________
