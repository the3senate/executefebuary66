#include<iostream>
using namespace std;
int main() {
	char palpatine;
		cout << "hello,do you want a chocolate cookie,a bland cookie or a cookie with peanuts? (type the first letter of any of these cookies to get what you want." << endl;
		cin >> palpatine;
		switch (palpatine)
		{

		case 'c':
			cout << "here is your cookie,execute order 66" << endl;
			break;
		case'b':
			cout << "it's treason then..." << endl;
			break;
		case'p':
			cout << "here,but have you heard of the tradgedy of darth plaigus the wise?" << endl;

		default:
			cout << "no...NO N O you will die!" << endl;
			break;
		}
}
