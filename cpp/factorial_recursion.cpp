#include <bits/stdc++.h>

using namespace std;

int factorial(int n) {
return factorial(n*(n-1));}

int main() {
    int n;
    cin >> n;
    int result = factorial(n);
    cout << result << endl;
    return 0;
}
