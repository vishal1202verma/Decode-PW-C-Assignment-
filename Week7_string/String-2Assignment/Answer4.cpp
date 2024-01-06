// Given an array of strings. Check whether they are anagram or not.
// Input : s = "car" , t = "arc"
// Output : True

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main (){
string s =  "car" ;
string  t = "arc";
for(int i=0; i<s.size(); i++){
    for(int j=0; j<t.size(); j++){
        if(s[i] == t[j]){
            cout<<"strings are anagram";
            break;
        }
        else{
            cout<<"strings are not anagram";
            break;
        }
        break;
    }
    break;
}
    
}