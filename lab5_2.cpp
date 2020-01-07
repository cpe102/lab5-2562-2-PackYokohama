#include<iostream>
#include<string>
using namespace std;

string mixText(string x,string y){
	string E = "";
	int i=0;
	int Q = x.size();
	int W = y.size();
	if (Q==W){
	while(i<Q){                                                           
	E=E+x[i]+y[i];
	i++;
	
	} 
return E;
	}else{
		return"E";
	
  }
}



int main(){	
	cout << mixText("AAA","BBB") << "\n";
	cout << mixText("Hello","World") << "\n";
	cout << mixText("SOTUS","CHEER") << "\n";
	cout << mixText("1234","5678") << "\n";
	cout << mixText("6","9") << "\n";
	cout << mixText("XXXXXXX","YYY") << "\n";	
	cout << mixText("Y","XX") << "\n";	
	
	return 0;	
}
