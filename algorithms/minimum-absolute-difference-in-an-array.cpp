
//https://www.hackerrank.com/challenges/minimum-absolute-difference-in-an-array

#include <bits/stdc++.h>

using namespace std;

int minimumAbsoluteDifference(int n, vector <int> arr) {
    // Complete this function
    sort(arr.begin(), arr.end());
    vector<int> r;
    for(int i = 0;i<n;i++){
    r.push_back(abs(arr[i+1]-arr[i]));
    
    }
    return *min_element(r.begin(), r.end());
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = minimumAbsoluteDifference(n, arr);
    cout << result << endl;
    return 0;
}
