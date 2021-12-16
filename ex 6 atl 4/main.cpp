#include <iostream>
using namespace std;
class Test {
public:
	static float tableau[];
public:
	static float division(int indice, int diviseur) {
		return tableau[indice] / diviseur;
	}
};
float Test::tableau[] = { 17, 12, 15, 38, 29, 157, 89, -22, 0, 5 };
int main()
{
	int x, y;
	cout << "Entrez l’indice de l’entier à diviser: " << endl;
	cin >> x;
	cout << "Entrez le diviseur: " << endl;
	again:
	cin >> y;
	try {
		if (y == 0) { throw 0; }
		else {
			cout << "Le résultat de la division est: " << endl;
			cout << Test::division(x, y);
		}
	}
	catch(int x){
		cout << "erreur: division par zero \n " << endl;

		cout << "Entrez un nouveau diviseur: " << endl;
		goto again;
	}
	return 0;
}
