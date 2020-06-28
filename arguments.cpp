#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <sstream>
#include <limits>


using namespace std;

int main(int argc, char** argv) {


    if(argc != 1) {
        cout << " Wpisales : " << argc << " argumentow." << endl;
    }
    for (int i = 0; i < argc; ++i) {
        cout << argv[i]<< "\n";
    }

    return 0;
}
