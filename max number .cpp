/*Write a program to find the max number from given two numbers
usingfriend function*/
#include <iostream>
using namespace std;

class MaxNumber {
   private:
    int num1, num2;

   public:
    MaxNumber(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }
    friend int findMax(MaxNumber obj);
};

int findMax(MaxNumber obj) {
    int maxNum;
    if (obj.num1 > obj.num2) {
        maxNum = obj.num1;
    } else {
        maxNum = obj.num2;
    }
    return maxNum;
}

int main() {
    int n1, n2;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;
    MaxNumber obj(n1, n2);
    int maxNum = findMax(obj);
    cout << "Maximum number is " << maxNum << endl;
    return 0;
}
