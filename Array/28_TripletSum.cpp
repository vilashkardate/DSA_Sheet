#include<iostream>
#include<unordered_set>
using namespace std;

void print(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
}

bool tripletSum(int arr[],int n , int X)
{

    for(int i=0;i<n;i++)
    {
        unordered_set<int> sett;
        int toFind = X- arr[i];
        for(int j=i+1;j<n;j++)
        {
            if(sett.find(toFind-arr[j])!=sett.end())
                return true;
            sett.insert(arr[j]);
        }
    }
    return false;
}


int main()
{
    int arr[] = {10, 5, 2, 23, 19};
    int size = sizeof(arr)/sizeof(arr[0]);
    print(arr,size);
    cout<<"Triplet sum in Array:   "<<tripletSum(arr,size,7)<<endl;
    return 0;
}
