/*
Backtracking is an algorithmic-technique for solving recursive problems
by trying to build every possible solution incremently and 
removing those solutions that fails to satisfy the constraints of the 
problem at any point of time 
*/

#include<bits/stdc++.h>
using namespace std;

bool isSafe(int** arr,int x,int y,int n)
{
    if(x<n&& y<<n && arr[x][y]==1)
    {
        return true;
    }
    return false;
}

bool ratinmaze(int** arr,int x,int y,int n,int** solArr)
{
    if(x==n-1 && y==n-1)
    {
        solArr[x][y]=1;
        return true;
    }


    if(isSafe(arr,x,y,n))
    {
        solArr[x][y]=1;
        if(ratinMaze(arr,x+1,y,n,solArr))
        {
            return true;
        }
        if(ratinMaze(arr,x,y+1,n,solArr))
        {
            return true;
        }
        solArr[x][y]=0;   //backtracking
        return false;


    }
    return false;
}
int main()
{
    int n;
    cin>>n;

    int** arr=new int*[n];
    for(int i =0 ;i<n;i++)
    {
        arr[i]=new int [n];
    }

    for
}


