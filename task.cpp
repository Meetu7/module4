#include<iostream>
#include<string.h>
using namespace std;

class FATHER
{
    protected:
    string name;
    int pocketmoney;

    public:
    void data()
    {
        cout<<"FATHER'S NAME : ";
        getline(cin,name);
        cout<<"FATHER GIVES POCKETMONEY : ";
        cin>>pocketmoney;
        cin.ignore(); 
    }
};
class MOTHER
{
    protected:
    string name2;
    int pocketmoney2;

    public:
    void data1()
    {
        cout<<"MOTHER'S NAME : ";
        getline(cin,name2);
        cout<<"MOTHER GIVES POCKETMONEY : ";
        cin>>pocketmoney2;
        cout<<"==========================="<<endl; 
    }
};
class child : public FATHER, public MOTHER
{
    public:
    void display(){
        cout<<"FATHER'S NAME : "<<name<<endl;
        cout<<"FATHER GIVES POCKETMONEY :"<<pocketmoney<<endl;
        cout<<"------------------------"<<endl;
        cout<<"MOTHER'S NAME : "<<name2<<endl;
        cout<<"MOTHER GIVES POCKETMONEY :"<<pocketmoney2<<endl;
        cout<<"------------------------"<<endl;
        cout<<"TOTAL PCKETMONEY : "<< pocketmoney+pocketmoney2<<endl;

    }
};
int main(){
  child r;
  r.data();
  r.data1();
  r.display();
}
