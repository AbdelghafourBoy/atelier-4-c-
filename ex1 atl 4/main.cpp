#include <iostream>
#include <cmath>
using namespace std;

class Complex {
public:

    float reel, imaginaire;

    Complex(float r = 0, float i = 0)
    {
        reel = r;   imaginaire = i;
    }

    Complex operator + (Complex const& obj) {
        Complex resultat;
        resultat.reel = reel + obj.reel;
        resultat.imaginaire = imaginaire + obj.imaginaire;
        return resultat;
    }

    Complex operator - (Complex const& obj) {
        Complex resultat;
        resultat.reel = reel - obj.reel;
        resultat.imaginaire = imaginaire - obj.imaginaire;
        return resultat;
    }

    Complex operator / (Complex const& obj) {
        Complex resultat;
        resultat.reel = cos(atan(reel / imaginaire) - atan(obj.reel / obj.imaginaire));                      //real + obj.real;
        resultat.imaginaire = sin(atan(reel / imaginaire) - atan(obj.reel / obj.imaginaire)); ;
        return resultat;
    }

    Complex operator * (Complex const& obj) {
        Complex resultat;
        resultat.reel = (reel * obj.reel) + (imaginaire * obj.imaginaire * -1);                      //real + obj.real;
        resultat.imaginaire = (reel * obj.imaginaire) + (imaginaire * obj.reel);
        return resultat;
    }

    void afficher() {
        cout << reel << " + " << imaginaire << "i\n";
    }



};

int main()
{
    Complex c1(8, 5), c2(2, 4);

    Complex r1 = c1 / c2; // An example call to "operator /"


    Complex r2 = c1 * c2; // An example call to "operator *"


    Complex r3 = c1 + c2; // An example call to "operator +"


    Complex r4 = c1 - c2; // An example call to "operator -"


    cout << "division : ";
    r1.afficher();

    cout << "multiplication : ";
    r2.afficher();

    cout << "addition : ";
    r3.afficher();

    cout << "soustraction : ";
    r4.afficher();

    return 0;
}
