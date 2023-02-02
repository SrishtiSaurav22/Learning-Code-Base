#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a=1;
    int *ap=&a;

    int arr[]={2,4,6};
    int *arrp=arr; // I'm getting an error when I put & before arr in this line.

    char c='a';
    char *cp=&c;

    char cstr[]="Barbados";
    char *cstrp=cstr; // I'm getting an error when I put & before cstr in this line.

    cout<<"Printing the values held by the variables and their corresponding pointers:\n";
    cout<<"a="<<a<<"\tap="<<ap;
    cout<<"\narr="<<arr<<"\tarrp="<<arrp;

    cout<<"\nc="<<c<<"\tcp="<<cp;
    cout<<"\ncstr="<<cstr<<"\tcstrp="<<cstrp;

    cout<<endl;
    return 0;
}
