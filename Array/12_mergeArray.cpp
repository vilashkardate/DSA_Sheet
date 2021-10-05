#include<iostream>
#include<set>
#include<map>
using namespace std;

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
}

void mergeArray(int arr1[], int arr2[], int n, int m) {
	    int i,j;
	    i=j=0;
	    while(i!=n && j!=m)
	    {
	        if(arr1[i]<arr2[j])
	        {
	            i++;
	        }
	        else if(arr1[i]>arr2[j])
	        {
	            swap(arr1[i],arr2[j]);
	            i++;
	        
	        if (j < m - 1 && arr2[j + 1] < arr2[j]) {
                int temp = arr2[j];
                int tempj = j + 1;
                while (arr2[tempj] < temp && tempj < m) {
                    arr2[tempj - 1] = arr2[tempj];
                    tempj++;
                    }
                arr2[tempj - 1] = temp;
                }
	        }
	    }
}
int main()
{

    int arr[]={1,3,5};
    int brr[]={2,4,6};
    int size1 = sizeof(arr)/sizeof(arr[0]);
    int size2 = sizeof(brr)/sizeof(brr[0]);
    cout<<"First Array\n";
    print(arr,size1);
    cout<<"Second Array\n";
    print(brr,size2);
    cout<<"After Merging two array: "<<endl;
    mergeArray(arr,brr,size1,size2);
    print(arr,size1);
    print(brr,size2);
    return 0;
}
