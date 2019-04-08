
#include "pch.h"
#include<iostream>
#include<string>
#include<time.h>

using namespace std;

class OdabirVrsteLjubimca{
private:
	int odabir;

public:
	void izbor(){
		cout << "Izaberite vrstu vaseg ljubimca" << endl;
		cout << "1. Macka\n2. Pas\n3. Zamorac\n" << endl;
		cin >> odabir;
		switch (odabir) {
		case 1: 
			Macka M;
			M.unosIspisPodatakaLjubimca();
			M.mjaukanje(); break;
		case 2: break;
		case 3: break;
		}
	}
};

class Ljubimac {
private:
	string vrsta[3] = { "Macka","Pas","Zamorac" };
	string ime;
	int godine;
	double tezina; //u program se unosi tezina ljubimca. na osnovu toga se izbacuje koliko je -> potrebnaHrana.
	double potrebnaHrana; //npr. macka od 5kg treba 500gr hrane na dan potrebnaHrana=tezina/10
	static int brojLjubimaca;
	
public:
	void glasanjeLjubimca();
	double jedenje();  //unosimo koliko je ljubimac pojeo hrane
	double spavanje(); //unosimo koliko spava na dan.
	double igranje(); //trosi kalorije. 
	void set_Ime() {	//postavljanje imena ljubimca
		cout << "Unesi ime svog ljubimca: " << endl;
		cin >> ime;
	}
	string get_Ime() {	//vraca ime ljubimca
		return ime;
	}
	void set_Godine() {
		cout << "Unesi godine svog ljubimca: " << endl;

		cin >> godine;
	}
	int get_Godine() {
		return godine;
	}
	void set_Tezina() {
		cout << "Unesi tezinu svog ljubimca u kilogramima: " << endl;
		cin >> tezina;
	}
	double get_Tezina() {
		return tezina;
	}
	void set_potrebnaHrana() {
		
		potrebnaHrana = tezina * 100;
	}
	double get_potrebnaHrana() {
		return potrebnaHrana;
	}
	void ispisPodatakaLjubimca() {
		cout << "Ime vaseg ljubimca je: " << get_Ime() << endl;
		cout << "Godine vaseg ljubimca su: " << get_Godine() << endl;
		cout << "Tezina vaseg ljubimca je: " << get_Tezina() << endl;
		set_potrebnaHrana();
		cout << "Dnevna kolicina potrebne hrane za vaseg ljubimca je: " << get_potrebnaHrana() << " grama." << endl;
	}
	void unosIspisPodatakaLjubimca() {
		set_Ime();
		set_Godine();
		set_Tezina();
		ispisPodatakaLjubimca();
	}

};

class Vlasnik {
private:
	string imeVlasnika;
	double budzet;
	

public:
	double kupnjaHrane();
	double hranjenje();//unosimo koliko mu dajemo hrane.na osnovu tezine zadovolji potrebnuHranu.znamo dal je gladan il nije gladan.	
};

class Hrana {
private:
	double cijena;
	double kolicina;
	double ostatak;
public:
	double potrosnjaHrane();

};

class Macka : public Ljubimac {
private:
	string mjauk = "mrrnjauuuu!!!";
public:
	void mjaukanje() {
		cout << "Vas ljubimac se glasa " << mjauk;
	}
};

Macka::Macka();
int main() {

	
	/*Ljubimac M;
	M.unosIspisPodatakaLjubimca();
	Ljubimac P;
	P.unosIspisPodatakaLjubimca();*/
	
	Macka M;
	M.unosIspisPodatakaLjubimca();
	M.mjaukanje();


	return 0;
}