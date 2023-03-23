#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	string msg = "Amanhã será sexta-feira!";
	cout << msg << endl;
	
	int i = 0;
	while (i < msg.size()) {
		cout << msg[i] << " ";
		++i;
	}
	cout << endl;
	
	for(i = 0; i < msg.size(); ++i) {
		cout << msg.at(i) << " ";
	}
	cout << endl;
	
	for(char c: msg) {
		cout << c << " ";
	}
	cout << endl;
	
	for(string::iterator it = msg.begin(); it < msg.end(); ++it ) {
		cout << *it << " ";
	}
	cout << endl;
	
	for(string::iterator it = msg.end()-1; it >= msg.begin(); --it ) {
		cout << *it << " ";
	}
	cout << endl;
		
	return 0;
}