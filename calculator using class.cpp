/*WAP to create simple calculator using class*/
#include <iostream>
using namespace std;

class Calculator
{
public:
    void add(double x, double y)
    {
        result = x + y;
    }

    void subtract(double x, double y)
    {
        result = x - y;
    }

    void multiply(double x, double y)
    {
        result = x * y;
    }

    void divide(double x, double y)
    {
        result = x / y;
    }

    void printResult()
    {
        std::cout << "Result: " << result << std::endl;
    }

private:
    double result;
};

int main()
{
    Calculator calculator;

    calculator.add(2.0, 3.0);
    calculator.printResult();

    calculator.subtract(5.0, 2.0);
    calculator.printResult();

    calculator.multiply(4.0, 2.5);
    calculator.printResult();

    calculator.divide(10.0, 2.0);
    calculator.printResult();

    return 0;
}
