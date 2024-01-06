// Input a string and return the number of substrings that contain only vowels.
// Input : str = "abjkoe"
// Output : 4
// Explanation : The possible substrings that only contain vowels are "a" , "o" , "e" , "oe"
// Input : str = "hgdhpw"
// Output : 0

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main (){
string s ="abjkoe";
int n  = s.length();
int count =0;
for(int i=0; i<n; i++ ){
    if( s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
      count++;
     
    }
    
}
cout<<count;


}