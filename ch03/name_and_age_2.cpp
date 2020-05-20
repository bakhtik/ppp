#include "../std_lib_facilities.h"

const int MONTHS = 12;

int main()
{
    cout << "Please enter your first name and age\n";
    string first_name = "???";
    double age = -1;
    cin >> first_name >> age;
    cout << "Hello, " << first_name << " (age " << age * MONTHS << ")\n";

    return 0;
}
