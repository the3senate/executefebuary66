#include<iostream>
using namespace std;
int main() {
	char jedi;
		cout << "do you like the jedi order?" << endl;
		cin >> jedi;
		if (jedi == 'n')
			cout << "execute order 66" << endl; 
		else if (jedi == 'y')
			cout << "for the republic!"<<endl;


}