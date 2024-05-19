#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    
    cout.precision(4);
    cout << a << "\n";

    cout.precision(5);
    cout << b << "\n";

    cout.precision(3);
    cout << fixed  << c;
    return 0;
}