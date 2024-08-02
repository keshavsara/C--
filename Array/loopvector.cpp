#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    

    for(int i=0;i<5;i++)
    {
        int element;
        cin>>element;
        v.push_back(element);
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.insert(v.begin()+2,6);
    return 0;
   //while loop
   /*int idx=0;
   while(idx<v.size())
   {
    cout<<v[idx++]<<" ";
   }
   return 0;*/
}