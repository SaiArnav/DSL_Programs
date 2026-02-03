//parameterised constructor
#include <iostream>
using namespace std;
class student {
    int roll;
    public:
        student(int r) {
            roll = r;
        }
        void display() {
            cout << "roll = " << roll << endl;
        }
};
int main() {
    student s(101);
    s.display();
}