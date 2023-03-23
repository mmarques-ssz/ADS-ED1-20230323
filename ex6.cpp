#include <iostream>
#include <locale.h>
#include <windows.h>
using namespace std;

void gotoxy(short x, short y) 
{
	COORD coord = {x, y};
	SetConsoleCursorPosition(GetStdHandle ( STD_OUTPUT_HANDLE ), coord);
}


int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	string msg = "Amanhã será sexta-feira. Sexta é véspera de fim de semana!";
	string msgU = "";
	string msgL = "";
	
	for(char c: msg) {
		msgU += toupper(c);
		msgL += tolower(c);
	}
	
	gotoxy(0, 0);
	cout << "123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890" << endl;
	
	gotoxy(10, 10);
	cout << msg << endl;
	
	gotoxy(10, 12);
    cout << msgU << endl;
    
    gotoxy(10, 14);
	cout << msgL << endl;	
    
	return 0;
}