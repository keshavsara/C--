#include<bits/stdc++.h>
using namespace std;
int main()
{
    int array[]={1,2,3,4,5,6};
    bool sorted = false;
for(int i=1;i<6;i++)
{
    if(array[i]<=array[i-1])
    {
        sorted = false;

    }
}
}