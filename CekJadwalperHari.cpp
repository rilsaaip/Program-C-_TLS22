#include <iostream>
using namespace std;

enum mingguan {senin = 1, selasa, rabu, kamis, jumat, sabtu, minggu};
int hari;

int main()
{
    cout << "======|CEK JADWAL|======" << endl;
    cout << "Mau cek jadwal hari apa?" << endl;
    cout << "1. Senin\t5. Jumat\n";
    cout << "2. Selasa\t6. Sabtu\n";
    cout << "3. Rabu\t\t7. Minggu\n";
    cout << "4. Kamis";

    cout << "\n\nMau cek hari ke - ";
    cin >> hari;
    cout << endl;

    if (hari>7){
        cout << "Maaf, hanya ada 7 hari perminggu @_@" << endl;
    }
    else
        switch (hari)
            {
            case senin :
                cout << "JADWALMU HARI SENIN :\n\n";
                cout << "Bahasa Indonesia dan Penulisan Ilmiah\n==> Senin, 07:00-08:40 Ruang 4B3+4A2-SGLC" << endl;
                cout << "=====================================" << endl;
                cout << "Kalkulus Variabel Tunggal\n==> Senin, 13:00-15:30 Ruang 8B2-SGLC" << endl;
                break;
            case selasa :
                cout << "Selamat!!! anda libur hari selasa :D" << endl;
                break;
            case rabu :
                cout << "JADWALMU HARI RABU :\n\n";
                cout << "Fisika Mekanika Klasik\n==> Rabu, 07:00-08:40 Ruang 8B3-SGLC" << endl;
                cout << "=====================================" << endl;
                cout << "Teori Vektor dan Matriks\n==> Rabu, 09:30-11:10 Ruang 4B3-SGLC" << endl;
                cout << "=====================================" << endl;
                cout << "Pemrograman Dasar\n==> Rabu, 13:00-15:30 Ruang 4B2-SGLC" << endl;
                break;
            case kamis :
                cout << "JADWALMU HARI KAMIS :\n\n";
                cout << "Kalkulus Variabel Tunggal\n==> Kamis, 09:30-12:00 Ruang 8B1-SGLC" << endl;
                cout << "=====================================" << endl;
                cout << "Fisika Mekanika Klasik\n==> Kamis, 13:00-14:40 Ruang 8B2-SGLC" << endl;
                break;
            case jumat :
                cout << "JADWALMU HARI JUMAT :\n\n";
                cout << "Matematika Diskrit\n==> Jumat, 13:00-15:30 Ruang 8B3-SGLC" << endl;
                break;
            case sabtu :
                cout << "Sabtu libur kawan..." << endl;
                break;
            case minggu :
                cout << "hari libur, tapi bsk udah masuk aja :(" << endl;
                break;
            default:
                cout << "Masukkan urutan harinya yaaa!!! (1-7)";
                break;
            }
    return 0;
} 