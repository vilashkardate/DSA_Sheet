#include<iostream>
using namespace std;

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
}

void NegativePostive(int arr[],int n)
{
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            if(i!=j)
                swap(arr[i],arr[j]);
            j++;
        }
    }
}

int main()
{

    int arr[]={-1,2,-3,4,-5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Befor Negative and postive\n";
    print(arr,size);
    NegativePostive(arr,size);
    cout<<"After Negative and postive\n";
    print(arr,size);
    return 0;
}
