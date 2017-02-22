#include<iostream>
using namespace std;
int main() {
	char a;
	int s;
	int m;
	double sum;
	cout << "which form of math do you want to do?" << endl;
	cout << "You can choose between addition(a), subtraction(s), multiplication(m), or division(d)." << endl;//gives user choices
		cin >> a;//takes choice
		cout << "What two numbers would you like to use?" << endl;
		cin >> s;
		cin >> m;//takes numbers
		switch (a) {//different operations
		case 'a':
			sum = m + s;//adds
			cout << s << " + " << m << " = " << sum << endl;
			break;
		case's':
			sum = s - m;//subtracts
			cout << s << " - " << m << " = " << sum << endl;
			break;
		case'm':
			sum = s*m;//multiplies
			cout << s << "*" << m << "=" << sum << endl;
			break;
		case 'd':
			sum = s / m;//divides
			cout << s << " / " << m << " = " << sum << endl;
			break;
		default:
			cout << "I don't get it." << endl;
		}
}