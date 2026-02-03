#include<iostream>
using namespace std;
class student{
    int roll;
    int marks;
    public:
        student(){
            roll = 0;
            marks = 0;
        }
        student(int r){
            roll = r;
            marks = 0;
        }  
        student(int r,float m){
            roll = r;
            marks = m;
        }
        void display(){
            cout<<"Roll:"<<roll<<"\nMarks: "<<marks<<endl;
        }

};

int main(){
    student s;
    student s2(101);
    student s3(102,85.5);
    s.display();
    s2.display();
    s3.display();
    return 0;
}