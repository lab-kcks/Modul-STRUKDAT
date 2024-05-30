#include <iostream>
using namespace std;

class Kompleks {
private:
    double real;
    double imag;

public:
    // Konstruktor
    Kompleks(double r = 0, double i = 0) : real(r), imag(i) {}

    // Operator overloading untuk operator +
    Kompleks operator+(const Kompleks& other) const {
        return Kompleks(real + other.real, imag + other.imag);
    }

    // Operator overloading untuk operator -
    Kompleks operator-(const Kompleks& other) const {
        return Kompleks(real - other.real, imag - other.imag);
    }

    // Operator overloading untuk operator <<
    friend ostream& operator<<(ostream& os, const Kompleks& k) {
        os << k.real << " + " << k.imag << "i";
        return os;
    }

    // Operator overloading untuk operator ==
    bool operator==(const Kompleks& other) const {
        return (real == other.real && imag == other.imag);
    }
};

// Fungsi untuk melakukan operasi dan mencetak hasilnya
void printOperations() {
    Kompleks k1(3.0, 4.0);
    Kompleks k2(1.0, 2.0);

    Kompleks k3 = k1 + k2;  // Menggunakan operator +
    Kompleks k4 = k1 - k2;  // Menggunakan operator -

    cout << "k1: " << k1 << endl;
    cout << "k2: " << k2 << endl;
    cout << "k1 + k2: " << k3 << endl;
    cout << "k1 - k2: " << k4 << endl;

    // Menggunakan operator ==
    if (k1 == k2) {
        cout << "k1 dan k2 adalah sama" << endl;
    } else {
        cout << "k1 dan k2 tidak sama" << endl;
    }
}

int main() {
    // Memanggil fungsi untuk mencetak hasil operasi
    printOperations();

    return 0;
}
