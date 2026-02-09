#include <iostream>
#include <algorithm>
using namespace std;
void swapValues(int &a, int &b) {
    swap(a, b);
}
void swapValues(float &c, float &d) {
    swap(c, d);
}
void swapValues(string &e, string &f) {
    swap(e, f);
}
int main() {
    int a, b;
    float c, d;
    string e, f;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Enter two floats: ";
    cin >> c >> d;
    cin.ignore(); 
    cout << "Enter two strings: ";
    cin >> e >> f;
    cout << "Before swapping: " << endl;
    cout << "Integers: " << a << " " << b << endl;
    cout << "Floats: " << c << " " << d << endl;
    cout << "Strings: " << e << " " << f << endl;

    swapValues(a, b);
    swapValues(c, d);
    swapValues(e, f);

    cout << "After swapping: " << endl;
    cout << "Integers: " << a << " " << b << endl;
    cout << "Floats: " << c << " " << d << endl;
    cout << "Strings: " << e << " " << f << endl;
}