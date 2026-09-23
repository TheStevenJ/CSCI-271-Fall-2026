#include <iostream>
using namespace std;


int main() {
    int temp;
    cout << "Enter the Temperature: ";
    cin >> temp;

    if(temp <= 32) {
        cout << "Freezing" << endl;
    } else if (temp <= 59) {
        cout <<  "Cold" << endl;
    } else if (temp <= 75) {
        cout << "Mild" << endl;
    } else {
        cout << "Hot" << endl;
    }

    return 0;
}

