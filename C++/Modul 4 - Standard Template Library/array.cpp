#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

int main() {
    array<int, 4> angka = {1, 2, 3, 4};
    array<int, 4> ganjil = {1, 3, 5, 7};
    array<int, 4> genap = {2, 4, 6, 8};
    array<int, 4> kosong;

    // Test output array
    cout << "Isi array \'angka\':";
    for (int i = 0; i < 4; i++) {
        cout << ' ' << angka[i];
    }
    cout << "\n";

    // Output nilai di posisi tertentu
    cout << "Elemen ke-3 (operator[]): " << angka[2] << endl;
    cout << "Elemen ke-3 (at()): " << angka[2] << endl;
    cout << "Elemen pertama: " << angka.front() << endl;
    cout << "Elemen terakhir: " << angka.back() << endl;

    // Ganti nilai di posisi tertentu
    angka.front() = 50;
    angka.at(2) = 100;
    angka.back() = 150;

    cout << "Isi array \'angka\' sekarang:";
    for (auto i = angka.begin(); i != angka.end(); ++i) {
        cout << ' ' << *i;
    }
    cout << "\n";

    // Cek jumlah elemen pada array
    cout << "Jumlah elemen pada array \'angka\': " << angka.size() << "\n";
    cout << "Jumlah maksimal elemen yang dapat ditampung oleh array \'angka\': " << angka.max_size() << "\n";

    // Cek array apakah kosong atau tidak
    if (angka.empty()) {
        cout << "Array \'angka\' kosong.\n";
    } else {
        cout << "Array \'angka\' tidak kosong.\n";
    }
    if (kosong.empty()) {
        cout << "Array \'kosong\' kosong.\n";
    } else {
        cout << "Array \'kosong\' tidak kosong.\n";
    }

    cout << "Isi array \'ganjil\':";
    for (int i = 0; i < 4; i++) {
        cout << ' ' << ganjil.at(i);
    }
    cout << "\n";

    cout << "Isi array \'genap\':";
    for (int i = 0; i < 4; i++) {
        cout << ' ' << genap.at(i);
    }
    cout << "\n";

    // Menukar nilai (swap)
    ganjil.swap(genap);
    // atau
    // genap.swap(genjil);

    cout << "Isi array \'ganjil\' setelah swap:";
    for (int i = 0; i < 4; i++) {
        cout << ' ' << ganjil.at(i);
    }
    cout << '\n';

    cout << "Isi array \'genap\' setelah swap:";
    for (int i = 0; i < 4; i++) {
        cout << ' ' << genap.at(i);
    }
    cout << '\n';

    // Masukkan nilai dengan fill()
    angka.fill(200);
    kosong.fill(20);

    cout << "Isi array \'angka\' setelah fill:";
    for (int i = 0; i < 4; i++) {
        cout << ' ' << angka.at(i);
    }
    cout << '\n';

    cout << "Isi array \'kosong\' setelah fill:";
    for (auto i = kosong.begin(); i != kosong.end(); i++) {
        cout << ' ' << *i;
    }
    cout << '\n';

    return 0;
}