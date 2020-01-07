#include<iostream>
#include<string>
using namespace std;

int main(){
	int N;
	cout << "Enter the number of student: ";
	cin >> N;
	
	string name[N];
	int age[N];  
	int y = 0;
	while (y < N)
	{
		cout << "Name of student"  << y+1 << " =";
	cin >> name[y] ;
	cout << "Age of student = "  << y+1 << " =";
	cin >> age[y] ;
	y ++;
	}
	
	int key;
	cout << "--------------------------------------n";
	cout << "Enter an age to search: ";
	
	cin >> key;
	cout << "--------------------------------------\n";
	y+0;
	while(y < N)
	{
	
	cout << name[y]<< "\n";
	
		y ++;
	}
	
	cout << "--------------------------------------\n";
	
	return 0;
}
