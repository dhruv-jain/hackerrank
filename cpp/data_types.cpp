#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    int j;
    double e;
    string t;
    cin>>j;
    cin>>e;
    cin.ignore();  
    getline(cin,t);
    cout<<i+j<<endl;
    d=d+e;
    cout<<fixed<<setprecision(1)<<d<<endl;
    cout<<s<<t;
    
    return 0;
}
