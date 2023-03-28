/*Write a program of Addition, Subtraction, Division, Multiplication using
constructor.*/
#include <iostream>

using namespace std;

class Calculator {
private:
    int num1, num2;

public:
    Calculator(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }

    int add() {
        return num1 + num2;
    }

    int subtract() {
        return num1 - num2;
    }

    int multiply() {
        return num1 * num2;
    }

    float divide() {
        return static_cast<float>(num1) / num2;
    }
};

int main() {
    int n1, n2;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    Calculator calc(n1, n2);

    cout << "Sum = " << calc.add() << endl;
    cout << "Difference = " << calc.subtract() << endl;
    cout << "Product = " << calc.multiply() << endl;
    cout << "Quotient = " << calc.divide() << endl;

    return 0;
}
