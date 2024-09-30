#include<iostream>
using namespace std;
void reverse_array(int s,int e,int a[])
{
    if(s<=e/2)
    {
        swap(a[s],a[e-s-1]);
        reverse_array(s+1,e,a);
    }                                     
    else{
        return ;
    }
}
int main()
{
    int n,a[100];
    cin >> n;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    cout << "before reversing" << endl;
    for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
    reverse_array(0,n,a);
    cout << "after reversing" << endl;
    for(int i=0;i<n;i++)
    {
        cout << a[i] <<" ";
    }

    return 0;
}