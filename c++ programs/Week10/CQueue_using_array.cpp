#include <iostream>
#include <queue>
using namespace std;
#define SIZE 5

class Cqueue {
    private:
    int arr[SIZE];
    int front, rear;
    public:
    Cqueue() {
        front = rear = -1;
    }

    void enqueue(int val) {
        if((rear + 1) % SIZE == front) {
            cout << "Queue Overflow\n";
            return;
        }
        if(front == -1 && rear == -1) {
            front = rear = 0;
        } if(front == rear) {
            front = rear = -1;
        } else {
            rear = (rear + 1) % SIZE;
        }
        arr[rear] = val;
        cout << "Inserted " << val << " Successfully\n";
    }

    void dequeue() {
        if(front == -1) {
            cout << "Queue underflow\n";
            return;
        } else {
            cout << "Deleted element: " << arr[front] << endl;
        }
        front = (front + 1) % SIZE;
    }
    
    void display() {
        if(front == -1) {
            cout << "Queue underflow\n";
            return;
        } else {
            cout << "Queue elements: ";
            int i = front;
            while(true) {
                cout << arr[i] << " ";
                if(i == rear) {
                    break;
                } i = (i + 1) % SIZE;
            } cout << endl;
        }
    }
};

int main() {
    Cqueue q;
    q.dequeue();
    q.enqueue(10);
    // q.enqueue(20);
    // q.enqueue(30);
    // q.enqueue(40);
    // q.enqueue(50);

    // q.display();

    q.dequeue();
    q.dequeue();
    q.enqueue(20);

    // q.display();

    // q.enqueue(60);

    // q.display();

    // q.enqueue(70);
}