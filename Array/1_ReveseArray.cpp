#include<iostream>
using namespace std;

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
}

void reverseArray(int arr[],int n)
{
    int l= 0;
    int h= n-1;
    while(l<h){
        swap(arr[l] , arr[h]);
        l++;
        h--;
    }
}

int main()
{

    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Befor Reverse\n";
    print(arr,size);
    reverseArray(arr,size);
    cout<<"After Reverse\n";
    print(arr,size);
    return 0;
}
