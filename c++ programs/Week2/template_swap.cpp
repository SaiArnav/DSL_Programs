#include <iostream>
using namespace std;
template <typename T>
void swapValues(T &t1, T &t2) {
    cout << "Before swapping: t1 = " << t1 << ", t2 = " << t2 << endl;
    T temp = t1;
    t1 = t2;
    t2 = temp;
}
int main() {
    int x, y;
    double a, b;
    char c1, c2;
    string s1, s2;
    cout << "Enter which datatpes you want to swap:\n1. int\n2. double\n3. char\n4. string\n";
    int choice;
    cin >> choice;
    switch (choice) {
        case 1:
            cout << "Enter two integers: ";
            cin >> x >> y;
            swapValues(x, y);
            cout << "After swapping: x = " << x << ", y = " << y << endl;
            break;
        case 2:
            cout << "Enter two doubles: ";
            cin >> a >> b;
            swapValues(a, b);
            cout << "After swapping: a = " << a << ", b = " << b << endl;
            break;
        case 3:
            cout << "Enter two characters: ";
            cin >> c1 >> c2;
            swapValues(c1, c2);
            cout << "After swapping: c1 = " << c1 << ", c2 = " << c2 << endl;
            break;
        case 4:
            cout << "Enter two strings: ";
            cin >> s1 >> s2;
            swapValues(s1, s2);
            cout << "After swapping: s1 = " << s1 << ", s2 = " << s2 << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }   
}