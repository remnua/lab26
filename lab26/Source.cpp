//#include <iostream>
//using namespace std;
//
//int main() {
//    int a = 8, b = 0, c = 0;
//    cin >> b;
//
//    try {
//        if (b == 0) {
//            throw "Your input is not valid, you can't divide by zero.";
//        }
//
//        c = a / b;
//        cout << c << endl;
//    }
//    catch (const char* error) {
//        cout << error << endl;
//    }
//
//    return 0;
//}

#include <iostream>
using namespace std;

//int main(void) {
//    int a = 0, b = 0, c = 0;
//    cin >> b;
//    cin >> a;
//
//    try {
//        c = a / b;
//        cout << c << endl;
//    }
//    catch (const char* error) {
//        cout << error << endl;
//    }
//
//    return 0;
//}


#include <iostream>
using namespace std;

const int InvalidArgument = 222;

float internaldiv(float arg1, float arg2) {
    if (arg2 == 0.0)
        throw InvalidArgument;
    return arg1 / arg2;
}

float div(float arg1, float arg2) {
    if (arg2 == 0.0)
        throw InvalidArgument;
    return internaldiv(arg1, arg2);
}

int main(void) {
    float r, a, b;
    while (cin >> a) {
        cin >> b;
        try {
            r = div(a, b);
            cout << r << endl;
        }
        catch (int error) {
            if (error == InvalidArgument) {
                cout << "Invalid argument. Please provide a non-zero value for the second number." << endl;
            }
            else {
                cout << "An error occurred." << endl;
            }
        }
    }
    return 0;
}
