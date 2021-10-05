#include<iostream>
using namespace std;


void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
}

void sort012(int arr[],int n)
{
    int zero,one,two;
    zero=one=two=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
            zero++;
        else if(arr[i]==1)
            one++;
        else
            two++;
    }
    int index=0;
    for(int i=0;i<zero;i++)
    {
        arr[index]=0;
        index++;
    }
    for(int i=0;i<one;i++)
    {
        arr[index]=1;
        index++;

    }
    for(int i=0;i<two;i++)
    {
        arr[index]=2;
        index++;
    }
} 
int main()
{
    int arr[]= {0 , 2 , 1 , 2 , 0};
    int size = sizeof(arr)/sizeof(arr[0]);
    print(arr,size);
    cout<<"Sort array by 0 1 2 : "<<endl;
    sort012(arr,size);
    print(arr,size);

    return 0;
}