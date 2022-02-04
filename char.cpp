#include<iostream>

using namespace std;

int main()
{
	char grade = 'A';
	string phrase = "own academy";
	int age = -50;
	double gpa = 2.0;
	bool isMale = false;
	phrase[0] = 'G';
	cout<< grade  <<endl;
	string phrasesub;
	phrasesub = phrase.substr(8,3);
	cout<<phrasesub<<endl;
	cout<<phrase.substr(0,5)<<endl;
	cout<<phrase<<endl;
	cout<<"Giragge Academy"<<endl;
}
