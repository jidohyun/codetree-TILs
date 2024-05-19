#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    
    cout << precision(4) << a << "\n";
    cout << precision(5) << b << "\n";
    cout << fixed << precision(3) << c;
    return 0;
}