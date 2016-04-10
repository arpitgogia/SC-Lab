#include <iostream>
#include <cmath>
using namespace std;
double function(double x) {
    return (x - cos(x));
}
int main() {
    double midx, function_mid, left, right, previous_function_mid;
    left = 0, right = 1;
    midx = (left + right) / 2;
    previous_function_mid = function(midx);
    while(true) {
        double value_at_left = function(left);
        double value_at_right = function(right);
        double value_at_mid = function(midx);
        if(value_at_mid * value_at_left < 0) 
            right = midx;
        else
            left = midx;
        previous_function_mid = value_at_mid;
        midx = (left + right) / 2;
        if(abs(previous_function_mid) <= 0.00001)
            break;
    }
    cout << midx << "\n";
}