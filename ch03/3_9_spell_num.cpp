#include "../std_lib_facilities.h"

int main()
{
    cout << "Enter a number: ";
    string str_num;
    cin >> str_num;
    bool is_number = true;
    int num;
    if (str_num == "zero")
        num = 0;
    else if (str_num == "one")
        num = 1;
    else if (str_num == "two")
        num = 2;
    else if (str_num == "three")
        num = 3;
    else if (str_num == "four")
        num = 4;
    else
        is_number = false;

    if (!is_number)
        cout << str_num << " is not a number I know.\n";
    else 
        cout << num << endl;

    return 0;
}
