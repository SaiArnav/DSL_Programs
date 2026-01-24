#include <iostream>
using namespace std;
int main() {
    int choice;
    cout << "1. Tea\n2. Cofee\n3. Juice\n";
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice) {
        case 1: cout << "You selected Tea"; break;
        case 2: cout << "You selected Cofee"; break;
        case 3: cout << "You selected Juice"; break;
        default: cout << "Invalid choice";
    }
}