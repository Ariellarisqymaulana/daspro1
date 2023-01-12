// Judul ; deteksi penyakit
//ariella risqy

	#include <iostream>
	#include <string.h>
	using namespace std;

//kamus
	 char ulangi[2];
	 int counter;
	 char gejala[10],penyakit;


//diskriipsi
int main()
{
    strcpy(ulangi,"y");
    counter = 0;

    do{
    cout << "masukan gejala ( nyeri, pusing, ruam )" << endl;
    cin >> gejala;
        if (strcmp(gejala,"nyeri")==0)
        {
            cout << "pilih jenis penyakit" << endl;
            cout << "1 : maag            " << endl;
            cout << "2 : masuk angin     " << endl;
            cout << "3 : demam berdarah  " << endl;
            cout << "4 : tipes           " << endl;
            cout << "5 : demam           " << endl;
            cin >> penyakit;
            switch (penyakit)
            {
                case '1' :
                {
                    cout << "maag" << endl;
                }
                break;
                case '2' :
                {
                    cout << "masuk angin" << endl;
                }
                break;
                case '3' :
                {
                    cout << "demam berdarah" << endl;
                }
                break;
                case '4' :
                {
                    cout << "tipes" << endl;
                }
                break;
                case '5' :
                {
                    cout << "demam" << endl;
                }
                break;
                default :
                    {
                        cout << "eror / salah memasukan pilihan" << endl;
                    }
            }
        }
    else if (strcmp(gejala,"ruam")==0)
        {
            cout << "pilih jenis penyakit" << endl;
            cout << "A : cacar air       " << endl;
            cout << "B : cacar monyet	 " << endl;
            cout << "C : herpes			 " << endl;
            cout << "D : covid			 " << endl;
            cout << "E : cacar ular		 " << endl;
            cin >> penyakit;
            switch (penyakit)
            {
                case 'A' :
                {
                    cout << "cacar air" << endl;
                }
                break;
                case 'B' :
                {
                    cout << "cacar monyet" << endl;
                }
                break;
                case 'C' :
                {
                    cout << "herpes" << endl;
                }
                break;
                case 'D' :
                {
                    cout << "covid" << endl;
                }
                break;
                case 'E' :
                {
                    cout << "cacar ular" << endl;
                }
                break;
                default :
                    {
                        cout << "eror / salah memasukan pilihan" << endl;
                    }
            }
        }
    else if (strcmp(gejala,"pusing")==0)
        {
            cout << "pilih jenis penyakit" << endl;
            cout << "A : migrain		 " << endl;
            cout << "B : miningitis		 " << endl;
            cout << "C : hipertensi		 " << endl;
            cout << "D : dehidrasi		 " << endl;
            cout << "E : stroke			 " << endl;
            cin >> penyakit;
            switch (penyakit)
            {
                case 'A' :
                {
                    cout << "migrain" << endl;
                }
                break;
                case 'B' :
                {
                    cout << "miningitis" << endl;
                }
                break;
                case 'C' :
                {
                    cout << "hipetensi" << endl;
                }
                break;
                case 'D' :
                {
                    cout << "dehidrasi" << endl;
                }
                break;
                case 'E' :
                {
                    cout << "stroke" << endl;
                }
                break;
                default :
                    {
                        cout << "eror / salah memasukan pilihan" << endl;
                    }
            }
        }
     else {
            cout << "salah";
    }
    cout << "Apakah ada pasian selanjutnya y/t" << endl;
    cin >> ulangi;

    counter = counter + 1;
    }
    while(strcmp(ulangi,"y")==0);
    cout << "----------" << endl;
    cout << "Perulangan selesai...!\n" << endl;
    cout << "perulangan dilakukan sebanyak " << counter << endl;
    return 0;
}
