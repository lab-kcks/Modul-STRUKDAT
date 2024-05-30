#include <iostream>
using namespace std;

// Fungsi untuk menambahkan dua bilangan bulat
int add(int a, int b) {
    return a + b;
}

// Fungsi untuk menambahkan tiga bilangan bulat
int add(int a, int b, int c) {
    return a + b + c;
}

// Fungsi untuk menambahkan dua bilangan desimal
double add(double a, double b) {
    return a + b;
}

// Fungsi untuk menambahkan dua string
string add(const string &a, const string &b) {
    return a + b;
}

int main() {
    // Memanggil fungsi add untuk bilangan bulat
    cout << "Penambahan dua bilangan bulat: " << add(5, 3) << endl;
    
    // Memanggil fungsi add untuk tiga bilangan bulat
    cout << "Penambahan tiga bilangan bulat: " << add(5, 3, 2) << endl;
    
    // Memanggil fungsi add untuk bilangan desimal
    cout << "Penambahan dua bilangan desimal: " << add(5.5, 3.3) << endl;
    
    // Memanggil fungsi add untuk string
    cout << "Penambahan dua string: " << add(string("Hello, "), string("world!")) << endl;

    return 0;
}
