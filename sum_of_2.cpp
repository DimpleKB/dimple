#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int a[]={1,2,3,4,5};
    // int tar;
    // cin >> tar;
    // for(int i=0;i<5;i++)
    // {
    //     for(int j=0;j<5-i;j++)
    //     {
    //         if(a[i]+a[j]==tar)
    //         {
    //             cout << a[i] << endl << a[j] ;
    //             exit(0);
    //         }
    //     }
    // }

    // int a[]={1,2,3,4,5};
    // map<int,int> mpp;
    // int n=5;
    // int tar=7;
    // int k=0;
    // for(int i=0;i<n;i++)
    // {
    //     int num=a[i];
    //     int more=tar-num;
    //     if(mpp.find(more)!=mpp.end())
    //     {
    //         k++;
    //         cout << num << endl << more << endl << endl;
    //     }
    //     mpp[num]=i;
    // }
    // cout << k;

    int a[]={1,2,3,4,5};
    int n=5,tar=3;
    int i=0,j=n-1;
    while(i<=j)
    {
        int num=a[i]+a[j];
        if(num==tar)
        {
            cout << a[i] << endl << a[j] ;
            break;
        }
        else if(num<tar)
        {
            i++;
        }
        else{
            j--;
        }
    }
}