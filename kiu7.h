#include <string>
#include <limits>
#include <sstream>
#include <cmath>

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

bool StringEndsWith(std::string const &str, std::string const &ending) {
    /*
    * Complete the solution so that it returns true if the first argument(string) passed in ends with the 2nd argument (also a string).
    * solution('abc', 'bc') // returns true
    * solution('abc', 'd') // returns false
    * https://www.codewars.com/kata/51f2d1cafc9c0f745c00037d/train/cpp
    */
    
    return std::equal(ending.rbegin(), ending.rend(), str.rbegin());
}

long long rowSumOddNumbers(unsigned n){
  /*
  * Given the triangle of consecutive odd numbers:
  * Calculate the row sums of this triangle from the row index (starting at index 1) e.g.:
  * rowSumOddNumbers(1); // 1
  * rowSumOddNumbers(2); // 3 + 5 = 8
  * https://www.codewars.com/kata/55fd2d567d94ac3bc9000064/train/cpp
  */
    return pow(n, 3);
}