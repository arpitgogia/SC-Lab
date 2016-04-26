#include <iostream>
#include <cmath>
using namespace std;
double f(double y, double x) {
	return ((pow(y, 2) - pow(x, 2)) / (pow(x, 2) + pow(y, 2)));
}
int main() {
	double y0 = 1, x0 = 0, y1, n = 0.4, h = 0.2, fx, k1, k2, k3, k4;
	for(; x0 < n ; x0 += h) {
		fx = f(x0, y0);
		k1 = h * fx;
		fx = f(x0 + h / 2, y0 + k1 / 2);
		k2 = h * fx;
		fx = f(x0 + h / 2, y0 + k2 / 2);
		k3 = h * fx;
		fx = f(x0 + h / 2, y0 + k2 / 2);
        k4 = h * fx;
        y1 = y0 + ( k1 + 2 * k2 + 2 * k3 + k4) / 6;
        cout << "k1 = " << k1 << "\n";
     	cout << "k2 = " << k2 << "\n";
        cout << "k3 = " << k3 << "\n";
        cout << "k4 = " << k4 << "\n";
        cout << "y(" << (x0 + h) << ") = " << y1 << "\n";   
		y0 = y1;
	}
}