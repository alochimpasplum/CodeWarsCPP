#include <string>
#include <limits>
#include <sstream>

using namespace std;

std::string highAndLow(const std::string& numbers){
    /*
    * In this little assignment you are given a string of space separated numbers, and have to return the highest and lowest number.
    * Example:
    * highAndLow("1 2 3 4 5");  // return "5 1"
    * highAndLow("1 2 -3 4 5"); // return "5 -3"
    * highAndLow("1 9 3 4 -5"); // return "9 -5"
    * https://www.codewars.com/kata/554b4ac871d6813a03000035/train/cpp
    */
   stringstream ss(numbers);
   int temp, min = std::numeric_limits<int>::max(), max = std::numeric_limits<int>::min();
   while(ss >> temp){
        if (temp < min)
            min = temp;
        if (temp > max)
            max = temp;
   }

   return to_string(max) + " " + to_string(min);
}