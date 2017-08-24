#string - university , aabbbcddfc
#output - n? Second unique character 

#Algo - 
#find first unique character 
#maintain a count of each character 
#map -> first = character 
#map -> second = count 
#copy map to vector 
#output the second unique character 
int main()
{
string s;
int c = 0;
map<char, int> count;
while(s : c){
map.insert(std::pair<char,int>);

else 

map.find(char)->second += count;
}
vector<pair<char, int> second_unique;
if (count == 1) {
copy(map.begin(),map.end(),back_inserter(second_unique));
sort(second_unique.begin(),second_unique());
}


}


api: loadOrders
client: service1
time: 200 ms

api: loadOrders
client: service2
time: 2000 ms

api: loadOrders
client: service3
time: 100 ms

api: loadOrders
client: service2
time: 1000 ms

list the client that had most latency 
ex- service2 

client with the top time?
 2 service2 
Algo - 

Read the log file line by line 
extract client and time associated with that client 
if the time is more than 100 ms then output something is wrong 

client : no of time it fails the threshold condition (ie time > 100 ms) 

l[0] loadorders 
l[1] service3(string)
l[3] time(int)

#include <fstream>
#include <string>
int main()
{
vector <string> l;
ifstream file("log.txt");
string line;
while(getline(file, line)){
l.pushback(line);}

map<string, int> map;
while(map.find(vec[
if(map.find(vec[1])!=map.end())


SQL:
--------
Employee:

empid (primary key)
name
title
salary
deptid (foreign key to Department.deptid)
mgrid (foreign key to Employee.empid)

Department:
deptid (primary key)
deptname
-All employee names reporting to empid 'n'

display all employees names 

input = emID output

Select name from Employee where Employee.mgrid=Employee.empid

display all employee names of that particular manager including other managers

Select name
From Employee 
Where mgrid = '
