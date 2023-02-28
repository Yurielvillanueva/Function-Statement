#include <iostream>
#include <iomanip>
using namespace std;
//function prototype
int check_prime(int);
int main() {
	int values = 0;
	cout << "\n \n";
	cout << "\t \t Prime Number Generator Version 1.0";
	cout << "\n \n";
	cout << "\tGive a Number: ";
	cin >> values;
	check_prime(values);
	cout << "\n\n";
	system("pause");
}
//fuction Declaration
int check_prime(int x) {
	int var1 = 0, var2 = 0, flag = 0;
	cout << "\n \n";
	cout << "\tList of Prime Numbers";
	cout << "\n \n";
	cout << setw(9);
	for (var1 = 2; var1 <= x; var1++) {
		flag = 1;
		for (var2 = 2; var2 < var1; var2++) {
			if ((int)var1 % (int)var2 == 0) {
				flag = 0;
			}
		}
		if (flag == 1) {
			cout << var2;
			cout << "";
		}
	}
}