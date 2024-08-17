#include<bits/stdc++.h>
using namespace std;
int main()
{
 //   string s1 = "fam";
 // string s2 = "ily";
/*
    s1.append(s2);
    cout<< s1 <<endl;
    return 0;
*/
/*
    cout<< s1 + s2 <<endl;    
*/    
/*
    s1 = s1 + s2 ;
    cout<<s1<<endl;
*/

//to access any element in a string 
//cout<< s1[1] << endl;

//clear function
/*
string abc = "Keshav Sara ";
abc.clear();
cout<< abc ;
*/

//Compare string 
/*
string s1 = "abc";
string s2 = "xyz";
cout<< s2.compare(s1)<<endl;
*/

//compare using if condition 
/*
string s1 = "abc";
string s2 = "abc";

if(s1.compare(s2) == 0)
{
    cout<<"Strings are equal"<<endl;

}
*/


//To check weather the given string is empty or not 
/* string s1 = " abc ";
cout<< s1 << endl;

s1.clear();

if(!s1.empty())
{
    cout<<"String is empty "<<endl;
}
else
{
    cout<<"String is not empty"<<endl;
}
*/
//use of erase function
/*
string s1 = "nincompoop";
s1.erase(3,2);
cout<<s1;
*/

//find function 
/*
string s1 = "nincompoop";

cout<< s1.find("com");
return 0;
*/


//insert string
/*
string s1 = "nincompoop";
s1.insert(3,"lol");
cout<<s1<<endl;
*/

//length 
/*
string s1 = "nincompoop";
cout<<s1.size()<<endl;
return 0 ;
*/

//iterate
/*
string s1 = "nincompoop";

for(int i = 0; i<s1.length() ; i++)
{
    cout<< s1[i] <<endl;
    
}
return 0 ;
*/


//substring 
/*
string s1 = "nincompoop";

string s = s1.substr(6,4);
cout<< s<< endl;

return 0;
*/

//string to integer 
/*
string s1 = "786";
int x = stoi(s1);
cout<<x+2<<endl;
*/

//integer to string
/*
int x = 786;
cout<< to_string(x) + "2" <<endl;
return 0 ;
*/

//sort a string 
string  s1 = "qwertyuiopasdfghjklzxcvbnm";

sort (s1.begin(),s1.end());

cout<<s1<<endl;
return 0 ;
}