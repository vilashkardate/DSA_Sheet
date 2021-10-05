#include<iostream>
#include<cmath>
using namespace std;

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
}

int getMinDiff(int arr[],int n,int k)
{
    // sort(arr,arr+n);
    int ans;
    ans=abs(arr[0]-arr[n-1]);
    for(int i=1;i<n;i++)
        {
            if(arr[i]>=k)
            {
            int minn=min(arr[i]-k,arr[0]+k);
            int maxx=max(arr[n-1]-k,arr[i-1]+k);
            
            ans=min(ans,maxx-minn);
        
            }    
        }
        return ans;
}

int main()
{

    int arr[]={1, 5, 8, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Array  Element\n";
    print(arr,size);
    cout<<"Minimize the  Height of  Array is : "<<getMinDiff(arr,size,2)<<endl;
    return 0;
}
