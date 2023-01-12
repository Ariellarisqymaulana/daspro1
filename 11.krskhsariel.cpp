//judul : krs dan khs mahasiswa
// ariella risqy maulana
	
	#include <iostream>
	using namespace std;
	
//kamus :
	string nama, nim;
	string krs1, krs2, krs3, krs4, krs5, krs6, krs7;
	int nilai1, nilai2, nilai3, nilai4, nilai5, nilai6, nilai7;
	int sks1, sks2, sks3, sks4, sks5, sks6, sks7;
	int totsks, totnilai, ratarata;
	int counter, counter1;
	char ulangi1='y';
	char ulangi2='t';
	

//deskripsi :
	int main()
	{
		counter=0;
		while(ulangi1=='y')
		{
				cout << "NAMA : "; cin.ignore(); getline(cin,nama);
				cout << "NIM  : "; getline(cin,nim);
				cout << endl;
				//1
				cout << "KRS 1 : "; getline(cin,krs1);
				cout << "SKS 1 : ";
				cin  >> sks1;
				cout << "NILAI : ";
				cin  >> nilai1;
				if(nilai1>=85) {
					cout << "A";
				}
				else if(nilai1>=80){
					cout << "AB";
				}
				else if(nilai1>=70){
					cout << "B";
				}
				else if(nilai1>=65){
					cout << "BC";
				}
				else if(nilai1>=60){
					cout << "C";
				}
				else if(nilai1>=50){
					cout << "D";
				}
				else{
					cout << "E";
				}
				cout << endl; cin.ignore(); 
				//2
				cout << "KRS 2 : "; getline(cin,krs2);
				cout << "SKS 2 : ";
				cin  >> sks2;
				cout << "NILAI : ";
				cin  >> nilai2;
				if(nilai2>=85) {
					cout << "A";
				}
				else if(nilai2>=80){
					cout << "AB";
				}
				else if(nilai2>=70){
					cout << "B";
				}
				else if(nilai2>=65){
					cout << "BC";
				}
				else if(nilai2>=60){
					cout << "C";
				}
				else if(nilai2>=50){
					cout << "D";
				}
				else{
					cout << "E";
				}
				cout << endl; cin.ignore();
				//3
				cout << "KRS 3 : "; getline(cin,krs3);
				cout << "SKS 3 : ";
				cin  >> sks3;
				cout << "NILAI : ";
				cin  >> nilai3;
				if(nilai3>=85) {
					cout << "A";
				}
				else if(nilai3>=80){
					cout << "AB";
				}
				else if(nilai3>=70){
					cout << "B";
				}
				else if(nilai3>=65){
					cout << "BC";
				}
				else if(nilai3>=60){
					cout << "C";
				}
				else if(nilai3>=50){
					cout << "D";
				}
				else{
					cout << "E";
				}
				cout << endl; cin.ignore();
				//4
				cout << "KRS 4 : "; getline(cin,krs4);
				cout << "SKS 4 : ";
				cin  >> sks4;
				cout << "NILAI : ";
				cin  >> nilai4;
				if(nilai4>=85) {
					cout << "A";
				}
				else if(nilai4>=80){
					cout << "AB";
				}
				else if(nilai4>=70){
					cout << "B";
				}
				else if(nilai4>=65){
					cout << "BC";
				}
				else if(nilai4>=60){
					cout << "C";
				}
				else if(nilai4>=50){
					cout << "D";
				}
				else{
					cout << "E";
				}
				cout << endl; cin.ignore();
				//5
				cout << "KRS 5 : "; getline(cin,krs5);
				cout << "SKS 5 : ";
				cin  >> sks5;
				cout << "NILAI : ";
				cin  >> nilai5;
				if(nilai5>=85) {
					cout << "A";
				}
				else if(nilai5>=80){
					cout << "AB";
				}
				else if(nilai5>=70){
					cout << "B";
				}
				else if(nilai5>=65){
					cout << "BC";
				}
				else if(nilai5>=60){
					cout << "C";
				}
				else if(nilai5>=50){
					cout << "D";
				}
				else{
					cout << "E";
				}
				cout << endl; cin.ignore();
				//6
				cout << "KRS 6 : "; getline(cin,krs6);
				cout << "SKS 6 : ";
				cin  >> sks6;
				cout << "NILAI : ";
				cin  >> nilai6;
				if(nilai6>=85) {
					cout << "A";
				}
				else if(nilai6>=80){
					cout << "AB";
				}
				else if(nilai6>=70){
					cout << "B";
				}
				else if(nilai6>=65){
					cout << "BC";
				}
				else if(nilai6>=60){
					cout << "C";
				}
				else if(nilai6>=50){
					cout << "D";
				}
				else{
					cout << "E";
				}
				cout << endl; cin.ignore();
				//7
				cout << "KRS 7 : "; getline(cin,krs7);
				cout << "SKS 7 : ";
				cin  >> sks7;
				cout << "NILAI : ";
				cin  >> nilai7;
				if(nilai7>=85) {
					cout << "A";
				}
				else if(nilai7>=80){
					cout << "AB";
				}
				else if(nilai7>=70){
					cout << "B";
				}
				else if(nilai7>=65){
					cout << "BC";
				}
				else if(nilai7>=60){
					cout << "C";
				}
				else if(nilai7>=50){
					cout << "D";
				}
				else{
					cout << "E";
				}
				cout << endl; cin.ignore();
				
				cout << "=========================================================================" << endl;
				cout << "                                   KARTU HASIL STUDI                     " << endl;
				cout << "                           PROGRAM STUDI TEKNIK INFORMATIKA              " << endl;
				cout <<	"                             UNIVERSITAS DIAN NUSWANTORO                 " << endl;
				cout << "=========================================================================" << endl;
				cout << endl;
				cout << "NAMA : "<<nama																<< endl;
				cout << "NIM  : "<<nim															 	<< endl;
				cout << endl;
				cout << " MATAKULIAH                       SKS                        NILAI           NILAI HURUF " << endl;
				cout <<  krs1<<"						"<<sks1<<" 		           "<<nilai1<<"      "     << endl;
				cout <<  krs2<<"						"<<sks2<<"		   		   "<<nilai2<<"      "     << endl;	
				cout <<  krs3<<"						"<<sks3<<"				   "<<nilai3<<"		 "      << endl;
				cout <<  krs4<<"						"<<sks4<<"				   "<<nilai4<<"      "    << endl;
				cout <<  krs5<<"						"<<sks5<<"				   "<<nilai5<<"      "	    << endl;
				cout <<  krs6<<"						"<<sks6<<"			       "<<nilai6<<"      "    << endl;
				cout <<  krs7<<"						"<<sks7<<"	        	   "<<nilai7<<"      "	    << endl;
				cout << "===========================================================================================" << endl;
								
				totsks   = sks1+sks2+sks3+sks4+sks5+sks6+sks7;
				totnilai = nilai1+nilai2+nilai3+nilai4+nilai5+nilai6+nilai7;
				ratarata = totnilai / 7 ;
				cout << "TOTAL SKS   : " << totsks   << endl;
				cout << "TOTAL NILAI : " << totnilai << endl;
				cout << "RATA - RATA: " << ratarata << endl;
				cout << "=========================================================================="<< endl;
				cout << "APAKAH MASIH ADA MAHASISWA YANG LAIN ?                                                      "  << endl;
				cout << "[YA / TIDAK]";
				cin  >> ulangi1;
				counter++      ;
		}
	}

