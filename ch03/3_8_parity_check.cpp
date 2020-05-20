#include "../std_lib_facilities.h"

int main()
{
    cout << "Enter an integer: ";
    int value;
    cin >> value;
    cout << "The value " << value
         << " is an "
         << ((value % 2 == 0) ? "even" : "odd")
         << " number.\n";

    return 0;
}
