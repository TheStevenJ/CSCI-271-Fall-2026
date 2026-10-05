#include <iostream>
using namespace std;

int main() {
    int age; //declares age as a integer
    int status; //declares member status as a integer

    cout << "What your age: "; //ask the user for their age
    cin >> age; //stores the inputed value in age
    cout << "Are you a member? (yes = 1, no = 0): "; //ask the user for their member status
    cin >> status; //stores the inputed value in status

    if(age >= 60 || age > 18 && status == 1) { //tells the code to only run the qualify string if the user's age is above 60 or is 18 and older AND they are a member.
        cout << "You qualify for the discount." << endl; //print out that the user qualifies for the discount
    } else {
        cout << "You do not qualify for the discount." << endl; // if user does not meet the requirments, the code runs this string.
    }
}

