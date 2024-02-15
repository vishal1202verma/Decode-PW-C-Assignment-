// Given a positive integer, return true if it is a power of 2
#include<iostream>
using namespace std;
int Power(int n , int a){
       if(a==0) return 1;
       else{
        return n*Power(n, a-1);
       }
 

}
int main (){
    int n;
    cout<<"Enetr Any Integer :";
    cin>>n;
    int a = 2;
    if(n*n==Power(n, 2)){
        cout<<"The Number is the Power of Two";
    }
    else{
        cout<<"False";
    }

}