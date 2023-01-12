//judul : mencoba inputan data string
//author : ariella risqy maulana 22-9-22
#include <iostream>
using namespace std;
//kamus :
char nama[20];
char kelamin[20];
char alamat[20];
char tb[20];
char univ[20]; //tb: tinggi badan
//diskripsi:
int main ()
{
	cout << "masukan namamu:" ; cin >> nama ;
	cout << "masukan jenis kelaminmu [L/P]:"; cin >> kelamin;
	cout << "masukan alamat mu:" ; cin >> alamat ;
	cout << "masukan tinggi badanmu:" ; cin >> tb ; 
	cout << "masukan nama univ:" ; cin >> univ ;
	cout << "owh kamu si," << nama << ",yang jenis kelaminnya," << kelamin << ",yang 
	alamatnya," << alamat
	 << ",kamu juga yg tinggi badannya," << tb << "cm," << "yang kuliah di," << univ<< 
	",yang gk bisa ngetik 10 jari" << endl;
	return 0;
}

