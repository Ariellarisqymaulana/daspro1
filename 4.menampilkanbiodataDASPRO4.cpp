//judul :menampilkan biodata
//author : ariella 18-9-22


#include <iostream>
 
using namespace std; 
 
int main()

{
	
  	 cout << "##  Data Diri ##" << endl;
 	 cout << "================" << endl;
 	 cout << endl;
 
 //kamus 
 string nim, nama, tempat_tgl_lahir, jenis_kelamin, alamat, rt_rw, kecamatan, agama, status_perkawinan, pekerjaan, kewarganegaraan, berlaku_hingga;
 
 //deskripsi
    cout << "NIM:";
    getline(cin,nim);
 
  	cout << "Nama: ";
  	getline(cin,nama);
  
  	cout << "Tempat/Tgl Lahir:  ";
  	getline(cin,tempat_tgl_lahir);
 
  	cout << "Jenis Kelamin:";
  	getline(cin,jenis_kelamin);
 
  	cout << "Alamat: ";
  	getline(cin,alamat);
 
  	cout << "RT/RW:";
  	getline(cin,rt_rw);
 
  	cout << "Kecamatan: ";
  	getline(cin,kecamatan);
  			
  	cout << "Agama:";
  	getline(cin,agama);
  
  	cout << "Status Perkawinan: ";
  	getline(cin,status_perkawinan);
 
  	cout << "Pekerjaan:";
  	getline(cin,pekerjaan);
 
  	cout << "Kewarganegaraan:";
  	getline(cin,kewarganegaraan); 
	   			
  	cout << "Berlaku hingga:";
	getline(cin, berlaku_hingga);	
	
	cout <<endl;
	
		cout << "========================================================"  <<endl;
		cout << "                KARTU TANDA MAHASISWA                   "  <<endl;
		cout << "             UNIVERSITAS DIAN NUSWANTORO                "  <<endl;
		cout << "========================================================"  <<endl;
		cout << "                                                        "  <<endl;
		cout << "    _____________                                       "  <<endl;
		cout << "   |             |       1."<<nama                         <<endl;
		cout << "   |             |       2."<<tempat_tgl_lahir             <<endl;
		cout << "   |             |       3."<<jenis_kelamin                <<endl;
		cout << "   |             |       4."<<alamat                       <<endl;
		cout << "   |             |       5."<<kecamatan                    <<endl;
		cout << "   |             |       6."<<agama                        <<endl;
    	cout << "   |             |       7."<<status_perkawinan            <<endl;
		cout << "   |             |       8."<<pekerjaan                    <<endl;
		cout << "   |_____________|       9."<<kewarganegaraan              <<endl;
		cout << "         NIM            10."<<berlaku_hingga               <<endl;
		cout << "    "<<nim                                                 <<endl;
		cout << "                                                        "  <<endl;
		cout << "========================================================"  <<endl;
    	cout << "        Jl. Imam Bonjol No.27 Semarang Tengah           "  <<endl;
		cout << "========================================================";	



}


