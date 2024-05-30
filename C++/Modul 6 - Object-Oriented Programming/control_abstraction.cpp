#include <iostream>
#include <vector>
using namespace std;

class PrimeGenerator {
private:
    // Metode privat untuk mengecek apakah sebuah bilangan adalah bilangan prima
    bool isPrime(int number) const {
        if (number <= 1) {
            return false;
        }
        for (int i = 2; i <= number / 2; ++i) {
            if (number % i == 0) {
                return false;
            }
        }
        return true;
    }

    // Metode privat untuk mendapatkan bilangan prima dalam rentang tertentu
    vector<int> getPrimes(int start, int end) const {
        vector<int> primes;
        for (int i = start; i <= end; ++i) {
            if (isPrime(i)) {
                primes.push_back(i);
            }
        }
        return primes;
    }

public:
    // Metode publik untuk mencetak bilangan prima dalam rentang tertentu
    void printPrimes(int start, int end) const {
        vector<int> primes = getPrimes(start, end);
        cout << "Bilangan prima antara " << start << " dan " << end << " adalah: ";
        for (int prime : primes) {
            cout << prime << " ";
        }
        cout << endl;
    }
};

int main() {
    PrimeGenerator primeGen;
    int start = 10;
    int end = 50;
    
    // Menggunakan metode publik untuk mencetak bilangan prima
    primeGen.printPrimes(start, end);
    
    return 0;
}
