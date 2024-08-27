#include <iostream>
#include <cmath>
using namespace std;

class Car {
    public:
        string make;
        string model;
        string color;
        int year;

        void accelerate() {
            cout << "You are speeding up!" << endl;
        }
        void brake() {
            cout << "You are slowing down!" << endl;
        }
        void turn() {
            cout << "You are turning!" << endl;
        }
};

int main() {

    Car camaro;
    camaro.make = "Chevy";
    camaro.model = "Camaro";
    camaro.color = "Midnight Blue";
    camaro.year = 1969;

    cout << camaro.make << endl;
    cout << camaro.model << endl;
    cout << camaro.color << endl;
    cout << camaro.year << endl;

    camaro.accelerate();
    camaro.brake();
    camaro.turn();


    return 0;
};