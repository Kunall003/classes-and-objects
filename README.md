ClassandObject
Aim:
To study and implement the basics of classes and objects in C++.

Software Used:
Visual Studio Code.

Theory:
In C++, a class is a blueprint for creating objects. It encapsulates data for the object and methods to manipulate that data. An object is an instance of a class.

Syntax:
#include<iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};


int main() {
    Student student1;
    student1.name = "John";
    student1.age = 20;
    student1.display();

    return 0;
};
Algorithm:
Start.
Define a class named Student with public data members name and age.
Define a member function display() to print the values of name and age.
In the main() function, create an object student1 of the class Student.
Assign values to the data members name and age of student1.
Call the display() function using the student1 object to print the values.
End.
