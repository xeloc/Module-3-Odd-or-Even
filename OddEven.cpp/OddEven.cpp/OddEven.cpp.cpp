#include <iostream>

using namespace std;

int main() {
    int number;  // Variable to store the user's input

    // Asks me to enter an integer
    cout << "Please enter an integer: ";
    cin >> number;

    // Checks if the number is even or odd
    if (number % 2 == 0) {
        // If the remainder when divided by 2 is 0 then the number is even
        cout << "The number " << number << " is even." << endl;
    }
    else {
        // If the remainder when divided by 2 is not 0 then the number is odd
        cout << "The number " << number << " is odd." << endl;
    }

    return 0;
}
