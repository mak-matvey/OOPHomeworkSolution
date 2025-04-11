#include "logic.h"

int main() {
    Airline Main_Airline;

    cout << "Before: " << endl;
    cout << Main_Airline.print_FAQ();

    rebrand(Main_Airline, "Rusavia");
    set_new_employee(Main_Airline, 3500);

    cout << "After: " << endl;
    cout << Main_Airline.print_FAQ();

    return 0;
}