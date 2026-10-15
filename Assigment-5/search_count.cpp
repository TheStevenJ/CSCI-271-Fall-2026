#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10; //sets array size to 10
    int data[SIZE] = {7, 12, 5, 12, 40, 3, 12, 8, 21, 5}; //defined array with 10 indexs
    int target; //defined target as an integer
    int foundIndex = -1; //defined foundIndex to -1 and as a int

    cout << "Enter a number to search for: "; //ask the user for the number they are looking for
    cin >> target; //saves the answr into targer

    for(int i = 0; i < SIZE; i++) { //for loop runs to find the number inside the array and ends the loop once located and saaves the number into FoundIndex 
        if(data[i] == target) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) { //an if statment for when the value of foundIndex is changed, runs where the number was found
        cout << target << " First found at index " << foundIndex << endl; 
        
    } else {
        cout << "Target not found." << endl;
    }

    int count = 0; // a for loop to find how many times that number appears in the array 
    for(int i=0; i < SIZE; i++) {
        if(data[i] == target) {
            count++;
        }
    }

    cout << target << " appears "<< count << " times "<< endl; //prints out the amount of times found



    return 0;

}