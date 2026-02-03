#include<iostream>
using namespace std;
class student{
    int roll;
    public:
    student(){
        roll = 0;
    }
    void display(){
        cout<<"Roll = "<< roll << endl;
    }
};

int main() {
    student s;
    s.display();
    return 0;
}