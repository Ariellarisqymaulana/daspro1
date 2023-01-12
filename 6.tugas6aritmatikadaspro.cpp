//judul: perhitungan aritmatika
/*author: ariella risqy mauulana
		  25-sept-2022*/

	#include <iostream>
	using namespace std;
	
//kamus:
	char aritmatika;
	int variabelX;
	int variabelY;
	int hasil;
	
//deskripsi:
	int main()
	{
		cout << "kalkulator aritmatika"        << endl;
		cout << "====================="        << endl;
    	cout << "pilihan perintah  *,/,+,-:"          ;
		cin  >>  aritmatika ;	
        cout << "======================"       << endl;
		cout << "masukan variabel x:  " ;
		cin  >>  variabelX ;
		cout << "masukan variabel y:  " ;
		cin  >>  variabelY ;
		cout << "======================"       << endl;
		cout << variabelX << aritmatika << variabelY ;
		
		
		if (aritmatika == '*')
		{
			hasil= variabelX * variabelY;
		}
		
		else if (aritmatika == '/')
		{
			hasil= variabelX / variabelY;
		}
		
		else if (aritmatika == '+')
		{
			hasil= variabelX + variabelY;
		}
		
		else if (aritmatika == '-')
		{
			hasil= variabelX - variabelY;
		}
		
		else
		{
			cout << "salah";
		}
		
		cout << " = " << hasil;
		
		if (hasil %2==0)
		{
			cout << " genap " ;
		}
		else 
		{
			cout << " ganjil " ;
		}
		
	}
