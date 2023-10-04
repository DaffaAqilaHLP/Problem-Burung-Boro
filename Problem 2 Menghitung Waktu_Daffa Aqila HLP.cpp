#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    double s;
    double v;
    double w;
    double sinA;

    cout << "Sudut peluncuran ?" << endl;
    cin >> s;
    cout << "Kecepatan awal?" << endl;
    cin >> v;
    sinA = sin(s * 22 / 7 / 180);
    w = 2 * (v * sinA) / 10;
    cout << w << endl;
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}
