#include<iostream>
#include<string.h>
using namespace std;

class info
{
    public:
    string name;
    int age;
    string gender;

    void data()
    {
        cout<<"NAME : ";
        getline(cin,name);
        cout<<"AGE : ";
        cin>>age;
        cout<<"GENDER : ";
        cin>>gender;
        cout<<"*************"<<endl;
    }
    void data1()
    {
        cout<<"NAME : "<<name<<endl;
        cout<<"AGE : "<<age<<endl;
        cout<<"GENDER : "<<gender<<endl;
       
    }
};
class Teacher : public info
{
    public:
    int salary;

    void collection()
    {
        cout<<"TEACHER'S SALARY : ";
        cin>>salary;
        cout<<"TEACHER'S SALARY : "<<salary<<endl;
        cout<<"==================="<<endl;
        cout<<"==================="<<endl;
        cin.ignore();
    }
};
class Principal : public info
{
    public:
    int salary1;

    void display()
    {
      cout<<"PRINCIPAL'S SALARY : ";
      cin>>salary1;
      cout<<"PRINCIPAL'S SALARY : "<<salary1<<endl;  
    }
};

int main()
{
    Teacher r;
    r.data();
    r.data1();
    r.collection();

    Principal h;
    h.data();
    h.data1();
    h.display();
}