/*Given the meal price (base cost of a meal), tip percent (the percentage of the meal price being added as tip), 
and tax percent (the percentage of the meal price being added as tax) for a meal, find and print the meal's total cost.*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    double mealCost;
    int tipPercent;
    int taxPercent;
    
     cin >> mealCost;
     cin >> tipPercent;
     cin >> taxPercent;
    
    double tip = round(mealCost*tipPercent/100);
    double tax = mealCost *taxPercent/100;
    double totalCost = round(mealCost + tip + tax);
    cout<< "The total meal cost is " << totalCost << " dollars."<<endl;
       
    return 0;
}
