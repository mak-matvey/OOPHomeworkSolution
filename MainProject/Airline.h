#pragma once
#include <string>
#include <iostream>

using namespace std;

class Airline
{
private:
    string directorName;
    string name;
    string country;
    int foundationYear;
    int parkSize; // szie of air park
    int employee; // number of empoloyees

public:
    Airline();
    Airline(string directorName, string name);
    Airline(string directorName, string name, string country,
        int foundationYear, int parkSize, int employee);
    ~Airline();

    string getDirectorName();
    void setDirectorName(string directorName);
    string getName();
    void setName(string name);
    int getFoundationYear();
    void setFoundationYear(int foundationYear);
    int getParkSize();
    void setParkSize(int parkSize);
    int getEmployee();
    void setEmployee(int employee);

    string toString();
};