/*Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)
*/
#include<iostream>
using namespace std;
class cricketer
{
    protected:
    string name;
    float total_runs,innings;

    public:
    void Data()
    {
        cout<<"Name of BATSMAN  : ";
        getline(cin,name);
        cout<<"total run        : ";
        cin>>total_runs;
        cout<<"Total innings    : ";
        cin>>innings;
    }
};
class Batsman : public cricketer
{
    float best_score,average;
    public:

    void input()
    {
        cout<<"Best score is : ";
        cin>>best_score;
    }
    void output()
    {
        name="KATHIRIYA MEET";
        cout<<"Name of BATSMAN  : "<<name<<endl;
        cout<<"Total run is     : "<<total_runs<<endl;
        cout<<"Total innings    : "<<innings<<endl;
        cout<<"best score is    : "<<best_score<<endl;
        average=total_runs/innings;
        cout<<"average is       : "<<average;
    }
};
int main()
{
    Batsman r;
    r.Data();
    r.input();
    r.output();
}