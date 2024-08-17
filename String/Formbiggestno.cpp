#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
    string s = "53214";
    int x = stoi(s);
    cout<<"The integer is "<<x<<endl;
    sort(s.begin(),s.end());
    reverse(s.begin(),s.end());
    cout<<s;
    */
    string s = "1234567890";

    sort(s.begin(),s.end(),greater<int>());
    cout<<s<<endl;
}