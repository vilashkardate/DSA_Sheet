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

bool ZeroSum(int arr[],int n)
{
    unordered_set<int>sett;
    int sum = 0;
    bool found = false;
    for(int i=0;i<n;i++)
    {
        sett.insert(sum);
        sum+=arr[i];
        if(sett.find(sum)!=sett.end())
            {
                found=true;
                break;
            }
    }
    return found;
}

int main(){
    int arr[]={1,2,-3,4,5};
    int size= sizeof(arr)/sizeof(arr[0]);
    cout<<"Array  Element : "<<endl;
    print(arr,size);
    cout<<"In Array  Sum of subarray is 0 or not : "<<ZeroSum(arr,size);

    cout<<endl;
    return 0;
}