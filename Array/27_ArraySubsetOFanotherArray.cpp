#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;

void print(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
}

string isSubset(int a1[], int a2[], int n, int m) {
    unordered_map<int ,int> mp;
    for(int i=0;i<n;i++)
        mp[a1[i]]++;
    for(int i=0;i<m;i++)
    {
        if(mp.find(a2[i])!=mp.end())
            continue;
        else
            return "No";
    }
    return "Yes";
}


int main()
{
    int arr[] = {10, 5, 2, 23, 19};
    int brr[] = {19, 5, 3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int size2 = sizeof(brr)/sizeof(brr[0]);
    cout<<"First Array elem:  ";
    print(arr,size);
    cout<<"Second Array elem:  ";
    print(brr,size2);
    cout<<"Max Profit Buy and sell  profit  : "<<isSubset(arr,brr,size,size2)<<endl;
    return 0;
}
