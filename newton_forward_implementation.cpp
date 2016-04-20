#include <iostream>
#include <vector>
using namespace std;
typedef float f;
vector<f> y;
f p = 0.4, n = 5, ans = 0;
float factorial(float n) {
    if(n <= 1)
        return 1;
    else 
        return (n * factorial(n - 1));
}
void solve(float k) {
    if(k == n)
        return;
    float prod = y[0];
    for(int i = 0 ; i < k ; i++) 
        prod *= (p - i);
    prod /= factorial(k);
    ans += prod;
    for(int i = 0 ; i < (n - k - 1) ; i++) {
        y[i] = y[i + 1] - y[i];
        cout << y[i] << "\t";
    }
    cout << "\n";
    solve(k + 1);
}
int main() {
    y.resize(5, 0);
    y[0] = 46; y[1] = 66; y[2] = 81; y[3] = 93;
    y[4] = 101;
    solve(0);
    cout << ans << "\n";
}