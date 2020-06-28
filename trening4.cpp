#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <cstdlib>

using namespace std;


// Function prototypes
vector<int> Range(int start, int max, int step);

int main() {

    // Exceptions

    double num1 = 0, num2 = 0;
    
    cout << " Enter number 1 : ";
    cin >> num1;
    cout << " Enter number 2 : ";
    cin >> num2;

    try {
        if (num2 ==0) {
            throw "Division by zero is not supported";
        } else {
            printf("%.1f / %.1f = %.2f", num1, num2, ( num1 / num2));
        }
    }

    catch (const char* exp) {
        cout << " Error : " << exp << "\n";
    }

    return 0;

}


// Functions
vector<int> Range(int start, int max, int step) {
    int i = start;

    vector<int> range;

    while (i < max) {

        range.push_back(i);

        return range;

    }
}