#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

float add(float a, float b) {
    return a + b;
}

int main() {
    int a, b;
    float c, d;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Enter two floats: ";
    cin >> c >> d;
    int var1 = add(a, b);
    float var2 = add(c, d);
    cout << "Sum of integers: " << var1 << endl;
    cout << "Sum of floats: " << (float)var2 << endl;
}