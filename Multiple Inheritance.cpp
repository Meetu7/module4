/* Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance)*/
#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    Person(string n, int a) : name(n), age(a) {}
    void read_data() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
    }
    void write_data() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
protected:
    float percentage;
public:
    Student(string n, int a, float p) : Person(n, a), percentage(p) {}
    void read_data() {
        Person::read_data();
        cout << "Enter percentage: ";
        cin >> percentage;
    }
    void write_data() {
        Person::write_data();
        cout << "Percentage: " << percentage << endl;
    }
};

class Teacher : public Person {
protected:
    float salary;
public:
    Teacher(string n, int a, float s) : Person(n, a), salary(s) {}
    void read_data() {
        Person::read_data();
        cout << "Enter salary: ";
        cin >> salary;
    }
    void write_data() {
        Person::write_data();
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Student student("John", 20, 90);
    Teacher teacher("Mary", 30, 5000);

    student.write_data();
    cout << endl;
    teacher.write_data();
    cout << endl;

    student.read_data();
    teacher.read_data();

    cout << endl;
    student.write_data();
    cout << endl;
    teacher.write_data();

    return 0;
}
