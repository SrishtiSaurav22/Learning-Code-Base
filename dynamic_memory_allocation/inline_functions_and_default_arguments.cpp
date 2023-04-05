/*
 About inline functions:
 https://www.geeksforgeeks.org/inline-functions-cpp/

 About default arguments:
 https://www.geeksforgeeks.org/default-arguments-c/

*/

#include<bits/stdc++.h>

using namespace std;

inline int find_max(int a, int b)
{
    return (a>b)?a:b;
}

/*
 Default arguments are set from the right end.

 Here, if I set a default argument for a, i.e. 1,
 then I get the error: default argument missing for parameter 2 of the function int sum(int, int, int, int).
*/
int sum(int a, int b, int c=0, int d=0)
{
    return a+b+c+d;
}

int main()
{
    // INLINE FUNCTION CALLS
    int a,b,c;
    cin>>a>>b;

    c=find_max(a,b);
    cout<<"Max. of "<<a<<" and "<<b<<" is "<<c<<endl;

    int x,y,z;
    cin>>x>>y;

    z=find_max(x,y);
    cout<<"Max. of "<<x<<" and "<<y<<" is "<<z<<endl;
 
    // CALLING FUNCTION WITH DEFAULT ARGUMENTS
    cout<<sum(1,2,3,4)<<endl;
    cout<<sum(1,2,3)<<endl;
    cout<<sum(1,2)<<endl;

    cout<<endl;
    return 0;
}
