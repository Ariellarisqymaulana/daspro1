//judul;urutan terbesar ke terkecil
//author: ariella risqy maulana

//kamus:
	#include <iostream>
	#include <conio.h>
	using namespace std;
	
//deskripsi:
	int main()
	{
		int a, b, c, d, e, x, tanda;
		
		cout << "mengurutkan kecil ke besar="  << endl;
		cout << "masukan A ="; cin >> a;
		cout << "masukan B ="; cin >> b;
		cout << "masukan C ="; cin >> c;
		cout << "masukan D ="; cin >> d;
		cout << "masukan E ="; cin >> e;
		
		//1 kecil ke besar		
	    if(b>a)
		{
			x=b;
			b=a;
			a=x;	
		}
		
		if (c>a)
		{
			x=c;
			c=a;
			a=x;
		}
		
		if (d>a)
		{
			x=d;
			d=a;
			a=x;
		}
		
		if (e>a)
		{
			x=e;
			e=a;
			a=x;
		}		
		//2		
		if (a>b)
		{
			x=a;
			a=b;
			b=x;
		}

		
		if (c>b)
		{
			x=c;
			c=b;
			b=x;
		}
		
		if (d>b)
		{
			x=d;
			d=b;
			b=x;
		}
		
		if (e>b)
		{	
			x=e;
			e=b;
			b=x;
		}
		//3		
		if (a>c)
		{
			x=a;
			a=c;
			c=x;
		}
		
		if (b>c)
		{
			x=b;
			b=c;
			c=x;
		}
		
		if (d>c)
		{
			x=d;
			d=c;
			c=x;
		}
		
		if (e>c)
		{
			x=e;
			e=c;
			c=x;
		}
		//4
		if (a>d)
		{
			x=a;
			a=d;
			d=x;	
		}
		
		if (b>d)
		{
			x=b;
			b=d;
			d=x;	
		}	
		
		if (c>d)
		{
			x=c;
			c=d;
			d=x;	
		}
		
		if (e>d)
		{
			x=e;
			e=d;
			d=x;	
		}
		//5		
		if (a>e)
		{
			x=a;
			a=e;
			e=x;	
		}
		
		if (b>e)
		{
			x=b;
			b=e;
			e=x;	
		}
		
		if (c>e)
		{
			x=c;
			c=e;
			e=x;	
		}
		
		if (d>e)
		{
			x=d;
			d=e;
			e=x;	
		}

		cout << "Mengurutkan bilangan dari yang terkecil ke terbesar : "<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e << endl;

			
		getch();
		
		return 0;
	}
