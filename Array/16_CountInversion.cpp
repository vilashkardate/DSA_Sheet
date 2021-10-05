#include<iostream>
#include<vector>
using namespace std;

void print(long long int arr[],long long int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
}

long long int inversionCount(long long arr[], long long N)
{
    // Your Code Here
    long long int count=0;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(arr[i]>arr[j] && i<j)
                count++;
        }
    }
    return count;
}


int main()
{
    long long int arr[] = {2, 4, 1, 3, 5}    ;
    long long size = sizeof(arr)/sizeof(arr[0]);
    print(arr,size);
    cout<<"Count of Inversion is : "<<inversionCount(arr,size)<<endl;
    return 0;
}
