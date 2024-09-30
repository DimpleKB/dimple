// sort array of 0's 1's 2's

#include<iostream>
using namespace std;
int main()
{
    int a[]={0,0,1,2,1,2,0,0,1,1,2,2,1,0};
    int n=14;
    int low=0,mid=0,high=n-1;
    while(mid<=high)
    {
        if(a[mid]==0)
        {
            swap(a[low],a[mid]);
            // cout << a[low] << "\t" << a[mid] << "\n";
            low++;
            mid++;
        }
        else if(a[mid]==1)
        {
            // cout << a[mid] << endl;
            mid++;
        }
        else{
            swap(a[mid],a[high]);
            // cout << a[mid] << "\t" << a[high] << endl;
            high--;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout << a[i] << "\t";
    }
}