#include<iostream>
using namespace std;


void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
}

int maxElem(int arr[],int n)
{
    int max = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
            max = arr[i];
    }
    return max;
}

int minElem(int arr[],int n)
{
    int min = INT16_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
            min = arr[i];
    }
    return min;
}


int main(){
    int arr[]={0,6,3,9,7,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    print(arr,size);
    cout<<"Max Element in array : "<<maxElem(arr,size)<<endl;
    cout<<"Min Element in array : "<<minElem(arr,size)<<endl;
    

}