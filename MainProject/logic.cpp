#include "logic.h"

void rebrand(Airline& airline, string new_name)
{
    airline.name = new_name;
}

void set_new_employee(Airline airline, int new_count) {
    airline.employee = new_count;
}