// Write a program to apply binary search in array sorted in decreasing order.
#include<iostream>
#include<vector>
using namespace std;
int main(){
int a[] = {10,7,6,5,2,1};
 int n = 6;
 int tgt = 5;
int lo = 0;
int hi = n-1;
bool flag = false;
int ans = -1;
while(lo<=hi){
    int mid = lo + (hi-lo)/2;
    if(a[mid] == tgt){
        flag = true;
        ans = mid;
        break;

    }
    else if (a[mid]>tgt){
        lo = mid +1;
    }
    else{
        hi = mid -1;
    }
}
cout<<"The target's element index is :"<<ans;



}