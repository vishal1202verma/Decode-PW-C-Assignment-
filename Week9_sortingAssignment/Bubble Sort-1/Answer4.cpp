// Check if the given array is almost sorted. (elements are at-most one position away).
// Solution : 
// int A[5]={7,2,32,5,20};
#include<iostream>
#include<string>
using namespace std;
int main (){
int n = 5;
int A[n] = {7, 2, 32, 5, 20};
for (int i = 0; i < n - 1; i++) {
 if (A[i] > A[i + 1]) {
 swap(A[i], A[i + 1]);
 i++;
 }
 }
 int i;
 for (i = 0; i < n - 1; i++)
 if (A[i] > A[i + 1]) {
 cout<<"No"<<endl;
 break;
 } 
 if(i == n - 1)cout<<"Yes"<<endl;

return 0;
 

}