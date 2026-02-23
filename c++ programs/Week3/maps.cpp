#include <iostream>
#include <map>
using namespace std;
int main() {
    map<string, string> student;
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    cin.ignore();
    
    for(int i = 0; i < n; i++) {
        string name, roll;
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter Roll Number: ";
        getline(cin, roll);
        student[name] = roll;
    }
    
    cout << "\nStudent Details:\n";
    for(map<string, string>::iterator it = student.begin(); it != student.end(); it++) {
        cout << it->first << ": " << it->second << endl;
    }
}