#include<iostream>
using namespace std;

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
}

void rotateArray(int arr[],int n)
{
    int t=arr[n-1];
    for(int i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=t;

}

int main()
{

    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Befor Rotating\n";
    print(arr,size);
    rotateArray(arr,size);
    cout<<"After Rotating\n";
    print(arr,size);
    return 0;
}
