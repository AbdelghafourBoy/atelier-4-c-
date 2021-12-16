

#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
	list <string> list1;
	string temp;
	char cr;
	do {
		cout << "Enter un mot : ";
		cin.ignore();
		getline(cin, temp);

		list1.push_back(temp);

		cout << "\n appuyer \"c\" pour continuer , ou appuyer un autre touch pour soumettre \n";
		cin >> cr;

	} while (cr == 'c');

	list1.sort();
	cout << "Les mot que vous avez enter: \n ";
	for (string s : list1) { cout << s << "\n"; }

	return 0;
}










