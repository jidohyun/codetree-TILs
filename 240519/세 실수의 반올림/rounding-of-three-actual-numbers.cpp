#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    
    cout << setprecision(4) << a << "\n";
    cout << setprecision(5) << b << "\n";
    cout << fixed << setprecision(3) << c;
    return 0;
}