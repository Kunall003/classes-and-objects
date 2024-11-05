
# Classes-and-objects
# Aim:
To use and implement C++ classes and objects.
# Software used:
Visual studio code.
# Theory
## Classes
Classes are the building blocks of object-oriented programming (OOP). A class is essentially a blueprint for creating objects. It encapsulates data and functions that operate on the data into a single unit. 
### Syntax
```cpp
class MyClass {
public:
    int myNumber;
};
```
```cpp
#include<iostream>
using namespace std;
class student               
{
    public:
    string name;
    int age;
    string branch;          
    float result;
    int year;
    int prn;
};
```
## Objects
An object is an instance of a class. When you define a class, you create a blueprint for objects. Once the class is defined, you can create objects that follow the structure and behavior defined by the class.
### Syntax
```cpp
class MyClass {
public:
    int myNumber;
};

int main() {
    MyClass obj1;  // Create an object of MyClass
    obj1.myNumber = 10;
    obj1.displayNumber();  // Output: Number: 10
    return 0;
}
```cpp
#include<iostream>
using namespace std;
class student               
{
    public:
    string name;
    int age;
    string branch;          
    float result;
    int year;
    int prn;
};
int main()
{
    student s1,s2;

    cout<<"1st student: "<<endl;
    s1.name = "Dhanraj";
    s1.age = 19;
    s1.branch = "ENTC";
    s1.prn = 502;
    s1.result = 7.8;
    s1.year = 2;
    cout<<s1.name<<endl<<s1.age<<endl<<s1.branch<<endl<<s1.prn<<endl<<s1.result<<endl<<s1.year<<endl;
}
```
# Algorithms
### Defining class and objects
1. Start
2. Class Definition:   
Define a class named student with the following public data members:   
    - string name: To store the student's name.
    - int age: To store the student's age.
    - string branch: To store the student's branch of study.   
    - float result: To store the student's result.   
    - int year: To store the student's current academic year.   
    - int prn: To store the student's PRN (Personal Registration Number).   


3. Main Function:   
Declare two objects s1 and s2 of the class student.
4. Input and Output for First Student (s1):   
Assign the following values to the object s1:   
    - name = "Dhanraj"   
    - age = 19   
    - branch = "ENTC"   
    - prn = 502   
    - result = 7.8   
    - year = 2   
    - Display the values stored in s1:   
    - Print the name, age, branch, prn, result, and year.   

5. End

### Defining Method in class
1. Start
2. Class Definition:   
    - Define a class named student.   
    - Inside the class, define a public method named myMethod():   
    - This method outputs the message: "I am studying in 2nd year.".   

3. Main Function:   
4. Declare an object s1 of the class student.   
5. Method Invocation:   
    - Call the myMethod() function using the object s1.   
6. Output:   
    - The program prints the message "I am studying in 2nd year.".   
7. End
