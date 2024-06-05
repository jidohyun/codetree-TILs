#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if(a < b)
    {
        cout << 1 << ' ' << 0;
    }
    else if(a == b)
    {
        cout << 0 << ' ' << 1;
    }
    return 0;
}