// LeetCode 441  Arrenging the Coins find the rows of completed by coins
#include<iostream>
#include<vector>
using namespace std;
int arrangeCoins(int n) {
        long long lo = 1;
        long long  hi = n;
        while(lo<=hi){
            long long mid = lo +(hi-lo)/2;
            long long k = (mid*(mid+1))/2;
            if( k ==n){
                return mid;

            }
            else if(k>n) {
               hi  = mid -1;
            }
            else{
                lo = mid +1;
            }
        }
        return hi;
    }

int main (){
int n;
cout<<"Enter the numbers of Coins :";
cin>>n;
cout<<"The number of the rows completed by the coins is :"<<arrangeCoins(n);

} 