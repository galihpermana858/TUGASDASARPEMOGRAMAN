#include <iostream>
using namespace std;

int main()
{
    cout << "KELULUSAN SISWA \n\n";

    double Nilai_ujian;
    cout<< "masukan nilai ujian : ";
    cin>> Nilai_ujian;
    cout<<endl;

    if(Nilai_ujian >=60)
    {
        cout << ("hasil ujian = lulus");
        cout << endl << endl;
    }else {
            cout << "hasil ujian = tidak lulus";
            cout << endl << endl;
    }
    return 0;
}
