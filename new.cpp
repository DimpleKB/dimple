#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[4][4]={(1,1,1,1),(1,0,1,1),(1,1,1,1),(1,1,1,0)},row[4]={0,0,0,0},col[4]={0,0,0,0},b[4][4];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            
            cout << a[i][j] << " ";
        }
    }
    // for(int i=0;i<4;i++)
    // {
    //     cout << col[i] << " ";
    // }
    // for(int i=0;i<4;i++)
    // {
    //     for(int j=0;j<4;j++)
    //     {
    //         if(row[i] || col[j])
    //         {
    //             a[i][j]=5;
    //         }
    //     }
    // }
    // for(int i=0;i<4;i++)
    // {
    //     for(int j=0;j<4;j++)
    //     {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }
}
