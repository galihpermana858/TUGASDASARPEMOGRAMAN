#include <iostream>

using namespace std;
int main()
{
    double nilai_ujian;
    char indeks;

    cout<< "konversi nilai \n\n";
    cout << "masukan nilai ujian :";
    cin>>nilai_ujian;
    cout<<endl;

        if(nilai_ujian >=85){indeks='A';}
    else
        if(nilai_ujian >=75){indeks='B';}
    else
        if(nilai_ujian >=55){indeks='C';}
    else
        if(nilai_ujian >=40){indeks='D';}
    else{indeks='E';}

    cout << "indeks siswa ="<<indeks<<endl;


return 0;
}
