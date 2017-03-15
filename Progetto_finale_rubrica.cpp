#include <conio.h> 
#include <stdlib.h> 
#include <windows.h> 
#include <algorithm>
#include <string> 
#include <iostream> 
#include <vector> 
using namespace std;

string nome, cognome, numero;
int contact,command,index;
vector <string> name;
vector <string> surname;
vector <string> number;
vector <string> rubrica;
/*
1 = Blue 2 = Green 3 = Light Blue 4 = Red 5 = Purple 
6 = Orange/Brown 7 = White 8 = Grey 9 = Blue 
10 = Green 11 = Light Blue 12 = Pink/Red 13 = Purple
14 = Yellow 15 = While 
*/

void SetColor(long Color) //short 
{ 
HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE); // oppure system("COLOR E9"); 
SetConsoleTextAttribute(hCon,Color); 
}

/*int  getindexoff(){
SetColor( 0);

cout<<"+-------------------------------------------------------------------------+"<<endl;
cout<<"                   0 PER TORNARE AL MENU PRINCIPALE                        "<<endl;
cout<<"+-------------------------------------------------------------------------+"<<endl;
cin>>command;
if(command==0){
	int main();
	}
}*/

int  addcontact(int contatti) {
SetColor(0);
	char a,b,c;
    cout<<"+----------------------------------------------------------------------------------+"<<endl;
	cout << "RICORDARE DI INSERIRE GLI SPAZI TRA I CARATTERI E DI TERMINARE CON IL CARATTERE'.''" << endl;
	cout << "inserire il nome : ";
	do {
		cin >> a;
		name.push_back(a);
	}
	while(a!='.');
		cout << "inserire il cognome: ";
	do {
		cin >> b;
		surname.push_back(b);
	}
	while(b!='.');
	cout << "inserire il numero di telefono: ";
	do {
		cin >> c;
		number.push_back(c);
	}
	while(c!='.');
	cout << "nome: ";
	int l_nome=name.size();
	if(l_nome>30) {
		for(int i=0; i<29; i++) {
			cout << name[i];
		}
	}
	else {
		for(int i=0; i<l_nome-1; i++) {
			cout << name[i];
		}
	}
	cout << "; cognome: ";
	int l_cognome=surname.size();
	if(l_cognome>30) {
		for(int i=0; i<29; i++) {
			cout << surname[i];
		}
	}
	else {
		for(int i=0; i<l_cognome-1; i++) {
			cout << surname[i];
		}
	}
	cout << "; numero di telefono: ";
	int l_numero=number.size();
	if(l_numero>30) {
		for(int i=0; i<29; i++) {
			cout << number[i];
		}
	}
	else {
		for(int i=0; i<l_numero-1; i++) {
			cout << number[i];
		}
	}
}
cout<<"                   1 PER AGGIUNGERE ALTRI CONTATTI  		                  "<<endl;
cout<<"                   0 PER TORNARE AL MENU PRINCIPALE                        "<<endl;
cout<<"+-------------------------------------------------------------------------+"<<endl;
cin>>command;
contatti=sizeof(nome);
if(command==0){
	int main();
	}else{ 
	addcontact(string name, string surname, string number, int contatti);//string name, string surname, string number, string nome, string cognome, string numero
	}
}

void showcontact(string name , string surname){
SetColor(0);
cout<<"+-------------------------------------------------------------------------+"<<endl;
cout<<"|                   0 PER TORNARE AL MENU PRINCIPALE                      |"<<endl;
cout<<"+-------------------------------------------------------------------------+"<<endl;
cin>>command;
if(command==0){
	int main();
	}
}

void showcontact(){ /*int index,string surname, string name, string number*/
SetColor(0);
cout<<"+-------------------------------------------------------------------------+"<<endl;
cout<<"  "<<index<<"- "<<name [index]<<"; "<<surname [index]<<"; "<<number [index] <<endl;
cout<<"                   0 PER TORNARE AL MENU PRINCIPALE                        "<<endl;
cout<<"+-------------------------------------------------------------------------+"<<endl;
cin>>command;
if(command==0){
	int main();
	}
}

void deletecontact(string name, string surname, string number){
SetColor(0);
int num,numero;
cout<<"+-------------------------------------------------------------------------+"<<endl;
cout<<"                    QUALE CONTATTO VUOI ELIMINARE?                         "<<endl;
cout<<"             SCRIVI IL NOME E IL COGNOME OPPURE IL NUMERO                  "<<endl;
cout<<"            PER IL INSERIRE IL NUMERO PREMI 1 ALTRIMENTI 0                 "<<endl;
if(num==0){
	cin>>nome>>cognome;
}else{
	cin>>numero;
	find(number.begin(), number.end(), numero)
	delete()
}

cout<<"                   0 PER TORNARE AL MENU PRINCIPALE                        "<<endl;
cout<<"+-------------------------------------------------------------------------+"<<endl;
cin>>command;
if(command==0){
	int main();
	}
}

void showall(int contatti){
SetColor(0);
cout<<"+-------------------------------------------------------------------------+"<<endl;
for(int i; i<contact;i++){
	cout<<"  "<<index<<"- "<<name [index]<<"; "<<surname [index]<<"; "<<number [index] <<endl;
	}
cout<<"                       0 FOR RETURN TO MAIN MENU                           "<<endl;
cout<<"+-------------------------------------------------------------------------+"<<endl;
cin>>command;
if(command==0){
	int main();
	}
}

int main(){
SetColor(0);
cout<<"+----------------------------------------------+"<<endl;
cout<<"|           	      RUBRICA                     |"<<endl;
cout<<"|     1 per aggiungere un contatto             |"<<endl;
cout<<"|     2 per cercare un contatto e stamparlo    |"<<endl;
cout<<"|     3 per rimuovere un contatto              |"<<endl;
cout<<"|     4 per stampare tutti i contatti          |"<<endl;
cout<<"|     0 per uscire o terminare l'input         |"<<endl;
cout<<"+----------------------------------------------+"<<endl;
cin>>command;
switch(command) {
	case 1 :
	addcontact(name, surname, number);
	break;
	case 2 :
	getindex(name, surname, number);
	showcontact(index);
	showcontact(name, surname);
	break;
	case 3 :
	delectecontact(name, surname, number);
	break;
	case 4 :
	showall(contact);
	break;
	dfault :
	cout << "Arrivederci " << endl;
}
return 0;
}

