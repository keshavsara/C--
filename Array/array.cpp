#include<bits/stdc++.h>
using namespace std;
int main()
{
int array[]={1,2,3,4};    
int size = sizeof(array)/sizeof(array[0]);
/*for(int idx=0;idx<sizeof(array[0]);idx++)
{
    //cout<<array[idx]<<endl;
}
int index=0;
while(index<size)
{
    cout<<array[index]<<endl;
    index++;
    }*/
   char vowels[5];
   for (int idx=0;idx<5;idx++)
   {
    cin>>vowels[idx];
   }
   for(int idx=0;idx<5;idx++)
   {
    cout<<vowels[idx]<<" ";
   }
   return 0;
}
