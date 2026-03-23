//This program process a sequence of integer values in the range of 1 through 10 read from the standard input device
// Anael Redrovan
// 03/23/2026

#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    int num;
    int count = 0;
    int total = 0;
    int minimum = 0;
    int maximum = 0;

    cout << " welcome to the program" << endl; 

    cout << "Enter an integer (0 to quit): ";
    cin >> num;

    while (num != 0) {
        if (count == 0) { 
            minimum = num;
            maximum = num;
        }
        else {
            if (num < minimum) minimum = num;
            if (num > maximum) maximum = num;
        }

        total += num;
        count++;

        cout << "Enter another integer (0 to quit): ";
        cin >> num;
    }

    if (count > 0) {
        double average = static_cast<double>(total) / count;

        cout << "\nCount Min Max Average" << endl;
        cout << count << "     "
            << minimum << "   "
            << maximum << "   "
            << fixed << setprecision(2) << average << endl;
    }
    else {
        cout << "\nNo valid values were entered." << endl;
    }

    return 0;
}