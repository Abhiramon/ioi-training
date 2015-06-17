#include <iostream>

using namespace std;


int main() {
	string d;
	int c = 0;
	while(cin >> d){
		if(d == "#")
			return 0;
		c++;
		cout << "Case " << c << ": ";
		if(d == "HELLO"){
			cout << "ENGLISH" << endl;
		}else if(d == "HOLA"){
			cout << "SPANISH" << endl;			
		}else if(d == "HALLO"){
			cout << "GERMAN" << endl;			
		}else if(d == "BONJOUR"){
			cout << "FRENCH" << endl;		
		}else if(d == "CIAO"){
			cout << "ITALIAN" << endl;	
		}else if(d == "ZDRAVSTVUJTE"){
			cout << "RUSSIAN" << endl;	
		}else{
			cout << "UNKNOWN" << endl;
		}
	}
	return 0;
}
