//judul : deteksi kode prodi
//ariella risqy maulana

//kamus :
	#include <iostream>
	using namespace std;
	char kode;
//deskripsi:
int main()
{
	cout << "program studi" << endl;
	cout << "jangan lupa kasih titik di akhir 3 digit pertama " << endl;
	cout << "A11. = FIK S1 Teknik Informatika " << endl;
	cout << "a21. = FIK D3 Manajemen Informatika" << endl;
	cout << "B23. = FEB S1 Manajemen " << endl;
	cout << "b21. = FEB D3 Akutansi " << endl;
	cout << "Masukan NIM = " ; cin >> kode; 

	switch(kode)
	{
		case 'A' :
			cout << "FIK " ;
		{
			case 1 :
				cout << "S1 " ;
			{
			case '1' :
				{
				cout << "Teknik informatika" ;
				}
			}
		break;
		}
		case 'B' :
			cout << "FEB " ;
		{
		case '2' :
			cout << "S1 " ;
		{
		case '3' :
			{
			cout << "Manajemen " ;
			}
		}
		break;
		}
	}
	switch(kode)
	{
		case 'a' :
			cout << "FIK " ;
		{
		case 2 :
			cout << "D3 " ;
		{
		case 1 :
			{
				cout << "Manajemen informatika " ;
			}
		}
		break;
		}
		case 'b' :
			cout << "FEB " ;
		{
		case '2' :
			cout << "D3 " ;
		{
		case '1.' :
			{
				cout << "Akuntansi " ;
			}
		}
		break;
		}
	}
}
