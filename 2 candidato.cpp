#include <iostream>
using namespace std;
int main () {
char name [] ="Wesley Candidato";
	char *who_am_i;
	
	who_am_i = name;
	cout << who_am_i; 	
	cout << &name;
}
