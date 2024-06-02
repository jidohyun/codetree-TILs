#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    a % 2 == 0 ? a /= 2 : a = (a + 1) / 2;
    cout << a;
    return 0;
}