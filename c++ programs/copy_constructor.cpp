#include<iostream>
using namespace std;
class student{
    int roll;
    public:
    student(int r){
        roll = r;
    }
    student(student&s){
        roll = s.roll;
    }
    void display(){
        cout<<"roll = "<< roll << endl;
    }
};

int main() {
    student s(100);
    student s2 = s;
    s.display();
    s2.display();
    return 0;
}