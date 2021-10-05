#include<iostream>
#include<unordered_set>
using namespace std;


void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
}


bool zeroSum(int arr[],int n)
{
    bool found = false;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum += arr[j];
            if(sum==0)
            {
                found= true;
                break;
            }
        }
        if(found)break;
    }
    return  found;
}


void threeWayPartition(int arr[] , int n , int a,int b)
{
        int l = 0;
        int r = n-1;
        int i=0;
        for(i=0;i<=r;i++)
        {
            if(arr[i]<a)
            {
                swap(arr[l],arr[i]);
                l++;
            }
            else if(arr[i]>b)
            {
                swap(arr[r],arr[i]);
                r--;
                i--;
            }
        }
}


int main(){
    int arr[]={1, 2, 3, 3, 4};
    int size= sizeof(arr)/sizeof(arr[0]);
    cout<<"Array  Element : "<<endl;
    print(arr,size);
    threeWayPartition(arr,size,1,2);
    print(arr,size);

    cout<<endl;
    return 0;
}