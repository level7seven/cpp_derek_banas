#include <iostream>
#include <string>
#include <vector>

using namespace std;


// Function prototypes
vector<int> Range(int start, int max, int step);

int main() {

    int i = 1;

    while(i <= 20) {

        if((i % 2) == 0) {
            i += 1;
            continue;
        }
        
if(i == 15) break;
cout << i << endl;

        i += 1;

    }



    return 0;

}


// Functions
vector<int> Range(int start, int max, int step) {

    int i = start;

    vector<int> range;

}