#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <cstdlib>

using namespace std;


// Function prototypes


int main() {


    try{
        cout << "Throwin exception\n";
        throw runtime_error("Throwin error exception");
        cout << "Can u print me?\n";
    }

    catch(exception &exp){
        cout << "Handled exception : " << exp.what() << "\n";
    }

    catch(...){
        cout << " Default exception\n";
    }

    return 0;

}


// Functions