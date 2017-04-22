#include "stdafx.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>

using namespace std;

vector<vector <string> > rubrica;
string firstNames[] = { "Giovanni", "Alberto", "Teresa", "Pietro", "Pino", "Luisa", "Sara", "Caterina", "Ugo", "Assunta" };
string lastNames[] = { "Cracco", "Rossi", "Verti", "Marroni", "Cannavacciuolo", "Quadrato", "Messi", "Gattuso", "Caruso", "Buondonno" };

void write(string s, int minChar = 30) {
	s.resize(minChar, ' ');
	cout << s;
}

void writeln(string s, int minChar = 30) {
	write(s, minChar);
	cout << endl;
}

string inputns() {
	cout << "+----------------------------------------------------------------------------------------------+" << endl;
	string name, surname, phone;
	cout << "                                   INSERISCI IL NOME :                                 " << endl;
	cin >> name;
	cout << "                                   INSERISCI IL COGNOME: " << endl;
	cin >> surname;
	return name, surname;
}

string input() {
	cout << "+----------------------------------------------------------------------------------------------+" << endl;
	string name, surname, phone;
	cout << "                                   INSERISCI IL NOME :                                 " << endl;
	cin >> name;
	cout << "                                   INSERISCI IL COGNOME: " << endl;
	cin >> surname;
	cout << "                                  INSERISCI IL NUMERO DI TELEFONO: " << endl;
	cin >> phone;
	return name, surname, phone;
}

int getIndexOf(string firstName, string lastName) {
	int l = rubrica.size();
	int i;
	for (int i = 0; i < l; i++) {
		if (r[0] == firstName && r[1] == lastName) return i;
		else { return -1; };
	}
}

vector<string> addContact(string firstName, string lastName, string phone) {
	vector<string> contact = { firstName, lastName, phone };
	rubrica.push_back(contact);
	return contact;
}

void printContact(int index) {
	vector<string> contact = rubrica[index];
	write(contact[0]);
	write(contact[1]);
	writeln(contact[2]);
}

void printContact(string firstName, string lastName) {
	printContact(getIndexOf(firstName, lastName));
}

void removeContact(int index) {
	rubrica.erase(rubrica.begin() + index);
}

void removeContact(string firstName, string lastName) {
	removeContact(getIndexOf(firstName, lastName));
}

void printContacts(int skip = 0, int limit = 10) {
	int size = rubrica.size();
	int l = size > skip + limit ? limit : size - skip;
	for (int i = skip; i < l; i++) {
		printContact(i);
	}
}

void seed(int elements) {
	for (int e = 0; e < elements; e++) {
		string phone;
		for (int i = 0; i < 10; i++) {
			phone += to_string(rand() % 10);
		}
		addContact(firstNames[rand() % 10], lastNames[rand() % 10], phone);
	}
}

int main() {
	int command, i, s, l;
	string name, surname, phone;
	cout << "+----------------------------------------------+" << endl;
	cout << "|           	      RUBRICA                   |" << endl;
	cout << "|     1 per aggiungere un contatto             |" << endl;
	cout << "|     2 per cercare un contatto e stamparlo    |" << endl;
	cout << "|     3 per rimuovere un contatto              |" << endl;
	cout << "|     4 per stampare tutti i contatti          |" << endl;
	cout << "|     0 per uscire o terminare l'input         |" << endl;
	cout << "+----------------------------------------------+" << endl;
	cin >> command;
	while (true) {
		switch (command) {
		case 1:
			do {
				input();
				addContact(name, surname, phone);
				cout << "+----------------------------------------------------------------------------------------------+" << endl;
				cout << "                                 1 PER AGGIUNGERE ALTRI CONTATTI  		                  " << endl;
				cin >> command;
			} while (command == 1);
			break;
		case 2:
			cout << "+----------------------------------------------------------------------------------------------+" << endl;
			inputns();
			getIndexOf(name, surname);
			printContact(i);
			break;
		case 3:
			inputns();
			removeContact(name, surname);
			break;
		case 4:
			cout << "QUANTI CONTATTI DALL'INIZIO VUOI SALTARE:" << endl;
			cin >> s;
			cout << "QUANTI CONTATTI PER PAGINA VUOI VISUALIZZARE:" << endl;
			cin >> l;
			printContacts(s,l);
			break;
		default:
			cout << "                                           ARRVEDERCI " << endl;
			cout << "+----------------------------------------------------------------------------------------------+" << endl;
		}
		cin >> command;
	}
	return 0;
}

