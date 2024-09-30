#include<iostream>
#include<string.h>
using namespace std;
class student{
    char name[20],usn[10];
    int m[3];
    public:
    void accept();
    void display() const;
    int compare(const student &) const;
    void sort(int ) ;
};
void student::accept()
{
    cin >> name >> usn ;
    for(int i=0;i<3;cin >> m[i++]);
}
void student::display() const{
    cout << name << "\t" << usn << "\t" ;
    for(int i=0;i<3;i++)
    {
        cout << m[i] << "\t";

    }
    cout << endl;
}
int student::compare(const student &q) const{
    if(strcmp(name,q.name)==1)
    {
        return 1;
    }
    return 0;
}
void student::sort(int n) {
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(strcmp(this[j].name,this[j+1].name)==1)
            {
                student t;
                t=this[j];
                this[j]=this[j+1];
                this[j+1]=t;
            }
        }
    }
}
int main(){
    int n;
    cin >> n;
    student *s;
    s=new student[n];
    for(int i=0;i<n;s[i++].accept());
    for(int i=0;i<n;s[i++].display());
    // for(int i=0;i<n-1;i++)
    // {
    //     for(int j=0;j<n-i-1;j++)
    //     {
    //         if(s[j].compare(s[j+1]))
    //         {
    //             student t;
    //             t=s[j];
    //             s[j]=s[j+1];
    //             s[j+1]=t;
    //         }
    //     }
    // }
    (*s).sort(n);
    for(int i=0;i<n;s[i++].display());
    delete []s;
    // char a[]="dimple"  ,b[]="kb",c[]="dimple";
    // cout << strcmp(a,b);
    // if(strcmp(a,b))
    // {
    //     cout << "no";
    // }
    // else{
    //     cout << "yes";
    // }
}