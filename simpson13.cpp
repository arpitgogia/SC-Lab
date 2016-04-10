#include <iostream>
#include <cmath>
using namespace std;
double h = 0.2, lower = 4, upper = 5.2;
double f(double x) {
    return log(x);
} 
int main() {
    double x = lower + h, sum = 0;
    int counter = 1;
    while(x < upper) {
        if(counter % 2 == 0) 
            sum += (2 * f(x));
        else 
            sum += (4 * f(x));
        counter++;
        x += h;
    }
    sum += (f(lower) + f(upper));
    sum *= (h / 3);
    cout << sum << "\n";
}