#include<iostream>
#include<list>
#include<string>
using namespace std;

void displayMenu() {
    cout << "\n===== LIST OPERATIONS MENU =====" << endl;
    cout << "1. Push Back" << endl;
    cout << "2. Push Front" << endl;
    cout << "3. Pop Back" << endl;
    cout << "4. Pop Front" << endl;
    cout << "5. Display List" << endl;
    cout << "6. Insert at Position" << endl;
    cout << "7. Remove Element" << endl;
    cout << "8. Get List Size" << endl;
    cout << "9. Clear List" << endl;
    cout << "10. Exit" << endl;
}

int main() {
    list<string> myList;
    int choice;
    string value;
    int position;

    while (true) {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1: {
                cout << "Enter value to push back: ";
                getline(cin, value);
                myList.push_back(value);
                cout << "Element added to back." << endl;
                break;
            }
            case 2: {
                cout << "Enter value to push front: ";
                getline(cin, value);
                myList.push_front(value);
                cout << "Element added to front." << endl;
                break;
            }
            case 3: {
                if (!myList.empty()) {
                    myList.pop_back();
                    cout << "Element removed from back." << endl;
                } else {
                    cout << "List is empty!" << endl;
                }
                break;
            }
            case 4: {
                if (!myList.empty()) {
                    myList.pop_front();
                    cout << "Element removed from front." << endl;
                } else {
                    cout << "List is empty!" << endl;
                }
                break;
            }
            case 5: {
                cout << "List contents: ";
                if (myList.empty()) {
                    cout << "List is empty!";
                } else {
                    for (auto it = myList.begin(); it != myList.end(); ++it) {
                        cout << *it << " ";
                    }
                }
                cout << endl;
                break;
            }
            case 6: {
                cout << "Enter value to insert: ";
                getline(cin, value);
                cout << "Enter position (0 for front): ";
                cin >> position;
                auto it = myList.begin();
                advance(it, min(position, (int)myList.size()));
                myList.insert(it, value);
                cout << "Element inserted." << endl;
                break;
            }
            case 7: {
                cout << "Enter value to remove: ";
                getline(cin, value);
                myList.remove(value);
                cout << "Element removed." << endl;
                break;
            }
            case 8: {
                cout << "List size: " << myList.size() << endl;
                break;
            }
            case 9: {
                myList.clear();
                cout << "List cleared." << endl;
                break;
            }
            case 10: {
                cout << "Exiting program." << endl;
                return 0;
            }
            default: {
                cout << "Invalid choice! Please try again." << endl;
            }
        }
    }

    return 0;
}