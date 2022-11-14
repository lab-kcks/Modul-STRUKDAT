#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> angka;
    vector<int> ganjil = {1, 3, 5, 7};
    vector<int> genap = {2, 4, 6, 8};

    // Masukkan nilai dengan push_back
    angka.push_back(1);
    angka.push_back(2);
    angka.push_back(3);
    angka.push_back(4);

    cout << "Isi vector \'angka\':";
    for (auto i = angka.begin(); i != angka.end(); ++i) {
        cout << ' ' << *i;
    }
    cout << "\n";

    // Cek jumlah elemen vector
    cout << "Jumlah elemen pada vector \'angka\': " << angka.size() << endl;
    cout << "Jumlah maksimal elemen yang dapat ditampung oleh vector \'angka\': " << angka.max_size() << endl;

    // Cek apakah vector kosong atau tidak
    if (angka.empty()) {
        cout << "Vector \'angka\' kosong.\n";
    } else {
        cout << "Vector \'angka\' tidak kosong.\n";
    }

    // Menghapus nilai paling akhir dari vector
    angka.pop_back();

    cout << "Isi vector \'angka\' setelah pop back:";
    for (auto i = angka.begin(); i != angka.end(); i++) {
        cout << ' ' << *i;
    }
    cout << '\n';

    // Resize
    angka.resize(5, 50);

    cout << "Isi vector \'angka\' setelah resize:";
    for (auto i = angka.begin(); i != angka.end(); i++) {
        cout << ' ' << *i;
    }
    cout << "\n";

    // Assign (lihat perbedaannya dengan resize)
    angka.assign(8, 10);

    cout << "Isi vector \'angka\' setelah assign:";
    for (auto i = angka.begin(); i != angka.end(); i++) {
        cout << ' ' << *i;
    }
    cout << "\n";

    // Masukkan nilai 20 di posisi ke-2
    angka.insert(angka.begin() + 1, 20);

    // Masukkan nilai 30 di posisi ke-3 sebanyak 3
    angka.insert(angka.begin() + 2, 3, 30);

    cout << "Isi vector \'angka\' setelah insert:";
    for (auto i = angka.begin(); i != angka.end(); i++) {
        cout << ' ' << *i;
    }
    cout << "\n";

    // Menghapus elemen ke-2
    angka.erase(angka.begin() + 1);

    cout << "Isi vector \'angka\' setelah hapus elemen ke-2:";
    for (auto i = angka.begin(); i != angka.end(); i++) {
        cout << ' ' << *i;
    }
    cout << "\n";

    // Menghapus elemen ke-2 hingga elemen ke-5
    angka.erase(angka.begin() + 1, angka.begin() + 4);
    cout << "Isi vector \'angka\' setelah hapus elemen ke-2 sampai ke-5:";
    for (auto i = angka.begin(); i != angka.end(); i++) {
        cout << ' ' << *i;
    }
    cout << "\n";

    angka.clear();

    if (angka.empty()) {
        cout << "Vector \'angka\' kosong.\n";
    } else {
        cout << "Vector \'angka\' tidak kosong.\n";
    }

    cout << "Isi vector \'ganjil\':";
    for (auto i = ganjil.begin(); i != ganjil.end(); i++) {
        cout << ' ' << *i;
    }
    cout << "\n";

    cout << "Isi vector \'genap\':";
    for (auto i = genap.begin(); i != genap.end(); i++) {
        cout << ' ' << *i;
    }
    cout << "\n";

    ganjil.swap(genap);
    // atau
    // genap.swap(ganjil);

    cout << "Isi vector \'ganjil\' setelah swap:";
    for (int i = 0; i < 4; i++) {
        cout << ' ' << ganjil.at(i);
    }
    cout << "\n";

    cout << "Isi vector \'genap\' setelah swap:";
    for (int i = 0; i < 4; i++) {
        cout << ' ' << genap.at(i);
    }
    cout << "\n";

    // Lower bound dan upper bound
    vector<int> toSort = {3, 5, 2, 4, 1};
    vector<int>::iterator lo, hi;

    sort(toSort.begin(), toSort.end());
    for (int i = 0; i < 5; i++) {
        cout << " " << toSort[i];
    }
    cout << endl;

    lo = lower_bound(toSort.begin(), toSort.end(), 3);
    hi = upper_bound(toSort.begin(), toSort.end(), 3);

    cout << "Index lower_bound: " << (lo - toSort.begin()) << endl;
    cout << "Index upper_bound: " << (hi - toSort.begin()) << endl;

    return 0;
}