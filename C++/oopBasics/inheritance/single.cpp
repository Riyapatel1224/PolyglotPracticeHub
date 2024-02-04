#include <iostream>
using namespace std;

class Vehicle
{

public:
    int noOfWheels;
    int noOfSeats;
    int noOfGears;
    char fuelType[10];
    char color[10];
};

class Car : public Vehicle
{

public:
    void getVehData()
    {

        cout << "Enter no of wheels of car: ";
        cin >> noOfWheels;
        cout << "Enter no of seats of car: ";
        cin >> noOfSeats;
        cout << "Enter no of gears of car: ";
        cin >> noOfGears;
        cout << "Enter fuel type of car: ";
        cin >> fuelType;
        cout << "Enter color of car: ";
        cin >> color;
    }
    void printVehData()
    {

        cout << "No of wheels of car: " << noOfWheels << endl;
        cout << "No of seats of car: " << noOfSeats << endl;
        cout << "No of gears of car: " << noOfGears << endl;
        cout << "Fuel type of car: " << fuelType << endl;
        cout << "Color of car: " << color << endl;
    }
};

int main()
{

    Car c1;
    c1.getVehData();
    c1.printVehData();

    return 0;
}