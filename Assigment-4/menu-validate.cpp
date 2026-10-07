#include <iostream>
using namespace std;


int main() {
    int choice;
   
    do {
        cout << "Enter a menu choice (1,2, or 3): ";
        cin >> choice;

        if(choice < 4) {
            cout << "You selected option " << choice << endl;
            continue;
        } else {
            cout << "Invalid choice, try again" << endl;
        }
    }
    while (choice >= 4 || choice <= 0) ;


    return 0;
}

