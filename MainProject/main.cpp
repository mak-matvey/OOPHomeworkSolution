#include "logic.h"

int main() {
    Airline airline1, airline2("Ivan", "Qatavia", "Qatar", 2023, 50, 10000);

    cout << "Before: " << endl;
    cout << airline1.print_FAQ();

    rebrand(airline1, "Rusavia");
    set_new_employee(airline1, 3500);

    cout << "After: " << endl;
    cout << airline1.print_FAQ();

    cout << "Canonical constructor: " << endl;
    cout << airline2.print_FAQ();

    return 0;
}