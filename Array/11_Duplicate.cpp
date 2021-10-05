#include<iostream>
#include<cmath>
using namespace std;

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
}

int  duplicateArray(int arr[],int n)
{
    int slow = arr[0];
    int fast = arr[0];
    do{
        slow = arr[slow];
        fast = arr[arr[fast]];
    }while(slow!=fast);

    fast = arr[0];
    while(slow!=fast)
    {
        slow = arr[slow];
        fast = arr[fast];
    }
    return slow;
    
}

int main()
{

    int arr[]={1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Array Elem\n";
    print(arr,size);
    cout<<"Duplicate number  is : "<<duplicateArray(arr,size)<<endl;
    return 0;
}
