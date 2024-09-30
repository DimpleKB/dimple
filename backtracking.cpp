#include<iostream>
using namespace std;
void print(int n,int i)
{
    if(i<=n)
    {
        
        
        
        print(n,i+1);
        cout << i << " ";
    }
    else{
        return ;
    }
}
int main()
{
    
    int n,i=1;
    
    cin >> n;
    print(n,i);

}