// Write a program to calculate the sum of odd numbers between a and b (both inclusive) using 
// recursion.
#include<iostream>
using namespace std;
int sumOdd( int a, int b){
   // it is the iterative waa to solve this 
//    for(int i=a; i<=b ; i++){
//            if(i%2 != 0 ){
//               sum += i;
//            }
//    }
   // now we solve this recursion
  if(a>b) return 0; //base conditon
  if(a%2 == 0) return sumOdd(a+1, b); // means a is even so a is excludede
  else return a + sumOdd(a+2, b); // Recursive call for the SumOdd
      
   

}
int main (){
cout<<sumOdd(2,13); // 3+5+7+9+11+13 = 48; 
}