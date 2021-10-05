#include<iostream>
#include<unordered_map>
using namespace std;

void print(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
}

int getPairCount(int arr[],int n,int sum)
{
    unordered_map<int , int> mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }

    int twice_count = 0;
    for(int i=0;i<n;i++)
    {
        twice_count += mp[sum-arr[i]];
        if(sum-arr[i] == arr[i])
            twice_count--;
    }
    return twice_count;

}


int getPairsCount(int arr[],int n,int sum)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(sum == arr[i]+arr[j])
                count++;
        }
    }
    return count;
}


int main()
{
    int arr[] = {2, 4, 1, 3, 5}    ;
    int size = sizeof(arr)/sizeof(arr[0]);
    print(arr,size);
    int k=6;
    cout<<"Buy and sell max profit  : "<<getPairsCount(arr,size,k)<<endl;
    return 0;
}
