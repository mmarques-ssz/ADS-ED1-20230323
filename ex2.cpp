#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	string str1 = "12";
    string str2 = "18,97";
	string str3 = "7 dias na semana";
	
	int val1 = stoi(str1);	
	int val2 = stoi(str2);
	double val2f = stof(str2);
    int val3 = stoi(str3);
	
	cout << val1 << endl;	
	cout << val2 << endl;
	cout << val2f << endl;
    cout << val3 << endl;
			
	return 0;
}