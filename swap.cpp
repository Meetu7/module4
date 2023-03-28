/*Write a program of to swap the two values using templates*/
#include<iostream>
using namespace std;
template<typename H>
class Data
{
    H a,b;
    public:

    Data(H x,H y)
    {
        a=x;
        b=y;

        // cout<<"value of a is : ";
        // cin>>a;
        // cout<<"value of b is : ";
        // cin>>b;
    }
    void before()
    {
        cout<<"before swapping vaule of a : "<<a<<endl;
        cout<<"before swapping vaule of b : "<<b<<endl;
    }
    void after()
    {
        a=a+b;
        b=a-b;
        a=a-b;
        cout<<"after swapping value of a : "<<a<<endl;
        cout<<"after swapping value of b : "<<b<<endl;
    }

};
int main()
{
    Data<float>z(4,9);
    z.before();
    z.after();
}