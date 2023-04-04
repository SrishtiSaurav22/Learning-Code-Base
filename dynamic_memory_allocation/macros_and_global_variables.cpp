/*
 To read more about preprocessor directives:

 https://www.geeksforgeeks.org/cc-preprocessors/
 https://www.tutorialspoint.com/cplusplus/cpp_preprocessor.htm
 
 Read more about the different types of preprocessor directives and how and where to use them.

 The reason that this is part of dynamic memory allocation:
 Ppreprocessor macro definitions are substituted in the appropriate before the compiler compiles the source code
*/

#include<bits/stdc++.h>

using namespace std;

#define PI 3.14
#define sum(a,b) (a+b)

int a=5; // maybe name it "g_a" for more clarity?

void func1()
{
    ++a;
}

void func2()
{
    --a;
}

int main()
{
    // USING MACROS
    float r=1.5;
    cout<<"Area of circle of radius "<<r<<" units = PI * r * r = "<<PI*r*r<<" sq. units"<<endl;

    int n1=1, n2=2;
    cout<<"Sum of two numbers "<<n1<<" and "<<n2<<" is "<<sum(n1,n2)<<endl;

    // USING A GLOBAL VARIABLE
    cout<<"a = "<<a<<endl;
    func1();
    cout<<"a = "<<a<<endl;
    func2();
    cout<<"a = "<<a<<endl;
    ++a;
    cout<<"a = "<<a<<endl;

    cout<<endl;
    return 0;
}
