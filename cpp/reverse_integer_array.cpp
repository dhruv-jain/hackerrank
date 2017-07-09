//Given an array of integers, print each element in reverse order as a single line of space-separated integers.

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    int first =0;
    int last=n-1;
    
while (first<last){
    int temp=arr[first];
        arr[first]=arr[last];
        arr[last]=temp;
        ++first;
    --last;
        
    }
for(int arr_i = 0;arr_i < n;arr_i++){
       cout << arr[arr_i] << " " ;
    }    
    return 0;
}
