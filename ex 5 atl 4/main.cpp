#include <iostream>
#include <set>
#include<string>
#include<list>
#include<vector>
#include<iterator>
using namespace std;

// Question 1:
bool search1(int num, set<int> &set1 ) {
	bool exist1;
	for (int x : set1) {
		if (x == num) {
			exist1 = true;
			break;
		}
		else {
			exist1 = false;
		}
	}
	return exist1;
}

// Question 2:
bool search2(int num, set<int>& set2 , set<int>::iterator debut, set<int>::iterator fin) {

	bool exist2;
	debut = set2.begin();
	fin = set2.end();

	set<int>::iterator it;

	for (it = debut; it != fin; it++) {
		if (*it == num) {
			exist2 = true;
			break;
		}
		else {
			exist2 = false;
		}

	}
	return exist2;
}

// Question 3:
template <class Iterator, class T>
bool search3(Iterator first, Iterator last, const T &val)
{
	while (first != last) {
		if (*first == val) {
			return true;
		}
		++first;
	}
	return false;
}


int main() {

	set <int> my_set = { 12, 65, 41, 7, 87, 68, 76,90, 2, 44 };

	vector <string > my_vector = { "abdo" , "anas" , "hamza", "badr" , "amin", "mohammed", "boy" ,"yousef", "khawla", "najia"};

	list <int> my_list = { 12, 65, 41, 7, 87, 68, 76,90, 2, 44 };

	float my_arr[] = {2.2, 5.6, 88.4, 464.5};

	cout << search3(my_vector.begin(), my_vector.end(), "abdo") << endl;

	cout << search3(my_list.begin(), my_list.end(), 65) << endl;

	cout << search3(my_arr.begin(), my_arr.end(), 5.6 ) << endl;

	return 0;
}


