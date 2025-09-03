#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a = 0;
    int b, c = 0;
    bool acabou = false;
    while (acabou == false) {
        a++;
        b = a+1;
        while (b <= 500 + a/2) {
            c = 1000 - a - b;
            if (pow(a, 2) + pow(b, 2) == pow(c, 2)) {
                acabou = true;
                break;
            }
            b++;
        }
    }

    
    cout << a << "\n";
    cout << b << "\n";
    cout << c << "\n";
    cout << a*b*c << "\n";
    return 0;
}