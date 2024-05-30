#include <iostream>
using namespace std;

// Kelas dasar (Base class)
class Shape {
public:
    // Fungsi virtual yang akan dioverride di kelas turunan
    virtual void draw() const {
        cout << "Drawing a shape" << endl;
    }

    // Fungsi virtual destructor
    virtual ~Shape() {}
};

// Kelas turunan (Derived class)
class Circle : public Shape {
public:
    // Mengoverride fungsi draw
    void draw() const override {
        cout << "Drawing a circle" << endl;
    }
};

// Kelas turunan (Derived class)
class Rectangle : public Shape {
public:
    // Mengoverride fungsi draw
    void draw() const override {
        cout << "Drawing a rectangle" << endl;
    }
};

// Fungsi untuk mencetak bentuk
void printShape(const Shape& shape) {
    shape.draw();
}

int main() {
    Circle circle;
    Rectangle rectangle;

    // Memanggil fungsi printShape dengan objek Circle dan Rectangle
    printShape(circle);
    printShape(rectangle);

    return 0;
}
