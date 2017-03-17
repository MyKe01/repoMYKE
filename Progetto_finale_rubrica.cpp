#include <conio.h> 
#include <stdlib.h> 
#include <windows.h> 
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

void SetColor(long Color){ 
HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE); // oppure system("COLOR E9"); 
SetConsoleTextAttribute(hCon,Color); 
}

int  getindexoff(string nome, string cognome){
SetColor( 0);
for(int i;i<contact;i++){
	if(nome==name[i] && cognome==surname[i]){
		index=i;
	}
}
cout<<"+----------------------------------------------------------------------------------------------+"<<endl;

	return index;
}

int  addcontact(string nome , string cognome, string numero) {
SetColor(0);
cout<<"                                  0 PER TORNARE AL MENU PRINCIPALE                        "<<endl;
cout<<"+----------------------------------------------------------------------------------------------+"<<endl;
cin>>command;
contact=sizeof(nome);
if(command==0){
	int main();
	}else{ 
	addcontact(string name, string surname, string number, int contatti);
	}
}

void printcontacts(int contatti){
SetColor(0);
int skip,limit;
cout<<"+----------------------------------------------------------------------------------------------+"<<endl;
cout<<"                 QUANTI CONTATTI DAL'INIZIO VUOI SALTARE :"                 <<endl;
cin>>skip;
cout<<"                    QUANTI CONTATTI VUOI VISUALIZZARE:"                     <<endl;
cin>>limit;
if(limit<=contatti){
     for(int i=skip;i==limit;i++){
         cout<<"  "<<i<<"- "<<name [i]<<"; "<<surname [i]<<"; "<<number [i] <<endl;
     }
     cout<<"|                   0 PER TORNARE AL MENU PRINCIPALE                      |"<<endl;
     cin>>command;
     cout<<"+----------------------------------------------------------------------------------------------+"<<endl;
     if(command==0){
	     int main();
	}
}
}

void printcontacts(index){
SetColor(A,0);
cout<<"+----------------------------------------------------------------------------------------------+"<<endl;
cout<<"  "<<index<<"- "<<name [index]<<"; "<<surname [index]<<"; "<<number [index] <<endl;
cout<<"                   0 PER TORNARE AL MENU PRINCIPALE                        "<<endl;
cout<<"+----------------------------------------------------------------------------------------------+"<<endl;
cin>>command;
if(command==0){
	int main();
	}
	return 0;
}

void deletecontact(string name,string surname,string number){
SetColor(0);
cout<<"+----------------------------------------------------------------------------------------------+"<<endl;
cout<<"                    QUALE CONTATTO VUOI ELIMINARE?                         "<<endl;
cout<<"             SCRIVI IL NOME E IL COGNOME OPPURE IL NUMERO                  "<<endl;
cout<<"            PER IL INSERIRE IL NUMERO PREMI 1 ALTRIMENTI 0                 "<<endl;
if(num==0){
	cin>>nome>>cognome;
}else{
	cin>>numero;	
}
vec.erase(remove(vec.begin(),vec.end(),name[index]),vec.end());
vec.erase(remove(vec.begin(),vec.end(),surname[index]),vec.end());
vec.erase(remove(vec.begin(),vec.end(),number[index]),vec.end());

cout<<"                   0 PER TORNARE AL MENU PRINCIPALE                        "<<endl;
cout<<"+----------------------------------------------------------------------------------------------+"<<endl;
cin>>command;
if(command==0){
	int main();
	}
}


int main(){
SetColor(A,0);
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
	char a,b,c;
    cout<<"+----------------------------------------------------------------------------------------------+"<<endl;
	cout<<" INSERIRE OGNI CARARTTERE SEGUITO DA UNO SPAZIO E TERMINARE L'INSERIMENTO CON IL CARATTERE '.'  "<< endl;
	cout<<"                                   INSERISCI IL NOME :                                 "<<endl;
	do {
		cin >> a;
		name.push_back(a);
	}
	while(a!='.');
		cout << "                                   INSERISCI IL COGNOME: "<<endl;
	do {
		cin >> b;
		surname.push_back(b);
	}
	while(b!='.');
	cout << "                                  INSERISCI IL NUMERO DI TELEFONO: "<<endl;
	do {
		cin >> c;
		number.push_back(c);
	}
	while(c!='.');
	cout << "NOME: "<<endl;
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
	cout << " cognome: "<<endl;
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
     cout<<"+----------------------------------------------------------------------------------------------+"<<endl;
     cout<<"                                 1 PER AGGIUNGERE ALTRI CONTATTI  		                  "<<endl;
	addcontact(name, surname, number);
	contact=name.size();
	break;
	case 2 :
	cout<<"+----------------------------------------------------------------------------------------------+"<<endl;
	cout<<"                      INSERISCI IL NOME E IL COGNOME DEL CONTATTO DA CERCARE "         <<endl;
    cin>>nome>>cognome;
	getindex(nome, cognome);
	printcontacts(index);
	break;
	case 3 :
	cout<<"+----------------------------------------------------------------------------------------------+"<<endl;
	cout<<"                    QUALE CONTATTO VUOI ELIMINARE?                         "<<endl;
    cout<<"             SCRIVI IL NOME E IL COGNOME OPPURE IL NUMERO                  "<<endl;
    cout<<"            PER IL INSERIRE IL NUMERO PREMI 1 ALTRIMENTI 0                 "<<endl;
    if(num==0){
	cin>>nome>>cognome;
    }else{
	cin>>numero;	
    }
	delectecontact(nome, cognome, numero);
	break;
	case 4 :
	contact=name.size();
	printcontacts(contact);
	break;
	default :
	cout << "                                      ARRVEDERCI " << endl;
	cout<<"+----------------------------------------------------------------------------------------------+"<<endl;
}
return 0;
}

