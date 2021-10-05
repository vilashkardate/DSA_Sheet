#include<iostream>
#include<unordered_set>
using namespace std;

void print(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
}

void rotate(int arr[],int start,int end)
{
   int temp=arr[end];
	for(int i=end-1;i>=start;i--)
	{
        arr[i+1]=arr[i];
	}
    arr[start]=temp;
}
 
void rearrange(int nums[],int n)
{
    int i=0,j=0,k=0;
	    while(k<n && i<n && j<n)
	    {
	        if(k%2==0)
	        {
	            if(nums[k]>=0)
	            {
	                i=k;
	                j=k;
	                while(i<n && nums[i]>=0) i++;
	                if(i>=n) break;
	                else rotate(nums,j,i);
	            }
	        }
	        else
	        {
	             if(nums[k]<0)
	            {
	                i=k;
	                j=k;
	                while(j<n && nums[j]<0) j++;
	                if(j>=n)  break;
	                else rotate(nums,i,j);
	            }
	        }
	        k++;
	    }
    return ;
}
 

int main()
{
    int arr[] = { -5, -2, 5, 2,4, 7, 1, 8, 0, -8 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    cout << "Given array is \n";
    print(arr, n);
 
    rearrange(arr, n);
 
    cout << "Rearranged array is \n";
    print(arr, n);
 
    return 0;

}
