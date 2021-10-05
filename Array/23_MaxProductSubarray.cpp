#include<iostream>
#include<cmath>
using namespace std;


void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
}

int maxProductInSubaaray(int arr[],int n)
{
    int maxx = arr[0];
    int miin = arr[0];
    int res = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            maxx=1;
            miin=1;
            continue;
        }
        int temp1 = arr[i]*maxx;
        int temp2 = arr[i]*miin;
        maxx = max(temp1,temp2);
        maxx = max(maxx,arr[i]);
        miin = min(temp1,temp2);
        miin = min(miin,arr[i]);
        res = max(res,maxx);

    }
    return res;
}

int main(){
    int arr[]={1,2,-3,5};
    int size= sizeof(arr)/sizeof(arr[0]);
    cout<<"Array  Element : "<<endl;
    cout<<"Max Product  in subarray : "<<maxProductInSubaaray(arr,size);

    cout<<endl;
    return 0;
}