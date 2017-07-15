/*
Given a string s, of length t that is indexed from o to t-1, 
print its even-indexed and odd-indexed characters as double space-separated strings on a single line 
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int t;
    cin >> t;
    
    //string tmp;
    
    for (int i = 0; i<t; i++){
        string s;
        cin >> s;
        
        for (int j=0;j<s.length();j++){
            if(j%2==0) cout <<s[j];
        }
        cout << " ";
        
        for (int j=0;j<s.length();j++){
            if(j%2!=0) cout <<s[j];
        }
        cout << endl;
    }
        
    return 0;
}
