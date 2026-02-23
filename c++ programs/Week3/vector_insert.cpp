//Create a vector of integers, insert elements, and display them using an iterator
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v;
    int choice, x, key, n;
    cout << "\n\n--- VECTOR OPERATION MENU ---\n";
        cout << "1. Insert Elements\n";
        cout << "2. Display Elements\n";
        cout << "3. Sort Elements\n";
        cout << "4. Search Element\n";
        cout << "5. Delete Element\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
    do {
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter the number of elements you want to insert: ";
                cin >> n;
                for (int i = 0; i < n; i++) {
                    cout << "Enter element " << i + 1 << ": ";
                    cin >> x;
                    v.push_back(x);
                }
                break;
                
            case 2:
                if (v.empty()) {
                    cout << "Vector is empty!\n";
                } else {
                    cout << "The elements in the vector are: ";
                    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
                        cout << *it << " ";
                    }
                }
                break;
                
            case 3:
                if (v.empty()) {
                    cout << "Vector is empty!\n";
                } else {
                    sort(v.begin(), v.end());
                    cout << "Elements sorted successfully!\n";
                    cout << "Sorted elements: ";
                    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
                        cout << *it << " ";
                    }
                }
                break;
                
            case 4:
                if (v.empty()) {
                    cout << "Vector is empty!\n";
                } else {
                    cout << "Enter the element you want to search: ";
                    cin >> key;
                    if (find(v.begin(), v.end(), key) != v.end()) {
                        cout << "Element found in the vector!\n";
                    } else {
                        cout << "Element not found in the vector!\n";
                    }
                }
                break;
                
            case 5:
                if (v.empty()) {
                    cout << "Vector is empty!\n";
                } else {
                    cout << "Enter the element you want to delete: ";
                    cin >> key;
                    v.erase(remove(v.begin(), v.end(), key), v.end());
                    cout << "Element deleted successfully!\n";
                }
                break;
                
            case 6:
                cout << "Exiting program...\n";
                exit(0);
                
            default:
                cout << "Invalid choice! Please try again.\n";
        }
        
    } while (choice != 6);
    
    return 0;
}