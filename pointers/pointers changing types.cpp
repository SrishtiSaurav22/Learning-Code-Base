#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i=1;
    char c=i;

    int* pi=&i;
    char* pc=&c;

    cout<<*pi<<"\t"<<*pc<<endl;

    // pc=pi; throws the 'cannot convert in assignment' error

    pc=(char*)pi;

    cout<<*pi<<"\t"<<*pc;

    cout<<endl;
    return 0;
}


