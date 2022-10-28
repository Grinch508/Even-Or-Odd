#include <iostream>
#include <string>

using namespace std;

void odd(int x);
void even(int x);

int main() {
    int x;
    do {
        cout << "Please, enter a number(0 to exit): ";
        cin >> x;
        odd(x);
    } while (x != 0);  
    return 0;
}
void odd(int x) {
    if(x%2 != 0) {
        cout << "X is odd." << endl;
    } else {
        even(x);
    }
}
void even(int x) {
    if(x%2 == 0) {
        cout << "X is even." << endl;
    } else {
        odd(x);
    }
}