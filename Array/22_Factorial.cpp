#include<iostream>
#include<cmath>
using namespace std;
int fact(int n){

     return (n==0) || (n==1) ? 1 : n* fact(n-1);
}
int main(){
    int n = 6;
    cout<<fact(n)<<endl;
    return 0;
}