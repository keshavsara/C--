#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v(6);
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];
    }
    cout<<"enter x"<<endl;
    int x;
    cin>>x;

    int occurence =0;

    for(int ele:v)
    {
        if(ele==x)
        {
            occurence++;
        }
    }
    cout<<endl;
    cout<<occurence<<endl;
    return 0;
}