#include <iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    string branch;
    int year;
    
};
int main() {
    student s1;
    s1.name="labdhi";
    cout<<s1.name<<endl;
    s1.age=18;
    cout<<s1.age<<endl;
    s1.branch="entc";
    cout<<s1.branch<<endl;
    s1.year=2023;
    cout<<s1.year<<endl;
    cout<<"\n";
     student s2;
    s2.name="atharva";
    cout<<s2.name<<endl;
    s2.age=18;
    cout<<s2.age<<endl;
    s2.branch="entc";
    cout<<s2.branch<<endl;
    s2.year=2023;
    cout<<s2.year<<endl;
    return 0;
}
//output
/*labdhi
18
entc
2023

atharva
18
entc
2023*/