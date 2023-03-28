/*Write a program to swap the two numbers using friend function
withoutusing third variable*/
#include <iostream>
using namespace std;

class SwapNumbers {
   private:
    int num1, num2;

   public:
    SwapNumbers(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }
    friend void swap(SwapNumbers &obj);
};

void swap(SwapNumbers &obj) {
    int temp = obj.num1;
    obj.num1 = obj.num2;
    obj.num2 = temp;
}

int main() {
    int n1, n2;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;
    SwapNumbers obj(n1, n2);
    cout << "Before swapping - First number: " << obj.num1 << ", Second number: " << obj.num2 << endl;
    swap(obj);
    cout << "After swapping - First number: " << obj.num1 << ", Second number: " << obj.num2 << endl;
 
    return 0;
}
