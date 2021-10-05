#include<iostream>
#include<vector>
using namespace std;

void print(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
}

int Stock(int  arr[], int n)
{
    int minSoFar = arr[0];
    int maxProfit  = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<minSoFar)
            minSoFar = arr[i];
        if(maxProfit < (arr[i]-minSoFar))
            maxProfit = arr[i]-minSoFar;
    }
    return maxProfit;
}


int main()
{
    int arr[] = {2, 4, 1, 3, 5}    ;
    int size = sizeof(arr)/sizeof(arr[0]);
    print(arr,size);
    cout<<"Buy and sell max profit  : "<<Stock(arr,size)<<endl;
    return 0;
}
