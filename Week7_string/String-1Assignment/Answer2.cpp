// Input a string of length n and count all the consonants in the given string.
// Input : "pwians"
// Output : 4
// Input : "abdc"
// Output : 3

#include<iostream>
#include<string>
using namespace std;
int main(){
string s = "pwians";
int n  = s.length();
int c =0;
for(int i=0; i <(int)n; i++){
    // vowel = a, ,e, i, o , u
   if(s[i] == 'a' || s[i] == 'e' || s[i]== 'i' || s[i] == 'o' || s[i] == 'u' ){
               c++;
   }
   
}
cout<<"the number of consonants in the given array are :"<<n-c;

}