#include<iostream>
#include<algorithm>
using namespace std;

void print(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
}
int min(int a,int b)
{
    if(a>b)
    return b;
    return a;
}

int minDiff(int arr[],int n,int m)
{
    sort(arr,arr+n);
    int minDif = INT32_MAX;
    for(int i=0;i+m<=n;i++)
    {
        minDif = min(minDif,arr[i+m-1]-arr[i]);
    }
    return minDif;
}


int main()
{
    int arr[] = {3,4,1,9,56,7,9,12};
    int size = sizeof(arr)/sizeof(arr[0]);
    print(arr,size);
    cout<<"Min Diff  in Array:   "<<minDiff(arr,size,5)<<endl;
    return 0;
}
