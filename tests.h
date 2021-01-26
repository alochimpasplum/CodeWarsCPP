#include <string>
#include <limits>
#include <sstream>

using namespace std;

/*
* Class with testing purposes
* To compile with gcc
* g++ main.cpp -o main (compile)
* ./main (run)
*/

void test_numeric_limits(){
    cout << "Min value for an int: " << std::numeric_limits<int>::min() << endl; // -2147483648
    cout << "Max value for an int: " << std::numeric_limits<int>::max() << endl; // 2147483647
    cout << "Min value for a float: " << std::numeric_limits<float>::min() << endl; // 1.17549e-38
    cout << "Max value for a float: " << std::numeric_limits<float>::max() << endl; // 3.40282e+38
    cout << "Min value for a double: " << std::numeric_limits<double>::min() << endl; // 2.22507e-308
    cout << "Max value for a double: " << std::numeric_limits<double>::max() << endl; // 1.79769e+308
    cout << "Min value for a char: " << (int)std::numeric_limits<char>::min() << endl; // -128
    cout << "Max value for a char: " << (int)std::numeric_limits<char>::max() << endl; // 127
}

void test_stringstream(string str){
    /*
    * Un stringstream es como un stringbuffer, pero sin operación IO. Este ejemplo acepta integers dentro del string "str"
    * Separa la cadena que se le pasa empleando espacios, tabulaciones y saltos de línea
    * OJO! hay que incluir <sstream>
    */
    stringstream ss(str);
    int temp;
    while (ss >> temp)
        cout << temp << endl;
}