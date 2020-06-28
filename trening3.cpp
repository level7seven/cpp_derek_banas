#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <cstdlib>

using namespace std;


// Function prototypes
vector<int> Range(int start, int max, int step); 


int main() {

    // int i = 1;

    // while (i <= 13) {
    //     if (( i % 2 ) == 0) {
    //         i += 1; 
    //         continue;
    //     }

    //     if (i == 13) break;
    //     cout << "    #" << endl;

    //     i += 1;
    // }

    // iNSTRUCTIONS

        // 1. Decrement spaces by one each time through the loop
        // 2. Increment hashes by 2 each time through the loop
        // 3. Save spaces to the stump by calculating tree height - 1
        // 4. Decrement from tree height until equal to 0
        // 5. Print spaces and then hashes for each row
        // 6. print the stump spaces and then 1 hash

        // Tree looks like this

//     #
//    ###
//   #####
//  #######
// #########
//     #

        // Author of the task : Derek Banas

        cout << " How tall is the tree ? : ";
        int treeHeight = 0, spaces = 0, hashes = 1, stumpSpaces = 0;
        cin >> treeHeight;
        spaces = treeHeight - 1;
        stumpSpaces = treeHeight - 1;

        while(treeHeight != 0)
        {
            for(auto x: Range(1, spaces, 1))
            cout << " ";

            for(auto x: Range(1, hashes, 1))
            cout << "#";

            cout << "\n";

            spaces -= 1;
            hashes += 2;
            treeHeight -= 1;

        }
        
        for(auto x: Range(1, stumpSpaces, 1))  
        cout << "  ";
        cout << "#";



    return 0;

}



// Functions
vector<int> Range(int start, int max, int step) {

    int i = start;

    vector<int> range;

    while (i <= max) {
        range.push_back(i);

        i += step;
    }

    return range;

}