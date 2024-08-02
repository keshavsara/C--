//Count the number of elements strictly greater than value x//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v(6);
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];
    }

    cout<<"Enter x:"<<endl;
    int x;
    cin>>x;
    return 0;

    int count = 0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>x)
        {
            count++;
        }
    }
}