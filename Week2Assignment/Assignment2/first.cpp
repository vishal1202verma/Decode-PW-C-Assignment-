#include<iostream>
using namespace std;
int main (){
    // question no 1
    // Write a program to count the minimum number of notes in a given amount using the switch statement.
    int amount ;
    cout<<"enter amount : ";
    cin>>amount;
    int notes = 10; 20; 50; 100; 200; 500; 2000;
    
    if(amount == 10){
        cout<<"10 rupee note Rs"; 
    }
    if (amount>= 10 && amount <= 20){
       cout<<" 10 rupes note Rs : " <<amount/10<<endl<< "other amount  Rs :"<< amount%10<<endl;

    }
  
    if(amount>=20 && amount<= 50){
        cout<<"20 rupess note Rs:"<<amount/20<<endl << "other amount Rs:"<<amount%20<<endl;

    } 
    

    if(amount>=50 && amount<= 100){
        cout<<"50 rupess note Rs:"<<amount/50<<endl << "other amount Rs:"<<amount%50<<endl;

    } 
   

    if(amount>=100 && amount<= 200){
        cout<<"100 rupess note Rs:"<<amount/100<<endl << "other amount Rs:"<<amount%100<<endl;

    } 
    

    if(amount>=200 && amount<= 500){
        cout<<"200 rupess note Rs:"<<amount/200<<endl << "other amount Rs:"<<amount%200<<endl;

    } 
    

    if(amount>=500 && amount<= 2000){
        cout<<"500 rupess note Rs:"<<amount/500<<endl << "other amount Rs:"<<amount%500<<endl;

    } 
    

    if(amount>=2000 ){
        cout<<"2000 rupess note Rs:"<<amount/2000<<endl << "other amount Rs:"<<amount%2000<<endl;

    } 
    

    
}