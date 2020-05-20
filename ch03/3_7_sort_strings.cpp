#include "../std_lib_facilities.h"

int main()
{
    cout << "Enter three strings: ";
    string a, b, c;
    cin >> a >> b >> c;
    if (b <= a && a <= c) {
        cout << b << ", " << a << ", " << c << "\n";
    } else if (b <= c && c <= a) {
        cout << b << ", " << c << ", " << a << "\n";
    } else if (c <= a && a <= b) {
        cout << c << ", " << a << ", " << b << "\n";
    } else if (c <= b && b <= a) {
        cout << c << ", " << b << ", " << a << "\n";
    } else if (a <= c && c <= b) {
        cout << a << ", " << c << ", " << b << "\n";
    } else {
        cout << a << ", " << b << ", " << c << "\n";
    }

    return 0;
}
