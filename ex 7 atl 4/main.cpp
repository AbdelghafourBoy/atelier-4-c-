#include <iostream>
#include <list>
#include<string>
#include<iterator>
using namespace std;

class Animal;
class Chat;
class Repas;
class Element;
class Chien;
class Entraineur;
class Compitition;

class Animal{
    protected:
        string nom ;
        int age ;
        string genre;
    public:
        Animal (string n, int a , string g){
                nom = n;   age = a; genre = g;
        }

};

class Chat : public Animal{
    private :
     string type;
     Repas *repas;

    public :
    Chat(string n, int a , string g, string t) : Animal(n,a,g){
        type = t;
    }

    void sauter(){ }
};

class Repas{
        private :
            string nom ;
            int heure ;
            string desciption;
            Chat *chat;
            list<Element> *elements;

        public:
            Repas(){
                this -> elements = new list<Element>();
            }
            Repas(string n, int h , string d) {
                nom = n; heure = h; desciption = d;
            }
            ~Repas(){ delete this ->elements;}

};

class Element{
    private:
            string nom ;
            string type;
    public:
        Element(string n , string t){ nom = n; type = t;}

};

class Race{
    protected:
        string specificite;
        bool RaceHybride;
        bool isRaceHybride(bool b){
            if(b){return true;}
            else{return false;}
        }
    public:
        Race(string s){ specificite = s;}
};

class Chien :  public Animal ,public Race {
    private :
     string taille;
     Repas repas;
    list<Entraineur> entraineurs;
    public :

    Chien(string n, int a , string g, string t, string s) : Animal(n,a,g), Race(s){
        taille = t;
    }

    bool isChass3(){ }
};


class Entraineur{
    private:
        string nom;
        string description;
        list<Chien> chiens;
    public:
        Entraineur( string n, string d  ){
                    nom =  n; description =d; }
        void setChiens (list<Chien> ch){chiens = chiens; }
};

class Compitition{
    private:
        string nom;
        string Date;
    public:
        int order;
};

int main()
{
    return 0;
}
