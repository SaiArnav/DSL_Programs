#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNumber;
    string name;
    float marks;

public:

    Student(int roll, string n, float m) {
        rollNumber = roll;
        name = n;
        marks = m;
    }

    ~Student() {
        cout << "Student object for " << name << " (Roll: " << rollNumber << ") deleted." << endl;
    }

    void display() {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

    int getRollNumber() {
        return rollNumber;
    }

    string getName() {
        return name;
    }

    float getMarks() {
        return marks;
    }

    void setRollNumber(int roll) {
        rollNumber = roll;
    }

    void setName(string n) {
        name = n;
    }

    void setMarks(float m) {
        marks = m;
    }
};

int main() {
    Student* student1 = new Student(101, "Arnav", 85.5);
    Student* student2 = new Student(102, "Raj", 92.0);
    Student* student3 = new Student(103, "Harshith", 78.5);

    cout << "Student 1 Details:" << endl;
    student1->display();
    cout << endl;
    cout << "Student 2 Details:" << endl;
    student2->display();
    cout << endl;
    cout << "Student 3 Details:" << endl;
    student3->display();
    cout << endl;

    delete student2;
    delete student3;

    return 0;
}
