#include<iostream>
#include<queue>
using namespace std;


void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
}

int kTHsmallest(int arr[],int n,int k)
{
    int min;
    priority_queue<int> pq;
    for(int i=0;i<n;i++)
    {
        pq.push(-arr[i]);
    }
    for(int i=0;i<k;i++)
    {
        min = -pq.top();
        pq.pop();
    }
    return min;
}

int main(){
    int arr[]={0,6,3,9,7,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    print(arr,size);
    int k = 3;

    cout<<"Kth smallest Element in array : "<<kTHsmallest(arr,size,k)<<endl;
    

}