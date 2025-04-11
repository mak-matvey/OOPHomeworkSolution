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

    // default-constructor
    Airline()
    {
        cout << "default-constructor" << endl;

        director = "Alex";
        name = "Belavia";
        country = "Belarus";
        foundation_year = 1996;
        park_size = 50;
        employee = 3000;
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