#include <iostream>
using namespace std;
class gcd {
    public:
    int fnum, snum;
    gcd(int a, int b) {
        fnum = a;
        snum = b;
    }
};
int findgcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int fnum, snum;
    cout << "Enter first number: ";
    cin >> fnum;
    cout << "Enter Second number: ";
    cin >> snum;
    
    gcd obj1(fnum, snum);
    
    int result = findgcd(obj1.fnum, obj1.snum);
    cout << "GCD of " << obj1.fnum << " and " << obj1.snum << " is: " << result << endl;
    
    return 0;
}