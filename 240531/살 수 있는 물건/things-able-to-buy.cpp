#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(n < 1000)
    {
        cout << "no";
    }
    else if(n >= 1000 && n <= 3000)
    {
        cout << "mask";
    }
    else
    {
        cout << "book";
    }
    return 0;
}