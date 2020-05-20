#include<iostream>

using namespace std;

void Wypisz(char  krzyzowka[][20]) {
	for (int i = 0; i<20; i++) {
		for (int j = 0; j<20; j++) {


			cout << krzyzowka[i][j] << " ";
		}
		cout << endl;
	}
};


void zeruj(char  krzyzowka[][20]) {
	for (int i = 0; i<20; i++) {
		for (int j = 0; j<20; j++) {
			if (i == 0 || i == 19)
				krzyzowka[i][j] = '-';
			else if (j == 0 || j == 19)
				krzyzowka[i][j] = '|';
			else
				krzyzowka[i][j] = ' ';
		}
	}
};

void Wstaw(char  krzyzowka[][20], char slowo[],  int x,  int y,  int poziomo_pionowo ) {


	if (poziomo_pionowo == 0) { // ----

		for (int i = y, j = 0; i<19; i++, j++) {
			if (j<10)
				krzyzowka[x][i] = slowo[j];
			else
				krzyzowka[x][i] = ' ';
		}
	}
	else {  // ||||
		for (int i = x, j = 0; i<19; i++, j++) {
			if (j<10)
				krzyzowka[i][y] = slowo[j];
			else
				krzyzowka[i][y] = ' ';
		}

	}



};

 void Wstaw2(char  krzyzowka[][20],  char slowo2[],  int x2,  int y2,  int poziomo_pionowo2) {


	if (poziomo_pionowo2 == 0) { // ----

		for (int i = y2, j = 0; i<19; i++, j++) {
			if (j<10)
				krzyzowka[x2][i] = slowo2[j];
			else
				krzyzowka[x2][i] = ' ';
		}
	}
	else {  // ||||
		for (int i = x2, j = 0; i<19; i++, j++) {
			if (j<10)
				krzyzowka[i][y2] = slowo2[j];
			else
				krzyzowka[i][y2] = ' ';
		}

	}





};


void Sprawdz(char krzyzowka[][20], char slowo[], int x, int y, int poziomo_pionowo) {
	if (poziomo_pionowo == 0) { // ----

		for (int i = y, j = 0; i<19; i++, j++) {
			if (j<10)
				krzyzowka[x][i] = slowo[j];
			else
				krzyzowka[x][i] = ' ';
		}
	}
	else {  // ||||
		for (int i = x, j = 0; i<19; i++, j++) {
			if (j<10)
				krzyzowka[i][y] = slowo[j];
			else
				krzyzowka[i][y] = ' ';
		}

	}

};

int main() {
	char  krzyzowka[2][20];
	char slowo[] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ' };
	char slowo2[] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ' };
	int x, y, poziomo_pionowo, x2, y2, poziomo_pionowo2;
	cout << "x: ";
	cin >> x;
	cout << endl << "y: ";
	cin >> y;
	cout << "poziomo_pionowo (0,1):";
	cin >> poziomo_pionowo;
	cout << "slowo:";
	cin >> slowo;
	cout << "x2: ";
	cin >> x2;
	cout << endl << "y2: ";
	cin >> y2;
	cout << "poziomo_pionowo2 (0,1):";
	cin >> poziomo_pionowo2;
	cout << "slowo2:";
	cin >> slowo2;


	cout << endl;

	zeruj(krzyzowka);
	//Wypisz(tab);
	Wstaw(krzyzowka, slowo, x, y, poziomo_pionowo);
	Wstaw2(krzyzowka, slowo2, x2, y2, poziomo_pionowo2);
	cout << endl;
	Wypisz(krzyzowka);
	

	system("pause");
	return 0;
};
