#pragma once
#include <string>
#include <iostream>

using namespace std;

class Airline
{
public:
    string directorName;
    string name;
    string country;
    int foundationYear;
    int parkSize; // szie of air park
    int employee; // number of empoloyees

    // constructors
     
    // default-constructor
    Airline() : Airline("undefined", "undefined", "undefined", 1903, NULL, 1)
    {}

    // canonical-constructor
    Airline(string directorName, string name, string country,
        int foundationYear, int parkSize, int employee)
    {
        this->directorName = directorName;
        this->name = name;
        this->country = country;
        this->foundationYear = foundationYear;
        this->parkSize = parkSize;
        this->employee = employee;
    }

    // destructor
    ~Airline()
    {}

    // methods
    string toString()
    {
        string s = "Director: ";

        s += directorName + "\n";
        s += "Name: " + name + "\n";
        s += "Country: " + country + "\n";
        s += "Year of foundation: " + to_string(foundationYear) + "\n";
        s += "Number of airplanes: " + to_string(parkSize) + "\n";
        s += "Number of employees: " + to_string(employee) + "\n";

        return s;
    }

    void rebrand(string name)
    {
        this->name = name;
    }

    void set_new_employee(int employee)
    {
        this->employee = employee;
    }
};