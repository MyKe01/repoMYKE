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

void printcontacts(int index){
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




