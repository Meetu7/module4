/* Write a program to find the multiplication values and the cubic values using inline function */
#include<iostream>
using namespace std;

class value
{
    int a;

    public:
    inline void data()
    {
        cout<<"value of a is : ";
        cin>>a;
    } 

    inline multiplication()
    {
        cout<<"multiplication is : "<<a*a<<endl;
    }

    inline cubic()
    {
        cout<<"value of cubic is : "<<a*a*a<<endl;
    }

};
int main()
{
    value r;
    r.data();
    r.multiplication();
    r.cubic();
}