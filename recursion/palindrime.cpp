#include<iostream>
#include<string.h>
using namespace std;
void palindrome(string name,int i,int n)
{
    if(i<=n/2)
    {
        if(name[i]!=name[n])
        {
            cout << "not a palindrome";
            return ;
        }
        palindrome(name,i+1,n-1);
    }
    if(i==n)
    {
        cout << "given string is a palindrome";
    }
    
}
int main()
{
    char name[10];
    cin >> name;
    int l=strlen(name);
    palindrome(name,0,l-1);
    return 0;
}