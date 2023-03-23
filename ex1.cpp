#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	string msg = "Amanhã será sexta-feira!";
	cout << msg[5] << endl;
    cout << msg.at(5) << endl;	
    cout << msg.front() << endl;
    cout << msg.back() << endl;
    cout << msg.size() << endl;
	return 0;
}