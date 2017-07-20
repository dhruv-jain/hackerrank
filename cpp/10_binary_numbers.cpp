/*Given a base 10 integer convert it to binary (base 2). 
Then find and print the base-10 integer denoting the maximum number of consecutive 1's in binary representation.
*/

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
    int s=0;
    int max=0;
    
    int remainder;
    while (n>0){
        remainder = n%2;
        n=n/2;
        if(remainder==1){
            s++;
            if (s>max) max=s;
        }
        else s=0;
            
        
    
    }
    cout << max;
    return 0;
}
