#include<bits/stdc++.h>

using namespace std;

int array_parameter_type_check(int arr[], int n)
{
    return sizeof(arr);
    // Here, we got the warning that sizeof on array function parameter 'arr' will return size of 'int*' rather than int[].
    // Hence, arrays are passed as pointers.
    // So, in the pointer, arr can be passed as 'int *arr' rather than 'int arr[]'.
}

int sum(int arr[], int n)
{
    int i, sum=0;

    for(i=0;i<n;i++)
        sum+=arr[i];

    return sum;
}

int main()
{
    int arr[]={1,2,3,4,5,6};
    int n=3;

    cout<<"Size of the array declared in main: "<<sizeof(arr)<<endl;
    cout<<"Size of the array passed into the function: "<<array_parameter_type_check(arr,n)<<endl;

    cout<<"Sum of the whole array: "<<sum(arr,6)<<endl;
    cout<<"Sum of the partial array: "<<sum(arr+3,3)<<endl;
    cout<<"Sum of the partial array but also including garbage values beyond the last element: "<<sum(arr+3,9)<<endl;

    cout<<endl;
    return 0;
}
