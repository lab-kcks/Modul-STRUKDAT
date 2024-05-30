#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal is eating" << endl;
    }

    void sleep() {
        cout << "Animal is sleeping" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking" << endl;
    }
};

class Cat : public Animal {
public:
    void meow() {
        cout << "Cat is meowing" << endl;
    }
};

int main() {
    Dog myDog;
    Cat myCat;

    myDog.eat();    // Inherited from Animal
    myDog.sleep();  // Inherited from Animal

    myCat.eat();    // Inherited from Animal
    myCat.sleep();  // Inherited from Animal

    myDog.bark();   // Only available in Dog
    myCat.meow();   // Only available in Cat

    return 0;
}
