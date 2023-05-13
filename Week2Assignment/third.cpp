#include<iostream>
using namespace std;
int main(){

//   ques no 7  Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).
// Input 1: 2 0
// Output 1: the point lies on the x - axis

 int x,y;
 cout<<"enter x:";
 cin>>x;
 cout<<"enter y :";
 cin>>y;
 if(y==0 && x!=0){
    cout<<"this point is lies on x axis"<<endl;

 }
 if(x==0 && y!=0){
    cout<<"this point is lies on y axis"<<endl;
 }
 if (x==0 && y==0)
 {
    cout<<"this point is at origin";
 }
 if ( x != 0 && y != 0) {
    cout<<"point is lies between x-axis and y-axis"<<endl;
 }
// ques no 9
// Write a C++ program to input any character and check whether it is the alphabet, digit or special 
// character

char ch;
cout<<"enter any character :";
cin>>ch;
if( (ch >= 'a'&& ch<= 'z') || (ch>= 'A' && ch<= 'Z')  ) {
    cout<<"it is an alphabet";
}
if(ch >= 0 && ch<= 9){
    cout<<"it is an digit";
}
else{
    cout<<"it is an special character";
}






}