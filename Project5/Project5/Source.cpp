#include<iostream>
using namespace std;
int main() {
	char a;
	int s;
	int m;
	double sum;
	cout << "which form of math do you want to do?" << endl;
	cout << "You can choose between addition(a), subtraction(s), multiplication(m), or division(d)." << endl;
		cin >> a;
		cout << "What two numbers would you like to use?" << endl;
		cin >> s;
		cin >> m;
		switch (a) {
		case 'a':
			sum = m + s;
			cout << s << " + " << m << " = " << sum << endl;
			break;
		case's':
			sum = s - m;
			cout << s << " - " << m << " = " << sum << endl;
			break;
		case'm':
			sum = s*m;
			cout << s << "*" << m << "=" << sum << endl;
			break;
		case 'd':
			sum = s / m;
			cout << s << " / " << m << " = " << sum << endl;
			break;
		default:
			cout << "I don't get it." << endl;
		}
}