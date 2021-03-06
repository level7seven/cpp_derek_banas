#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

using namespace std;
 
int main() {
    
    // ----- PROBLEM CALCULATOR -----
    // Enter calculation (ex. 5 + 6) : 10 - 6
    // 10.0 - 6.0 = 4.0
    
    double dbNum1 = 0, dbNum2 = 0;
    string sCalc = "";
    vector<string> vecsCalc; 
    
    cout << "Enter calculation (ex. 5 + 6): ";
    getline(cin, sCalc);
    
    stringstream ss(sCalc);
    string sIndivStr;
    char cSpace = ' ';
    
    while(getline(ss, sIndivStr, cSpace)){
        vecsCalc.push_back(sIndivStr);
    }
    
    dbNum1 = stoi(vecsCalc[0]);
    dbNum2 = stoi(vecsCalc[2]);
    string operation = vecsCalc[1];
    
    if (operation == "+"){
        printf("%.1f + %.1f = %.1f\n", dbNum1, dbNum2,
                (dbNum1 + dbNum2));
    } else if (operation == "-"){
        printf("%.1f - %.1f = %.1f\n", dbNum1, dbNum2,
                (dbNum1 - dbNum2));
    } else if (operation == "*"){
        printf("%.1f * %.1f = %.1f\n", dbNum1, dbNum2,
                (dbNum1 * dbNum2));
    } else if (operation == "/"){
        printf("%.1f / %.1f = %.1f\n", dbNum1, dbNum2,
                (dbNum1 / dbNum2));
    } else {
        cout << "Please enter only +, -, *, or /\n";
    }
    
    // ----- END PROBLEM CALCULATOR -----
    return 0;
}