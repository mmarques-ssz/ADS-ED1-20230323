#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	string msg = "Amanh� ser�";
	cout << msg << endl;
	
	msg.append(" sexta-feira!");
    cout << msg << endl;
    
    msg.pop_back();
    cout << msg << endl;
    
    msg.push_back('!');
    cout << msg << endl;
    
    msg.erase(0, 3);
    cout << msg << endl;
    
    msg.insert(3, ", dia 24,");
    cout << msg << endl;
    
    msg.replace(0, 3, "Amanh�");
    cout << msg << endl;
    cout << msg.size() << endl;
    
    msg.clear();
    cout << msg.size() << endl;
    
	return 0;
}