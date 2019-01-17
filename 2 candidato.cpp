#include <iostream>
using namespace std;

int main () {
int num[5];
int *ptr;
cout << "Enter 5 numbers \n";
for (int j=0; j<5; j++){
	cout << "Integer " << j+1 << ": ";
	cin >> num[j];
}

ptr = num;

for (int i=0; i<5; i++){
	cout << "address of num [" << i << "] = ";
	cout << ptr << endl;
	cout << "Value of num [" << i << "]= ";
	cout << *ptr << endl;
	
	ptr++;
}
return 0;
}

