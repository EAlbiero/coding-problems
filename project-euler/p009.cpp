#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a = 1;
    int b, c = 0;
    while (a <= 333) {
        b = a+1;
        while (b <= 500 + a/2) {
            c = 1000 - a - b;
            if (pow(a, 2) + pow(b, 2) == pow(c, 2)) {
                cout << a*b*c << "\n";
                return 0;
            }
            b++;
        }
        a++;
    }

    
    return 1;
}