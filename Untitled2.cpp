#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
<<<<<<< HEAD
	vector <string> nome;
	vector <string> cognome;
	vector <char> numero;
	string a,b;
	char c;
=======
	vector <char> nome;
	vector <char> cognome;
	vector <char> numero;
	char a, b, c;
>>>>>>> 20b68c056cb0e103646afcd416f4e36d60dc246c
	cout << "RICORDARE DI INSERIRE GLI SPAZI TRA I CARATTERI" << endl;
	cout << "inserire il nome : ";
	do {
		cin >> a;
		nome.push_back(a);
	}
	while(a!='.');
		cout << "inserire il cognome: ";
	do {
		cin >> b;
		cognome.push_back(b);
	}
	while(b!='.');
	cout << "inserire il numero di telefono: ";
	do {
		cin >> c;
		numero.push_back(c);
	}
	while(c!='.');
	cout << "nome: ";
	int l_nome=nome.size();
	if(l_nome>30) {
		for(int i=0; i<29; i++) {
			cout << nome[i];
		}
	}
	else {
		for(int i=0; i<l_nome-1; i++) {
			cout << nome[i];
		}
	}
	cout << "; cognome: ";
	int l_cognome=cognome.size();
	if(l_cognome>30) {
		for(int i=0; i<29; i++) {
			cout << cognome[i];
		}
	}
	else {
		for(int i=0; i<l_cognome-1; i++) {
			cout << cognome[i];
		}
	}
	cout << "; numero di telefono: ";
	int l_numero=numero.size();
	if(l_numero>30){
		for(int i=0; i<29; i++){
			cout << numero[i];
		}
	}
	else {
		for(int i=0; i<l_numero-1; i++) {
			cout << numero[i];
		}
	}
	return 0;
}
