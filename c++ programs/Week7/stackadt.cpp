#include <iostream>
#include <stack>
using namespace std;
#define SIZE 5

class stack {
    private:
    int top;
    int st[SIZE];
    public:
    stack() {
        top = -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == SIZE - 1;
    }
    void push(int val) {
        if(isFull()) {
            cout << "Stack overflow" << endl;
        } else {
            st[++top] = val;
            cout << "Element pushed into the stack" << endl;
        }
    }
    void pop() {
        if(isEmpty()) {
            cout << "Stack underflow" << endl;
        } else {
            cout << "Element popped: " << st[top] << endl;
            top--;
        }
    }
    void peek() {
        if(isEmpty()) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "Top element: " << st[top] << endl;
        }
    }
};
int main() {
    int choice;
    ::stack s;
    do {
        cout << "\nEnter your choice:\n1.Push\n2.Pop\n3.Peek\n4.isEmpty\n5.isFull\n6.Exit\n";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                int x;
                cin >> x;
                s.push(x);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.peek();
                break;
            case 4:
                cout << (s.isEmpty() ? "Stack is empty" : "Stack is not empty") << endl;
                break;
            case 5:
                cout << (s.isFull() ? "Stack is full" : "Stack is not full") << endl;
                break;
            case 6:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    } while (choice != 6);
    return 0;
}