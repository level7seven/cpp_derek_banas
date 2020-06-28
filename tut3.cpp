#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <sstream>
#include <limits>

using namespace std;

int maint() {

    string sMiles;
    double dMiles, dKilometers;
    cout << "Enter miles : ";
    getline(cin, sMiles);
    dMiles = stod (sMiles);
    dKilometers = dMiles / 1.60924;
    printf("%.1f miles equals %.4f kilometers\n", dMiles, dKilometers);

    return 0;

}