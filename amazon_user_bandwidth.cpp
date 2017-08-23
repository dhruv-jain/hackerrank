/*
Suppose there is a log file called logfile.log. It could also be in txt or csv formats. It contents are as shown below (bandwidth is in KB):

CustomerID: 1001  bandwidth: 5000  CarrierType: A  Region: US
CustomerID: 2001  bandwidth: 4000  CarrierType: B  Region: UK
CustomerID: 1001  bandwidth: 2000  CarrierType: A  Region: US
CustomerID: 3001  bandwidth: 1000  CarrierType: C  Region: JPN
CustomerID: 2001  bandwidth: 500   CarrierType: B  Region: UK
I would like to do the following:

Find total bandwidth associated with each customer id
Cost of Each Carrier Type is- carriertype A: $0.40 per KB, carriertype B: $0.60 per KB, carriertype C: 0.80 per KB List the customer ids with the greatest total amount in descending order
For Each region find the total bandwidth consumed
*/
#include <algorithm>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <map>
#include <vector>
#include <iterator>
#include <cstring>
using namespace std;

bool cmp(const pair<string, double>  &p1, const pair<string, double> &p2)
{ return p2.second < p1.second; }

int main() {
  ifstream infile("log.txt");
  string line;
  map<string, double> userBand;
  map<string, int> region;
  map<string, double>::iterator it;
  std::vector<std::string> vec;
  vector<pair<string, double> > v;

  while (getline(infile, line)) {
  istringstream ss(line);
  string a;
  while(getline(ss, a, ':')) {
    if(ss >> a){
      vec.push_back(a);
    }
  }
  char ch;
  double cost;
  ch=vec[2][0];
  switch(ch){
    case 'A': {cost = 0.40 * stoi(vec[1]); break;}
    case 'B': {cost = 0.60 * stoi(vec[1]); break;}
    case 'C': {cost = 0.80 * stoi(vec[1]); break;}
  }
    //if customer found put it in map, add the bandwidth associated with it
    //to the total bandwidth sum
  if(userBand.find(vec[0]) != userBand.end()) {
    userBand.find(vec[0])->second = userBand.find(vec[0])->second + cost;
  }
  else {
    userBand.insert(std::pair<string, int>(vec[0],cost));
  }
  /*push region in map
  if(region.find(vec[3]) != region.end()) {
     region.find(vec[3])->second = region.find(vec[3])->second + stoi(vec[1]);
  }
  else {
    region.insert(std::pair<string, int>(vec[3], stoi(vec[1])));
  }*/
  //empty vector
  vec.erase(vec.begin(), vec.end());
}

copy(userBand.begin(), userBand.end(),back_inserter(v));
sort(v.begin(),v.end(), cmp);

/*for(it = userBand.begin(); it != userBand.end(); ++it) {
  cout << "Customer ID " << it->first << " : " << it->second<<endl;
}*/
for (int i =0;i<v.size();i++){
  cout << v[i].first << ":" << v[i].second << endl;

}
/*for(it = region.begin(); it != region.end(); ++it) {
  cout << it->first << " : " << it->second<<endl;
}*/

}
