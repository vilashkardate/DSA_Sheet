#include<iostream>
#include<cmath>
using namespace std;

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
}

int jumpArray(int arr[],int n)
{
    int maxx=0,jump=0,halt=0;
     if(arr[0]==0) return -1;
     for(int i=0;i<n-1;i++)
     {
         maxx=max(maxx,i+arr[i]);
         if(i==halt)
         {
             halt=maxx;
             jump++;
         }
     }
     
     if(halt>=n-1)
     {
         return jump;
     }
     return -1;
}

int main()
{

    int arr[]={1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Array Elem\n";
    print(arr,size);
    cout<<"Minimun number of jump is : "<<jumpArray(arr,size)<<endl;
    return 0;
}
