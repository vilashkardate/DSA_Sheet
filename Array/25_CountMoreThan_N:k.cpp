#include<iostream>
#include<unordered_map>
using namespace std;


void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
}

int countNKocurrence(int arr[],int n,int k)
{
    unordered_map <int , int> mp;
    for(int i=0;i<n;i++)
        mp[arr[i]]++;
    
    int x = n/k;
    int counter = 0;
    for(auto elem : mp)
    {
        if(elem.second > x){
            // cout<<elem.first<<"  ";
            counter++;
        }
    }
    cout<<endl;
    return counter;
}


int main(){
    int arr[]={ 1, 1, 2, 2, 3, 5, 4, 2, 2, 3, 1, 1, 1 };
    int size= sizeof(arr)/sizeof(arr[0]);
    cout<<"Array  Element : "<<endl;
    cout<<"Count of N / K Occurrence : "<<countNKocurrence(arr,size,4);

    cout<<endl;
    return 0;
}