#include<iostream>
#include<vector>
using namespace std;
// int partition(vector<int> &a,int low,int high)
// {
//     int pivot=a[low],i=low,j=high;
//     while(i<j)
//     {
//         while(a[i]<=pivot && i<=high)
//         {
//             i++;
//         }
//         while(a[j]>pivot && j>=low)
//         {
//             j--;
//         }
//         if(i<j)
//         {
//             swap(a[i],a[j]);
//         }
//     }
//     swap(a[low],a[j]);
//     return j;
// }
// void quick_sort(vector<int> &a,int low,int high)
// {
//     if(low<high)
//     {
//         int p=partition(a,low,high);
//         quick_sort(a,low,p-1);
//         quick_sort(a,p+1,high);
//     }
// }
// int main()
// {
//     vector<int> a={3,2,4,5,1,6,9,0,4};
//     quick_sort(a,0,8);
//     for(auto it:a)
//     {
//         cout << it << endl;
//     }
// }

// void merge(vector <int> &r,int low,int mid,int high)
// {
//     vector<int> temp;
//     int left=low;
//     int right=mid+1;
//     while(left<=mid && right<=high)
//     {
//         if(r[left]>=r[right])
//         {
//             temp.push_back(r[right]);
//             right++;
            
//         }
//         else{
//             temp.push_back(r[left]);
//             left++;
           
//         }
//     }
//     while(left<=mid)
//     {
//         temp.push_back(r[left]);
//         left++;
//     }
//     while(right<=high)
//     {
//         temp.push_back(r[right]);
//         right++;
//     }
    
//     for(int i=low;i<=high;i++)
//     {
//         r[i]=temp[i-low];
        
//     }
// }
// void merge_sort(vector <int> &r,int low,int high)
// {
//     if(low==high)
//     {
//         return ;
//     }
//     int mid=(low+high)/2;
//     merge_sort(r,low,mid);
//     merge_sort(r,mid+1,high);
//     merge(r,low,mid,high);
// }

// int main()
// {
//     vector <int> a={1,0,3,2,8,9,0,1};
    
//     merge_sort(a,0,7);
//     for(auto it:a)
//     {
//         cout << it << endl;
//     }
// }

