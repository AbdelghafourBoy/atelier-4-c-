#include <iostream>
#include <list>
using namespace std;

int main() {

	list <int> list1;
	int temp;
	char cr;
	do {

		cout << "Enter integer numbers: ";
		cin >> temp;

		if (temp == int(temp)) {
			list1.push_back(temp);
		}

		cout << "appuyer \"c\" pour continuer , ou appuyer un autre touch pour soumettre \n";
		cin >> cr;

	} while (cr == 'c');


	list1.sort();
	for(int x : list1){cout << x <<"\n"; }

	return 0;

}


