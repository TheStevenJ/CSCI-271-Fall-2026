#include <iostream>
using namespace std;

int main() {
    int number; //declare number as a int to store the users input 

    cout << "Enter a whole number: "; //ask user to input a whole number
    cin >> number; //saves value in number 

    for(int i = 0; i <= 10; i++) { //runs a for loop that repeats until i being eqaul to or more then 10 is false. 
        int total = number * i; //multiplies the users whole number with i and puts the value into a new int called total 
        cout << number << " x " << i << " = " << total << endl; //prints out the math so the user can see until the for loop ends
       
    }
     return 0;
}