#include <iostream>
using namespace std;

int main() {
    string x; //stores whatever value for x as a string
    int y; //stroes a number as a value for y as a integer

    cout << "Enter name: "; //asking the user for their name
    cin >> x; //saves that value as x
    cout << "Enter age: "; //asking the user for their age 
    cin >> y; //saves that value as y
    cout << "Hello, I am " << x << "!" <<  " I am " << y << " years old." << endl; //outputs the values inputed by the user for x and y as a sentence.

    return 0; //stops the loop
}