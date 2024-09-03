#include<bits/stdc++.h>
using namespace std;
int countPathMaze(int n,int i,int j)
{
    if(i==n-1 && j==n-1)
    {
        return 1;
    }
    if(i>=n || j>=n)
    {
        return 1;

    }
    if(i>=n || j)
}
