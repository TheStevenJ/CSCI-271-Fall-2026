#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5; //sets the size of the array to 5
    int arr[SIZE] = {}; //array empty for the user input

    int sum = 0; 
    for (int i = 1; i <= SIZE; i++) { //runs the for loop 5 times for each score
        cout << "Enter score " << i << ": ";
        cin >> arr[i - 1]; //saving the users inputed scores to the arry
        sum += arr[i - 1]; //adding the users inputed scores to sum 
    }

    cout << "Scores: ";
    for (int i = 0; i < SIZE; i++) { //runs a for loop 5 times to print out the array that the user made
        cout << arr[i] << " ";
    }

    cout << endl; // makes a line break

    cout << "Sum: " << sum << endl; //prints out the sum

    double avg = static_cast<double>(sum)/SIZE; //finds the average of the total sum of the array and divides it by the size of it

    cout << "Average: " << avg << endl; // prints out the average

    int max = arr[0];
    for(int i = 1; i < SIZE; i++) { //runs a for loop to find the max of the array giving it a if statment to see which number is the highest
        if (arr[i] > max) max = arr[i];
    }

    cout << "Highest: " << max << endl; //prints out the max

    int min = arr[0]; 
    for(int i = 1; i < SIZE; i++) { ////runs a for loop to find the min of the array giving it a if statment to see which number is the lowest
        if (arr[i] < min) min = arr[i];
    }

    cout << "Lowest: " << min << endl; //prints out the min


    return 0;

}