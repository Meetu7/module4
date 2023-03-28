/*Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading*/
#include<iostream>
#include<conio.h>
using namespace std;

class Calculator
{
    public:
    sum(float num1,float num2)
    {
        cout<<"addition of float : "<<num1+num2<<endl;
    }
    sum(int num1,int num2,int num3)
    {
        cout<<"addition of int : "<<num1+num2+num2<<endl;
    }
    sub(float num1,float num2)
    {
        cout<<"sub of float : "<<num1-num2<<endl;
    }
    sub(int num1,int num2,int num3)
    {
        cout<<"sub of int : "<<num1-num2-num3<<endl;
    }
    
    mul(float num1,float num2)
    {
        cout<<"sub of float : "<<num1*num2<<endl;
    }
    mul(int num1,int num2,int num3)
    {
        cout<<"sub of int : "<<num1*num2*num3<<endl;
    }
    float div(float num1,float num2)
    {
        cout<<"div is : "<<num1/num2<<endl;
    }
    };
    int main(void)
    {
        Calculator obj;
        obj.sum(2.5,3);
        obj.sum(5,5,5);
        obj.sub(20,2.5);
        obj.sub(50,30,20);
        obj.mul(10.5,10.5);
        obj.mul(2,6,8);
        obj.div(50,5);

        getch();
}
