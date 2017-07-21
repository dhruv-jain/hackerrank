/* https://www.hackerrank.com/challenges/30-inheritance/problem */

#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
        /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here
   Student(string firstName_,string lastName_,int id_,vector<int> testScores_):Person(firstName_,lastName_, id_),testScores(testScores_){}
        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here

    char calculate(void) 
    {
        int sum =0;
        int a; 
         for (int i=0;i<testScores.size();i++){
             sum = sum + testScores[i];
                   
         }
        a = sum/testScores.size(); 

        if(a>=90&&a<=100) {
            return 'O';
        }
        
        if(a>=80&&a<90) {
            return 'E';
        }
        
        if(a>=70&&a<80) {
            return 'A';
        }
        
        if(a>=55&&a<70) {
            return 'P';
        }
        
        if(a>=40&&a<55) {
            return 'D';
        }
        
        else {
            return 'T';
        }
        
        
    }
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}