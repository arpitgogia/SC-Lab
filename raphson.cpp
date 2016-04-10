#include <iostream>
#include <cmath>
using namespace std;
double function(double x) {
    return (pow(x, 3) - (3) * (x) + 1);
}
double derivative(double x) {
    return (3 * pow(x, 2) - 3);
}
int main() {
    double xn = 0, xn1;
    while(true) {
        xn1 = xn - (function(xn) / derivative(xn));
        if(xn1 == xn) 
            break;
        xn = xn1;
    }
    cout << xn1 << "\n";
}