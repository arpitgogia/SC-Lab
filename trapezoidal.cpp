#include <iostream>
#include <cmath>
using namespace std;
float h = 0.2, lower = 4, upper = 5.2;
double f(double x) {
    return log(x);
}
int main() {
    ios_base::sync_with_stdio(0);
    double x = lower + h, sum = 0;
    while(x < upper) {
        double temp = f(x);
        sum += temp;
        x += h;
        cout << sum << " " << x << "\n";
    }
    sum *= 2;
    sum += (f(lower) + f(upper));
    sum *= (h / 2);
    cout << "Answer : " << sum << "\n";
}