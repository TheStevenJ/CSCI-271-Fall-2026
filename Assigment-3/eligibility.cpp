#include <iostream>
using namespace std;

int main() {
    int age;
    int status;

    cout << "What your age: ";
    cin >> age;
    cout << "Are you a member? (yes = 1, no = 0): ";
    cin >> status;

    if(age >= 60 || age > 18 && status == 1) {
        cout << "You qualify for the discount." << endl;
    } else {
        cout << "You do not qualify for the discount." << endl;
    }
}

