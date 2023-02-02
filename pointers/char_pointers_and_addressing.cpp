// Here, we see the addressing of char and int pointers as well as how char and int variables, arrays and pointers are different

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int intVar=10;
    char charVar='j';

    int *IPTR=&intVar;
    char *CPTR=&charVar;

    int intArr[]={1,2,3};
    char charArr[]="123";

    int *iptr=intArr; // can't use iptr=&intArr; // We can simply print &intArr though.
    char *cptr=charArr; // Similar situation.

    // int charArrAddress=(int)&charArr;
    // error: case from 'char(*)[4]' to 'int' loses precision
    // how do I store the address of a character array?

    cout<<"\nPrinting the variables and their pointers: "<<endl;

    cout<<"intVar: "<<intVar<<endl;
    cout<<"charVar: "<<charVar<<endl;

    cout<<"IPTR: "<<IPTR<<endl;
    cout<<"CPTR: "<<CPTR<<endl;

    cout<<"\nPrinting the array variables and their pointers: "<<endl;

    cout<<"intArr: "<<intArr<<endl;
    cout<<"charArr: "<<charArr<<endl;
    cout<<"&intArr: "<<&intArr<<endl;
    cout<<"&charArr: "<<&charArr<<endl;
    cout<<"iptr: "<<iptr<<endl;
    cout<<"cptr: "<<cptr<<endl;

    cout<<"\nPrinting the array variables' individual elements and their pointers: "<<endl;

    int* iptr0=&intArr[0];
    char* cptr0=&charArr[0];

    int* iptr1=&intArr[1];
    char* cptr1=&charArr[1];

    cout<<"iptr0: "<<iptr0<<endl;
    cout<<"cptr0: "<<cptr0<<endl;

    cout<<"iptr1: "<<iptr1<<endl;
    cout<<"cptr1: "<<cptr1<<endl;

    char charArray[]="abcde";
    char *charPtr="abcde"; // warning: ISO C++ forbids converting a string constant to 'char*'

    cout<<"\nPrinting char arrays that are 'created' in two different ways: "<<endl;

    cout<<"charArray: "<<charArray<<endl;
    cout<<"charPtr: "<<charPtr<<endl;

    // trying to slightly modify these two

    charArray[1]='B';
    // charPtr[1]='B'; // This modification did not work. Also, this is the line causing problems. Why?

    cout<<"charArray: "<<charArray<<endl;
    // cout<<"charPtr: "<<charPtr<<endl;

    // Creating pointers actually pointing to the arrays (i.e. assigning &arrayVar to its pointer):

    int intArray1[]={1,2,3};
    char charArray1[]="123";

    // A pointer to an integer array would look like this:

    int (*intArray1Ptr)[3]=&intArray1; // this is perfectly valid

    cout<<"\nintArray1Ptr: "<<intArray1Ptr<<endl;

    // A pointer to a char array would look like this:

    char (*charArray1Ptr)[4]=&charArray1;
    /*
     Here, there's a thing to note:
     The character pointer here is not pointing to a char array of size 3,
     rather a char array of size 4 ('1', '2', '3', and '\0')

     In char array declarations, we don't need to mention the size including
     the null character, but for the pointer to that char array we have to.
    */

    cout<<"\ncharArray1Ptr: "<<charArray1Ptr<<endl;

    cout<<endl;
    return 0;
}
