#include<iostream>
using namespace std;


void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
}

int Kadnas_MaxSum(int arr[],int n)
{
    int maxSum = arr[0];
    int currSum = 0;
    for(int i=0;i<n;i++)
    {
        currSum += arr[i];
        if(maxSum<currSum)
            maxSum = currSum;
        if(currSum < 0)
            currSum = 0;
    }
    return maxSum;
}

int main(){
    int arr[]={1,2,-3,4,-3,5,-5};
    int size= sizeof(arr)/sizeof(arr[0]);
    cout<<"Array  Element : "<<endl;
    cout<<"Max sum of subarray : "<<Kadnas_MaxSum(arr,size);

    cout<<endl;
    return 0;
}