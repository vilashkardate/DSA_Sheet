#include<iostream>
#include<vector>
using namespace std;

void print(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
}

int maxProfit_Buy_Sell(int arr[],int n)
{

}


int main()
{
    int arr[] = {2, 4, 1, 3, 5}    ;
    int size = sizeof(arr)/sizeof(arr[0]);
    print(arr,size);
    cout<<"Max Profit Buy and sell  profit  : "<<maxProfit_Buy_Sell(arr,size)<<endl;
    return 0;
}
