/*
Find the top ten most frequent IP addresses from a web server log file.
Example - 
14716104719,GET,/index.html,10.10.10.1
14716104719,GET,/index.html,10.10.10.2
14716104719,GET,/index.html,10.10.10.2
*/
//read file line by line and split it on the ,
//take ip as string and put it in map, keep track of count
//sort the map based on values - pull top 10 0

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <map>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;
bool cmp(const pair<string, int>  &p1, const pair<string, int> &p2)
{ return p2.second < p1.second; }

int main()
{
  ifstream infile("file.txt");
  string line;
  string delimiter = ",";
  map<string, int> ip;
  map<string, int>::iterator it;
  vector<pair<string, int> > v;
  while (getline(infile, line))
  {
    istringstream iss(line);
    string a;
    if ((iss >> a)) {
      //cout << a << endl;
      string token = a.substr(a.find_last_of(delimiter)+1);
      //std::cout << token << std::endl;
      it = ip.find(token);
      if(it==ip.end()){
        //ip.insert(pair<string, int>(token, 1));
        ip[token] = 1;
      }
      else {
        //ip.insert(pair<string, int>(token, (it->second + 1)));
        ip[token] = ip[token] + 1;
      }
    }
  }
  copy(ip.begin(), ip.end(),back_inserter(v));
  sort(v.begin(),v.end(), cmp);

  for (int i =0;i<10;i++){
    cout << v[i].first << endl;
    cout << v[i].second << endl;

  }
}
