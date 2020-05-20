#include "../std_lib_facilities.h"

int main()
{
    string operation;
    double val, val2;
    
    cin >> operation >> val >> val2;

    if (operation == "+" || operation == "plus")
        val += val2;
    else if (operation == "-" || operation == "minus")
        val -= val2;
    else if (operation == "*" || operation == "mul")
        val *= val2;
    else if (operation == "/" || operation == "div") {
        if (val2 == 0) 
            simple_error("cannot divide to zero");
        val /= val2;
    }

    cout << "result: " << val << endl;

    return 0;
}
