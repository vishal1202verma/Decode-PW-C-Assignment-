#include<iostream>
using namespace std;
int main (){
    // question no 1
// Take 2 integers input and print the greatest of them
// Input 1: a = 5 b = 7
// Output 1: second number 7 is the largest.
// Input 2: a = 12 b = 1
// Output 2 : first number 12 is the largest. 

int a,b;
cout<<"enter integer a:";
cin>>a;
cout<<"enter integer b:";
cin>>b;
if(a>b){
    cout<<a<<endl;

}
if(b>a){
    cout<<b<<endl;
}

// ques no 2
// Given the radius of the circle, predict whether numerically the area of this circle is larger than the 
// circumference or not
  float pi = 3.1415;
  int radius;
  cout<<"enter radius :";
  cin>>radius;
  float area = (pi*radius*radius);
  float circum = (2*pi*radius);
  if(area>circum){
    cout<<area<<endl;
  }
  if(circum>area){
    cout<<circum<<endl;
  }




}