#include <conio.h> 
#include <stdlib.h> 
#include <windows.h> 
#include <string> 
#include <iostream> 
#include <vector> 

using namespace std;

vector<vector<string>> rubrica;
void generator(int elementi){
	string a;
	srand(static_cast<unsigned>(time(NULL)));
	for(int i;i<elementi;i++){
		a=rand()%50;
		for(int i;i<6;i++)
	}
}

void seed(int elements) {
	for (int e = 0; e < elements; e++) {
		string phone;
		for ( int i = 0; i < 10; i++) {
			phone += to_string(rand() %10);
}
addContact(firstNames[rand() %10], lastNames[rand() %10], phone);
}
}

void SetColor(long Color){ 
HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE); // oppure system("COLOR E9"); 
SetConsoleTextAttribute(hCon,Color); 
}

void write(string s, int minChar = 30) {
   s.resize(minChar, ' ');
   cout << s;
}

void writeln(string s, int minChar = 30) {
	write(s, minChar);
    cout << endl;
}

int getIndexOf(string Name, string Surname ) {
int l = rubrica.size();
for (int i = 0; i < l; i++) {
	vector<string> r = rubrica[i];
	if (r[0] == Name && r[0] == Surname){return i;} 
	else{ 
        cout<<"ATTENZIONE IL CONTATTO NON E' STATO TROVATO REINSERSCI IL NOME E IL COGNOME"<<endl;
        cin>>Name;
        cin>>Surname;
		getIndexOf(Name,Surname)}
}

vector<string> addContact(string Name, string Surname, string phone ){
	cout<<"INSERSCI NOME, COGNOME E NUMERO PER TERMINARE L'INSERIMENTO PREMI 0";
	while(contact != "0"){
		vector<string> contact ={ Name, Surname, phone };
        rubrica.push_back(contact);
	}
return contact;
}

void printContact(int index){
	vector<string> contact = rubrica[index];
	write(contact[0]);
	write(contact[1]);
	writeln(contact[2]);
}

void printContact(string Name, string Surname){
	printContact(getIndexOf(Name, Surname));
}

void removeContact(int index){
	rubrica.erase(rubrica.begin() + index);
}

void removeContact(string Name, string Surname){
	removeContact(getIndexOf(Name, Surname));
}

void printContacts(int skip = 0, int limit = 10 ){
	int size = rubrica.size();
	if(size>skip+limit){ l=limit; }
	else{ l=size-skip; }
	for (int i = skip; i < l; i++){ printContact(i); }
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
while(command!=0){
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
		Surname.push_back(b);
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
	int l_cognome=Surname.size();
	if(l_cognome>30) {
		for(int i=0; i<29; i++) {
			cout << Surname[i];
		}
	}
	else {
		for(int i=0; i<l_cognome-1; i++) {
			cout << Surname[i];
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
			addcontact(name, Surname, number);
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
	cin>>command;
}
return 0;
}
