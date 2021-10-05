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


int smallestSubarray(int arr[],int n,int x)
{
        int start=0,end=1;
        int result=INT16_MAX;
        int sum=arr[start];
        if(sum>x) return 1;
        if(end<n) sum+=arr[end];
        
        while(start<n && end<n)
        {
            if(sum>x)
            {
                result = min(result,end-start+1);
                sum-=arr[start];
                start++;
            }
            else
            {
                end++;
                if(end<n)
                {
                    sum+=arr[end];
                }
            }
        }
        return result;

}


int main(){
    int arr[]={1, 10, 5, 2, 7};
    int size= sizeof(arr)/sizeof(arr[0]);
    cout<<"Array  Element : "<<endl;
    print(arr,size);
    cout<<"Smallest SubArray : "<<smallestSubarray(arr,size,9);

    cout<<endl;
    return 0;
}