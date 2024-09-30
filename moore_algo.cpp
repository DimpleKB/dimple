// find majority ele >n/2

#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    vector<int> v={1,1,2,2,2,3,3,2,2,3};
    int n=10;
    cout << n;
    int max,freq=0;
    for(int i=0;i<n;i++)
    {
        if(max==v[i])
        {
            freq++;
        }
        else if(freq==0){
            max=v[i];
            freq=1;
        }
        else{
            freq--;
        }
    }

    cout << freq << endl << max << endl;
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==max)
        {
            k++;
        }
    }
    if(k>(n/2))
    {
        cout << max;
    }
}