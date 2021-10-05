#include<iostream>
#include<unordered_set>
using namespace std;


void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
}

int longestConsSubSeq(int arr[],int n)
{
    unordered_set<int> sett ;
	   for(int i=0;i<n;i++)
	   {
	       sett.insert(arr[i]);
	   }
	   int c=0;
	   for(int i=0;i<n;i++)
	   {
	       if(sett.find(arr[i]-1)!=sett.end())
	       {
	           int val = arr[i]+1;
	           while(sett.find(val)!=sett.end()) val++;
	           c=max(c,val-arr[i]);
	       }
	   }
	   return c;

	}


int main(){
    int arr[]={2,6,1,9,4,5,3};
    int size= sizeof(arr)/sizeof(arr[0]);
    cout<<"Array  Element : "<<endl;
    cout<<"Longest Consecutive  subsequence : "<<longestConsSubSeq(arr,size);

    cout<<endl;
    return 0;
}