#include <iostream>
using namespace std;

    void printFoward(const int arr[], int size); //defined PrintFoward
    void printReverse(const int arr[], int size); //defined PrintReverse
    int countAbove(const int arr[], int size, int limit); //defined countAbove



int main() {
    const int SIZE = 6; //giving int SIZE a value 
    int values[SIZE] = {14, 3, 27, 9, 50, 21}; //setting up the arry
    int limit; //making a limit 

    printFoward(values, SIZE); //calling both printFoward and printReverse to print and run the functions
    printReverse(values, SIZE);

    cout << "Count values above: "; //asking the user for their input on a limit
    cin >> limit; //saves that value in limit
    cout << "Count: " <<  countAbove(values, SIZE, limit) << endl; //prints out final value of count from the function countAbove to display how many times it counted a number higher then the limit in the array

    return 0;
}


 void printFoward(const int arr[], int size) { //printFoward function

    cout << "Foward: ";

    for(int i = 0; i < size; i++) { //runs a for loop the amount of times based on the array size and prints out the array
        cout << " " << arr[i];
    }

    cout << endl;
    
}

void printReverse(const int arr[], int size) { //printReverse function

    cout << "Reverse: ";

    for(int i = size - 1; i >= 0; i--) { //runs a for loop the amount of times based on the array size and prints out the array backwards
        cout << " " << arr[i];
    }

    cout << endl;
    
}

int countAbove(const int arr[], int size, int limit) { //countAbove function
    int count = 0; //give count a value of 0 to start

    for(int i = 0; i < size; i++) { //runs a for loop the amount of times based on the array size and runs the if statment to make count to go up by 1 everytime the condition is met
        if(arr[i] > limit) {
            count++;
        }
    }

   
    return count; // returns the value of count
}





