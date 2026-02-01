//preprocessor directives
#include <iostream>
#include <string>
#include <cmath>
//using namespace declaration
using namespace std;
//global declaration
int add(int a, int b);
double area(double radius);
void greeting(string message);
//main function
int main() {
    //variable declaration
    int a, b;
    double radius;
    string message;
    //taking input at runtime
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Enter radius of circle: ";
    cin >> radius;
    cin.ignore(); //flush the input buffer
    cout << "Enter your message: ";
    getline(cin, message);
    greeting(message);//calling greeting function
    int sum = add(a, b);//calling add function
    cout << "Sum is: " << sum << endl;
    double result = area(radius);//calling area function
    cout << "Area of circle is: " << result << endl;
    cout << " ***** Program End ***** " << endl;
    return 0;
}
//add function definition
int add(int a, int b) {
    return a + b;
}
//greeting function definition
void greeting(string message) {
    cout << "Greeting: " << message << endl;
}
//area function definition
double area(double radius) {
    double PI = 3.14159265358979323846;
    return PI * pow(radius, 2);
}