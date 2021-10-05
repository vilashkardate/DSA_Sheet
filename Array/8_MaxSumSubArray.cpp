#include<iostream>
using namespace std;

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
}

int maxSum(int arr[],int n)
{
    int maxSum=arr[0];
    int currSum=0;
    for(int i=0;i<n;i++)
    {
            currSum +=arr[i];
            if(currSum>maxSum)
                maxSum=currSum;
            if(currSum<0)
                currSum=0;
    }
    return maxSum;
}

int main()
{

    int arr[]={1,2,-3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Array  Element\n";
    print(arr,size);
    cout<<"Maximum sum of Sub Array is : "<<maxSum(arr,size)<<endl;
    return 0;
}
