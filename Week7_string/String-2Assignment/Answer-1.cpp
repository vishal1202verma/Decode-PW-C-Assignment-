// Input a string and concatenate with its reverse string and print it.
// Input : str = "PWSkills"
// Output : "PWSkillssllikSWP" 
// Input : str = "pw"
// Output : "pwwp"
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main (){
string s1 = "PWSkills";
// string s2 = "sllikSPW";
// reverse(s1.begin(), s1.end());
string temp = s1;
reverse(temp.begin(), temp.end());
s1 += temp;
cout << s1 << '\n';






} 