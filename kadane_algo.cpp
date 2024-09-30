// maximum subarray sum

#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int v[]={-1,2,3,4,5,6,7,8,-9,-10};
    int n=10,sum=0,maxsum=0;
    for(int i=0;i<n;i++)
    {
        sum+=v[i];
        if(sum>maxsum)
        {
            maxsum=max(sum,maxsum);
        }
        else if(sum<0)
        {
            sum=0;
        }
        // else{

        // }
    }
    std::cout << maxsum;
}