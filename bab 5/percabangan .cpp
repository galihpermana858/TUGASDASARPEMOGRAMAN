#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    cout << "Kelulusan Siswa \n \n";

    double Nilai_ujian;

    cout << "Masukan Nilai Ujian :";
    cin >> Nilai_ujian;
    cout << endl;

    char Hasil_Ujian[12] = "Tidak LULUS";
    if(Nilai_ujian >=60)
        strcpy (Hasil_Ujian,"LULUS");

    cout << "Hasil Ujian :";
    cout << Hasil_Ujian;
    cout << endl <<endl;
    return 0;
}
