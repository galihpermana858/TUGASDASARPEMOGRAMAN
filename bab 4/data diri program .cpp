#include <iostream>
    using namespace std;

    int main()
{

    cout <<"======================================== \n";
    cout <<"nama    :Galih Permana                   \n";
    cout <<"NIM     :A2.1900070                      \n";
    cout <<"jurusan :TI                              \n";
    cout <<"E-mail  :gpermana858@gmail.com           \n";
    cout <<"======================================== \n";
    cout <<"            OUTPUT                       \n";
    cout <<"**************************************** "<<endl <<endl;
    char tampilkan[1];
    char nama[20],alamat[20],tl[30],
    jk[10],no[12],pekerjaan[40],email[15];
    cout <<"======================================== \n";
    cout <<"            DATA DIRI                    \n";
    cout <<"======================================== "<<endl <<endl;
    cout << "NAMA :";
    cin.getline(nama,20);
    cout << "JENIS KELAMIN :";
    cin.getline(jk,10);
    cout << "NOMOR hp.:";
    cin.getline(no,12);
    cout << "PEKERJAAN :";
    cin.getline(pekerjaan,40);
    cout << "TANGGAL LAHIR :";
    cin.getline(tl,30);
    cout << "E-mail :";
    cin.getline(email,15);
    cout << "STMIK SUMEDANG";
    cin.getline(tampilkan,1);

    return 0;
}
