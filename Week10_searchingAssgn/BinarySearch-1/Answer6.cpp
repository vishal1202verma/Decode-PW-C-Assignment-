// Given a number ‘n’. Predict whether ‘n’ is a valid perfect square or not.
// Input 1: n = 36
// Output 1: yes
// Input 2: n = 45
#include<iostream>
#include<vector>
using namespace std;
int MySqrt(int num ){
        int lo = 0;
        int hi = num;
        while(lo<=hi){
            int mid = lo +(hi-lo)/2;
            long long m =(long long ) mid ;
            long long y = (long long)num;
            if(m*m == y) return mid;
            else if ( m*m < y){
                lo = mid +1;
            } 
            else{
                hi = mid -1;
            }
        }
        return {};
    } 
    char isPerfectSquare(int num) {
         int n = MySqrt(num);
         if ( n*n == num){
             cout<<"Yes the Integer is Perfect Square";
         }
         else{
             cout<<"No the integer is not Perfect Square";
         }
    }

int main (){
int num ;
cout<<"Enter any integer :";
cin>>num;
isPerfectSquare(num);


}
