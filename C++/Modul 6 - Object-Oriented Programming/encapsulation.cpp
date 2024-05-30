#include <iostream>

using namespace std;

class Segitiga {
  private:
    int alas;
    int tinggi;

  public:
    int getAlas() {
      return alas;
    }

    void setAlas(int a) {
      if (a > 0) {
        alas = a;
      }
    }

    int getTinggi() {
      return tinggi;
    }

    void setTinggi(int t) {
      if (t > 0) {
        tinggi = t;
      }
    }

    int getLuas() {
      return 0.5 * alas * tinggi;
    }
};

int main() {
  Segitiga segitiga;
  segitiga.setAlas(5);
  segitiga.setTinggi(10);

  cout << "Luas segitiga: " << segitiga.getLuas() << endl;

  return 0;
}

// // Data Hiding
// int main(){
//     Segitiga segitiga;
//     segitiga.alas(5);
//     segitiga.tinggi(10);
// }
