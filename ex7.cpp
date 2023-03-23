#include <iostream>
#include <locale.h>
#include <fstream>>
using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	
	ofstream arq("lista.txt", ios::app);
	
	if (arq.is_open()) {
		arq << "Batata" << endl;
		arq.close();
	}
	else {
		cout << "Erro ao abrir o arquivo";
	} 

	return 0;
}