#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <sstream>
#include <limits>

using namespace std;

int g_iRandNum = 0;
const double PI = 3.14159;

int main() {

    bool bAdult = true;
    char chMyGrade = 'A';
    unsigned short int u16Age = 43;
    short int siWeight = 70;
    int nDays = 7;
    long lBigNum = 1100000;
    float fFloatingNum = 3.1232;
    double dbBigFloat = 1.111111111111111111111;
    long double ldPi = 3.12322553242123;
    auto WhatsIsThat = true;

    cout << " Min int " << numeric_limits<int>::min() << "\n";
    cout << " Max int " << numeric_limits<int>::max() << "\n";

    cout << "Size of int : " << sizeof(int) << "\n";

}