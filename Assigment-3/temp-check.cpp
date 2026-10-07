#include <iostream>
using namespace std;


int main() {
    int temp; //declares temp as a integer.
    cout << "Enter the Temperature: "; //ask the user for the temperature.
    cin >> temp; //stores the inputed value inside of temp.

    if(temp <= 32) { //checks if temp is lower then 32 to run "Freezing" as a string.
        cout << "Freezing" << endl;
    } else if (temp <= 59) { //checks if temp is lower then 60 but higher then 32 to run "Cold" as a string.
        cout <<  "Cold" << endl;
    } else if (temp <= 75) { //checks if temp is lower then 76 but higher then 59 to run "Mild" as a string.
        cout << "Mild" << endl;
    } else { //if temp is higher then 76, "Hot" is then executed as a string.
        cout << "Hot" << endl;
    }

    return 0;
}


// #include <iostream>
// using namespace std;

// int main() {
//     int total = 0, counter = 0, grade;

//     cout << "Enter grade or -1 to quit: " << endl;
//     cin >> grade;

//     while (grade != -1) {
//         total += grade;
//         counter++;
//         cout << "Enter grade or -1 to quit" << endl;
//         cin >> grade;
//     }


//     if (counter != 0) {
//         double average = static_cast<double>(total) / counter;
//         cout << "Class average is " << average;
    
//     } else {
//         cout << "no grade was entered. " << endl;
 
//    }

//    return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int list[3] = {5, 10, 15};

//     list[1] = list[0] + list[2];
//     cout << list[1] << endl;

//     list[2] = list[1]/5;

//     return 0;

// }




