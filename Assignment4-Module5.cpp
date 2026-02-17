#include <iostream>
using namespace std;

void menu();
void addTwo();
void showInfo();
void sayBye();

void menu() {
    cout << "\n=== Simple Menu ===\n";
    cout << "1) Add two numbers\n";
    cout << "2) Show a message\n";
    cout << "3) Exit\n";
    cout << "Choose: ";
}

void addTwo() {
    int x, y;
    cout << "Type two numbers: ";
    cin >> x >> y;
    cout << "Result: " << (x + y) << "\n";
}

void showInfo() {
    cout << "This program is practicing functions + loops + a menu.\n";
}

void sayBye() {
    cout << "Okay, done. Bye!\n";
}

int main() {
    int choice = 0;

    do {
        menu();
        cin >> choice;

        if (choice == 1) {
            addTwo();
        } else if (choice == 2) {
            showInfo();
        } else if (choice == 3) {
            sayBye();
        } else {
            cout << "Not a valid option, try 1-3.\n";
        }

    } while (choice != 3);

    return 0;
}
