#include<bits/stdc++.h>
using namespace std;
class student
{
private:
    char name;
    int roll_number;
public:
    int j;
    void studentname()
    {
        cout<<"Enter the name of the student"<<endl;
        cin>>name;
        b+=2;
    }
    void studentnumber()
    {
        cout<<"Enter the roll number of the student"<<endl;
        cin>>roll_number;
        b--;
    }
    void showdata()
    for(j=0;j<b;j++)
    {
      cout<<"The data of the "<<j<<"th student is "<<obj.name[j]<<" and"<<obj.roll_number<<endl;
    }
};
static int b;
int main()
{
    int n,i;
    cout<<"Enter the number of student(s) data you want to enter"<<endl;
       cin>>n;
    student obj[n];
    for(i=0;i<n;i++)
    {
        obj.studentname();
        obj.studentnumber();
    }
    obj.showdata();
}
