#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout<<"Program konwertujacy liczbe dziesietna na system szesnastkowy!"<<endl;
	cout<<"Podaj liczbe: ";
	unsigned long long int liczba;
	cin>>liczba;
	
	char tab[15];
	int znak;
	int licznik=0;
	
	while(liczba!=0)
	{
		znak=liczba%16;
		
		if(znak>=0 && znak <10)
		{
			tab[licznik]=znak+48;
		}
		if(znak==10)
		{
			tab[licznik]='A';
		}
		if(znak==11)
		{
			tab[licznik]='B';
		}
		if(znak==12)
		{
			tab[licznik]='C';
		}
		if(znak==13)
		{
			tab[licznik]='D';
		}
		if(znak==14)
		{
			tab[licznik]='E';
		}
		if(znak==15)
		{
			tab[licznik]='F';
		}
		
		++licznik;
		liczba=liczba/16;
		
	}
	
	cout<<"Podana liczba w systemie szesnastkowym wyglada tak: ";
	
	for( licznik; licznik>=0 ; --licznik )
	{
		cout<<tab[licznik];
	}
	
	cout<<endl<<endl;
	
	return 0;
}
