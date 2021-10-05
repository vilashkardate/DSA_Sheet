#include<iostream>
#include<vector>
using namespace std;

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
}
void nextPermutation(vector<int>& a) {
        int n=a.size();
        int x=a[n-1],y=-1,z=-1;       //x keeps track of maximum value from last
			for(int i=n-1;i>=0;i--){
					if(a[i]<x){       //whenever a value is less then x we point it because that will be index from which array will change
					y=i;break;
				}
				x=max(x,a[i]);
        }
        if(y!=-1){        // if y==-1 that means no index got selected in above loop that mean array is in descending order, so we ignore these steps in which we find out which index will get swapped with yth index(i.e. just greater one).
        for(int i=n-1;i>=0;i--){
            if(a[i]>a[y]){
                z=i;break;
            }
        }
        swap(a[y],a[z]);
        }
        for(int i=y+1;i<=(y+n)/2;i++){ //now order the array after yth index in ascending order which was in descending previously
            if(i==n-i+y){continue;}
            swap(a[i],a[n-(i-y)]);
        }
    }

int main()
{

    vector<int> vect1{ 10, 20, 30 };
    nextPermutation(vect1);
    return 0;
}
