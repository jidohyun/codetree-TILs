#include <iostream>
using namespace std;

int main() {
    int a, b, tmp = 0;
    cin >> a >> b;
    if(b > a)
    {
        tmp = a;
        a = b;
        b = tmp;
        cout << a - b;
    }
    else
    {
        cout << a - b;
    }

    return 0;
}