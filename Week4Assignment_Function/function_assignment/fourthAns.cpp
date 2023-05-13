// : Write a function to count the number of digits in a number and then print the square of this number
#include<iostream>
using namespace std;
int Square ( int n){
     return n*n;
}
int NumofDigit(int num){
   int ans =0;
   while( num>0){
    ans++;
    num = num/10;
   }
   return ans;
}
int main(){
    int num;
    cout<<"enter the num :";
    cin>>num;
    int CountDigit = NumofDigit(num);
    cout<<"Square of number of digit is :"<<Square(CountDigit);
    
}