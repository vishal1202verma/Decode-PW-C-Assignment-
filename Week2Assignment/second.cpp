#include<iostream>
using namespace std;
int main (){

// ques no 3
// Any year is input through the keyboard. Write a program to determine whether  the year is a leap year 
// or not. (Considering leap year occurs after every 4 years

int year;
cout<<"enter any year :";
cin>>year;
// int leapyear;

if (year%4 == 0){
   cout<<"year will be leapyear :"<<year;
    
}
else{
cout<<"year will not be leapyear"<<endl;
}

// ques no 4
// Given the length and breadth of a rectangle, write a program to find whether numerically the area of 
// the rectangle is greater than its perimeter

int length = 5;
int width = 7;
int area = length*width;
if(area>length>width){

   cout<<area<<endl;
}

// ques no 3
// Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or 
// isosceles triangle

int a = 5;
int b = 4;
int c = 4;
if(a==b || b==c || c==a){
    cout<<"this is an isoscale traingle"<<endl;
}
if(a==b==c){
    cout<<"this is an quilateral traingle";
}
if (a!=b!=c)
{
    cout<<"this is an scalence traingle";
}





}