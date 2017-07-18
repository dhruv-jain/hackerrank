/*
https://www.hackerrank.com/challenges/30-dictionaries-and-maps/problem
Task 
Given  names and phone numbers, assemble a phone book that maps friends' 
names to their respective phone numbers. You will then be given an unknown 
number of names to query your phone book for. For each queried, 
print the associated entry from your phone book on a new line 
in the form name=phoneNumber; if an entry for  is not found, 
print Not found instead.
*/

#include <map>
#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    map<string, int> phone_book;

    for (int i = 0; i < N; i++) {
        string name;
        cin >> name;
        
        if (!phone_book[name]) {
            cin >> phone_book[name];
        }
    }

    for (int i = 0; i < N; i++) {
        string name;
        cin >> name;

        if (phone_book[name]) {
            cout << name << "=" << phone_book[name] << endl;
        } else {
            cout << "Not found" << endl;
        }
    }

    return 0;
}
