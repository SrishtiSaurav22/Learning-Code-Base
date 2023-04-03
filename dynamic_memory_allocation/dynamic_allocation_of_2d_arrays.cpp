#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m,n;

    cout<<"Enter the no. of rows: ";
    cin>>m;

    cout<<"Enter the no. of columns in each row: ";
    cin>>n;

    // we can create rows with different columns sizes, i.e. jagged arrays

    // ALLOCATION
    int **p=new int*[m];

    for(int i=0;i<m;i++)
        p[i]=new int[n];

    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            p[i][j]=(i*10)+j;

    cout<<"Printing the 2D array:"<<endl;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cout<<"p[i][j]: "<<p[i][j]<<endl;

    // DEALLOCATION
    for(int i=0;i<m;i++)
        delete [] p[i];

    delete []p;

    cout<<endl;
    return 0;
}
