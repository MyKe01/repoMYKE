#include <iostream>
#include <math.h>
using namespace std;
int main()
{	
	double spesa, sconto, scontrino, perc_sconto;
	int spesaR;
	cout<<"Inserisci il totale della spesa non scontato"<<endl;
	cin>>spesa;
	spesaR=trunc(spesa);
	switch(spesaR)
		{
		case 0 ... 49:
		perc_sconto=5;
		break;
		case 50 ... 64:
		perc_sconto=6;
		break;
		case 65 ... 79:
		perc_sconto=7;
		break;
		case 80 ... 99:
		perc_sconto=8;
		break;
		default: perc_sconto=10;
	}
	cout<<spesa<<endl;
	sconto = spesa*perc_sconto/100;
	scontrino=spesa*(1-perc_sconto/100);
	cout<<spesaR<<endl;
	cout<<"L'importo da pagare è euro "<<spesa<<endl;
	cout<<"Hai risparmiato euro "<<sconto<<endl;
	cout<<"Paghi euro "<<scontrino;
	return 0;
}

