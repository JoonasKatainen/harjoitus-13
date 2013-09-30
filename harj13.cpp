#include <iostream>
#include <cstring>
using namespace std;// a-kohta
int main()
{
	char etunimi[20], sukunimi[30], kokonimi[53]="", väli[2]= " ";
	
	cout << "Anna etunimi"<<endl;
	cin.get(etunimi, 20);
	cin.sync();
	cout << "Anna sukunimi"<<endl;
	cin.get(sukunimi, 30);
	cin.sync();
	strcat_s(kokonimi, etunimi);
	strcat_s(kokonimi, väli);
	strcat_s(kokonimi, sukunimi);
	cout <<"Nimesi oli "<<kokonimi<<endl;
	return 0;
}
/*#include <iostream>
#include <string>// b-kohta
using namespace std;
int main()
{
	string etunimi, sukunimi, kokonimi;
	cout << "Anna etunimi" << endl;
	getline (cin, etunimi);
	cout << "Anna sukunimi"<<endl;
	getline (cin, sukunimi);
	kokonimi = etunimi +" "+ sukunimi;
	cout << "Nimesi oli " << kokonimi<<endl;
return 0;
}*/