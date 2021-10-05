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


int reverse(int n)
{
    int nn=n;
    int res =  0;
    while(n)
    {
        int rem = n%10;
        res = (res*10)+rem;
        n=n/10;
    }
    // cout<<"n= "<<nn;
    // cout<<"res= "<<res<<endl;
    return res;
}

bool isPalindrom(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=reverse(arr[i]))
            return false;
    }
    return true;
}

int main(){
    int arr[]={111, 222, 3333, 4444};
    int size= sizeof(arr)/sizeof(arr[0]);
    cout<<"Array  Element : "<<endl;
    print(arr,size);
    cout<<"Is Palindrome : "<<bool(isPalindrom(arr,size));

    cout<<endl;
    return 0;
}