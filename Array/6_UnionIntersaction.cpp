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
int unionn(int arr[],int brr[],int n,int m)
{
    set<int> s;
    for(int i=0;i<n;i++)
        s.insert(arr[i]);
    for(int i=0;i<m;i++)
        s.insert(brr[i]);
    return s.size();
}

int intersection(int arr[],int brr[],int n,int m)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                break;
            }
        }
    }
    return count;
    
}
int main()
{

    int arr[]={1,2,3,4,5};
    int brr[]={1,2,3};
    int size1 = sizeof(arr)/sizeof(arr[0]);
    int size2 = sizeof(brr)/sizeof(brr[0]);
    cout<<"First Array\n";
    print(arr,size1);
    cout<<"Second Array\n";
    print(brr,size2);
    cout<<"Union of two array " <<unionn(arr,brr,size1,size2)<<endl;
    cout<<"Intersection of two Array "<<intersection(arr,brr,size1,size2)<<endl;
    return 0;
}
