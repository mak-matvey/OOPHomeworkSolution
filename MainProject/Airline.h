#pragma once
#include <string>
#include <iostream>

using namespace std;

class Airline
{
public:
    string director; // имя главы авиа-компании
    string name;
    string country;
    int foundation_year;
    int park_size; // размер авиапарка
    int employee; // кол-во сотрудников

    // constructors
    // default-constructor
    Airline()
    {
        cout << "default-constructor" << endl;

        director = "undefined";
        name = "undefined";
        country = "undefined";
        foundation_year = NULL;
        park_size = NULL;
        employee = NULL;
    }

    // canonical-constructor
    Airline(string dir, string nm, string cntr,
        int fndt_year, int park_sz, int empl)
    {
        director = dir;
        name = nm;
        country = cntr;
        foundation_year = fndt_year;
        park_size = park_sz;
        employee = empl;
    }

    // destructor
    ~Airline()
    {
        cout << "destructor" << endl;
    }

    // methods
    string print_FAQ()
    {
        string s = "Director: ";

        s += director + "\n";
        s += "Name: " + name + "\n";
        s += "Country: " + country + "\n";
        s += "Year of foundation: " + to_string(foundation_year) + "\n";
        s += "Number of airplanes: " + to_string(park_size) + "\n";
        s += "Number of employees: " + to_string(employee) + "\n";

        return s;
    }
};