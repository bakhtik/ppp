/* converts miles to km */
#include "../std_lib_facilities.h"

const double KM_IN_MILE = 1.609;

int main()
{
    cout << "Enter distance in miles: ";
    double distance;
    cin >> distance;
    cout << "There are " << distance * KM_IN_MILE << " km in "
         << distance << " miles\n";

    return 0;
}
