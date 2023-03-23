#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	string str1 = "carro";
	string str2 = "carros";
	
	if (str1.compare(str2) == 0) 	{
		cout << "Iguais" << endl;
	}
	else 	{
		cout << "Diferentes" << endl;
	}

	if (str1.compare(0, 5, str2, 0, 5) == 0) 	{
		cout << "Iguais" << endl;
	}
	else 	{
		cout << "Diferentes" << endl;
	}
	
	string str3 = "A";
    string str4 = "B";
    // Strings iguais = 0
    // String principal menor do que a segunda (-1)
    // String principal maior do que a segunda (1)
    cout << str3.compare(str4) << endl;
    cout << str4.compare(str3) << endl;
			
	return 0;
}