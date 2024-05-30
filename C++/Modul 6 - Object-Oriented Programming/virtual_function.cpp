#include <iostream>
using namespace std;

// Kelas dasar (Base class)
class Animal {
public:
    // Fungsi virtual
    virtual void sound() const {
        cout << "Animal makes a sound" << endl;
    }

    // Fungsi virtual destructor
    virtual ~Animal() {}
};

// Kelas turunan (Derived class)
class Dog : public Animal {
public:
    // Mengoverride fungsi sound
    void sound() const override {
        cout << "Dog barks" << endl;
    }
};

// Kelas turunan (Derived class)
class Cat : public Animal {
public:
    // Mengoverride fungsi sound
    void sound() const override {
        cout << "Cat meows" << endl;
    }
};

// Fungsi untuk mencetak suara hewan
void printSound(const Animal& animal) {
    animal.sound();
}

int main() {
    Dog dog;
    Cat cat;

    // Memanggil fungsi printSound dengan objek Dog dan Cat
    printSound(dog);
    printSound(cat);

    return 0;
}
