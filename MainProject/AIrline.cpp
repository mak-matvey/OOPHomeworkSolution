#include "Airline.h"

Airline::Airline() : Airline("undefined", "undefined", "undefined", 1903, NULL, 1)
{
}

Airline::Airline(string directorName, string name, string country,
    int foundationYear, int parkSize, int employee)
{
    this->directorName = directorName;
    this->name = name;
    this->country = country;
    this->foundationYear = foundationYear;
    this->parkSize = parkSize;
    this->employee = employee;
}

Airline::Airline(string directorName, string name) :
    Airline(directorName, name, "undefined", 1903, NULL, 1) {}

Airline::~Airline()
{
}


string Airline::getDirectorName()
{
    return directorName;
}

void Airline::setDirectorName(string directorName)
{
    this->directorName = directorName;
}

string Airline::getName()
{
    return name;
}

void Airline::setName(string name)
{
    this->name = name;
}

int Airline::getFoundationYear()
{
    return foundationYear;
}

void Airline::setFoundationYear(int foundationYear)
{
    this->foundationYear = foundationYear;
}

int Airline::getParkSize()
{
    return parkSize;
}

void Airline::setParkSize(int parkSize)
{
    this->parkSize = parkSize;
}

int Airline::getEmployee()
{
    return employee;
}

void Airline::setEmployee(int employee)
{
    this->employee = employee;
}

// methods
string Airline::toString()
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