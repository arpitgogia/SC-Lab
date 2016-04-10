#include <iostream>
#include <vector>
using namespace std;
typedef float f;
vector<f> y;
f p = 1.6;
f n = 6;
f ans = 0;
float factorial(float n) {
	if (n <= 1)
		return 1;
	return (n * factorial(n - 1));
}
void solve(float k) {
	if (k == n)
		return;
	float prod = y[0];
	for (int i = 0; i < k; i++)
		prod *= (p - i);
	prod /= factorial(k);
	ans += prod;
	for (int i = 0; i < (n - k - 1); i++)
		y[i] = y[i + 1] - y[i];
	solve(k + 1);
}
int main() {
	y.resize(6, 0);
	y[0] = 0; y[1] = 5; y[2] = 10; y[3] = 15; y[4] = 20; y[5] = 25;
	solve(0);
	cout << ans << "\n";
}