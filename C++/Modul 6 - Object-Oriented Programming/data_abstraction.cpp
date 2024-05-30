#include <iostream>
using namespace std;

class PersegiPanjang {
private:
    // Variabel anggota privat
    double panjang;
    double lebar;

public:
    // Konstruktor untuk menginisialisasi persegi panjang
    PersegiPanjang(double p, double l) {
        panjang = p;
        lebar = l;
    }

    // Fungsi anggota publik untuk menghitung luas
    double getLuas() const {
        return panjang * lebar;
    }

    // Fungsi anggota publik untuk menghitung keliling
    double getKeliling() const {
        return 2 * (panjang + lebar);
    }

    // Fungsi anggota publik untuk mengatur dimensi persegi panjang
    void setDimensi(double p, double l) {
        if (p > 0 && l > 0) {
            panjang = p;
            lebar = l;
        } else {
            cout << "Dimensi harus bernilai positif." << endl;
        }
    }

    // Fungsi anggota publik untuk mendapatkan panjang
    double getPanjang() const {
        return panjang;
    }

    // Fungsi anggota publik untuk mendapatkan lebar
    double getLebar() const {
        return lebar;
    }
};

int main() {
    // Membuat objek PersegiPanjang
    PersegiPanjang pp(10.5, 5.5);

    // Mengakses fungsi anggota publik
    cout << "Panjang: " << pp.getPanjang() << endl;
    cout << "Lebar: " << pp.getLebar() << endl;
    cout << "Luas: " << pp.getLuas() << endl;
    cout << "Keliling: " << pp.getKeliling() << endl;

    // Mengubah dimensi persegi panjang
    pp.setDimensi(20.0, 10.0);

    // Mengakses fungsi anggota publik lagi
    cout << "Panjang Baru: " << pp.getPanjang() << endl;
    cout << "Lebar Baru: " << pp.getLebar() << endl;
    cout << "Luas Baru: " << pp.getLuas() << endl;
    cout << "Keliling Baru: " << pp.getKeliling() << endl;

    return 0;
}
