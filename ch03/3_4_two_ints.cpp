#include "../std_lib_facilities.h"

int main()
{
    cout << "Enter two integers: ";
    int val1, val2;
    cin >> val1 >> val2;
    int small, large;
    small = val1;
    large = val2;

    if (val1 > val2) {
        small = val2;
        large = val1;
    }

    cout << "Smaller: " << small
         << "\nLarger: " << large
         << "\nSum : " << val1+val2
         << "\nDifference: " << val1 - val2
         << "\nProduct: " << val1*val2
         << "\nRatio: " << val1/val2
         << '\n';

    return 0;
}
