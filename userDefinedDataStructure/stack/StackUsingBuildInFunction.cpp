#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<int> s;
    int option;

    while (true) {
        cout << "1)Push elements:" << endl;
        cout << "2)Pop elements:" << endl;
        cout << "3)Peek elements:" << endl;
        cout << "4)Display all elements:" << endl;
        cout << "0)Exit the program:" << endl;

        cin >> option;

        switch (option) {
        case 1:
            cout << "Enter element:" << endl;
            int n;
            cin >> n;
            s.push(n);
            break;
        case 2:
            if (!s.empty()) {
                cout << "Popped element is: " << s.top() << endl;
                s.pop();
            } else {
                cout << "Stack is empty." << endl;
            }
            break;
        case 3:
            if (!s.empty()) {
                cout << "Peek element is: " << s.top() << endl;
            } else {
                cout << "Stack is empty." << endl;
            }
            break;
        case 4:
            if (!s.empty()) {
                stack<int> temp = s;
                while (!temp.empty()) {
                    cout << temp.top() << " ";
                    temp.pop();
                }
                cout << endl;
            } else {
                cout << "Stack is empty." << endl;
            }
            break;
        case 0:
            exit(0);
        default:
            cout << "Invalid option" << endl;
        }
    }

    return 0;
}
