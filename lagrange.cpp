#include <iostream>
using namespace std;
float point = 9.5;
int x[] = {7, 8, 9, 10};
int y[] = {3, 1, 1, 9};
int main() {
    ios_base::sync_with_stdio(0);
    float answer = 0;
    for(int index = 0 ; index < 4 ; index++) {
        float term = y[index];
        for(int i = 0 ; i < 4 ; i++)
            if(index != i) 
                term *= (point - x[i]) / (x[index] - x[i]);
        answer += term;
    }
    cout << answer << "\n";
}