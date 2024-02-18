// Write a recursive function to reverse a number. Avoid preceding 0s in the reversed number
#include<iostream>
using namespace std;
int reverseNum( int n , int ans){
    if(n==0) return ans;
     int digit = n%10;
     ans = ans*10 + digit;
     reverseNum(n/10, ans);    
    // return ans;

}

int main(){
 int n;
 cout<<"Enter the Number :";
 cin>>n;
 cout<<"the Reverse order of the NUmber is :"<<reverseNum(n, 0);
 




}