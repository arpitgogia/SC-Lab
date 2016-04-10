#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    vector<vector<float> > matrix;
    matrix.resize(3, vector<float>(4));
    for(int i = 0 ; i < 3 ; i++) 
        for(int j = 0 ; j < 4 ; j++)
            cin >> matrix[i][j];
    vector<float> ans(3, 0);
    bool pass = true;
    while(pass) {
        pass = false;
        for(int i = 0 ; i < 3 ; i++) {
            float val = matrix[i][3];
            for(int j = 0 ; j < 3 ; j++)
                if(i != j)
                    val -= matrix[i][j] * ans[j];
            val /= matrix[i][i];
            if(abs(val - ans[i]) > 0.00001)
                pass = true;
            ans[i] = val;
        }
    }
    cout << "x = " << ans[0] << "\n";
    cout << "y = " << ans[1] << "\n";
    cout << "z = " << ans[2] << "\n";
}