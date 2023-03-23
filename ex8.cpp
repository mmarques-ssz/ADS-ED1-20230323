#include <iostream>
#include <locale.h>
#include <fstream>>
using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	
	string linha;
	ifstream arq("lista.txt");
	
	if (arq.is_open()) {
		while (! arq.eof()) {
			getline(arq, linha);
			cout << linha << endl;
		}
		arq.close();
	}
	else {
		cout << "Erro ao abrir o arquivo";
	} 

	return 0;
}