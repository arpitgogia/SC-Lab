#include <iostream>
#include <cmath>
using namespace std;
float f(float x) {
    return (x - cos(x));
}
int main() {
    float a = 0, b = 1;
    float x = 0, y = 0;
    while(true) {
        x = (a * f(b) -  b * f(a)) / (f(b) - f(a));
        if(f(a) * f(b) < 0)
            b = x;
        else 
            a = x;
        if(y == x) 
            break;
        y = x;
    }
    cout << x << "\n";
}