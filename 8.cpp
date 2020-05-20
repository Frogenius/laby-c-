 #include<iostream>

using namespace std;

struct osoba {
	char *imie;
	char *nazwisko;
	int rok_urodzenia;
};


int sortuj_top(osoba **tablica, int liczba) {
	int i, j;
	osoba *temp=tablica[liczba-1];
	for (i = liczba-1; i >0; i--){
		tablica[i] = tablica[i-1];
	}
	tablica[0] = temp;			
	return 0;
}





/** Funkcja wypisuje elementy tablicy, ktуra zawiera struktury osoba*/
int wypisz(osoba *tablica, int liczba) {
	while (liczba--) {
		cout << tablica->imie << " " << tablica->nazwisko;
		cout << " " << tablica->rok_urodzenia << endl;
		tablica++;
	}
	return 0;
}
int wypisz_wsk(osoba **tablica, int liczba) {
	while (liczba--) {
		cout << (*tablica)->imie << " " << (*tablica)->nazwisko << " " << (*tablica)->rok_urodzenia << endl;
		tablica++;
	}
	return 0;
}
int del_r(osoba **tablica, int rok) {


	//		//tablica[i]={ "", "", 0 }			
		//}
	//}
	return 0;

}




int main() {
	char name[30];
	char surName[30];
	int rok;
	char p;
	struct osoba dane[5] = { { "Antoni", "Adamski", 1985 },{ "Bartosz", "Barbarski",1972 },{ "Celina","Cezarska",1992 } };
	cout << "\"de\" - dodac na konic albo \"s\" - dodaj na poczatek" << endl;
	cin >> p;
	if (p == 'd') {
		//cin >> rok;
		cout << "Wpisz imie: ";
		cin >> name;
		dane[3].imie = name;
		cout << endl;
		cout << "Wpisz nazwisko: ";
		cin >> surName;
		dane[3].nazwisko = surName;
		cout << endl;
		cout << "Wpisz rok urodzenia: ";
		cin >> rok;
		dane[3].rok_urodzenia = rok;
		cout << endl;
		struct osoba **dane_wsk = new struct osoba*[4];
		for (int i = 0; i < 4; i++) dane_wsk[i] = dane + i;
		sortuj_top(dane_wsk, 4);
		wypisz_wsk(dane_wsk, 4);
	}
	if (p == 'e') {
		cout << "Wpisz imie: ";
		cin >> name;
		dane[3].imie = name;
		cout << endl;
		cout << "Wpisz nazwisko: ";
		cin >> surName;
		dane[3].nazwisko = surName;
		cout << endl;
		cout << "Wpisz rok urodzenia: ";
		cin >> rok;
		dane[3].rok_urodzenia = rok;
		cout << endl;
		wypisz(dane, 4);
	}
	else if (p == 's') {
		cout << "Wpisz imie: ";
		cin >> name;
		dane[3].imie = name;
		cout << endl;
		cout << "Wpisz nazwisko: ";
		cin >> surName;
		dane[3].nazwisko = surName;
		cout << endl;
		cout << "Wpisz rok urodzenia: ";
		cin >> rok;
		dane[3].rok_urodzenia = rok;
		cout << endl;
		struct osoba **dane_wsk = new struct osoba*[4];
		for (int i = 0; i < 4; i++) dane_wsk[i] = dane + i;
		sortuj_top(dane_wsk, 4);
		wypisz_wsk(dane_wsk, 4);
	}

	
	system ("pause");
	return 0;
}
