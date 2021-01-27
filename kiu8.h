#include <vector>
#include <string>

using namespace std;

std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
    /*
    * Given an array of integers.
    * Return an array, where the first element is the count of positives numbers and the second element is sum of negative numbers.
    * https://www.codewars.com/kata/576bb71bbbcf0951d5000044/train/cpp
    */
    int positive = 0;
    int negative = 0;
    for(int x : input){
        if(x > 0) {
           positive++;
        } else {
           negative += x;
        }
    }
    if(positive != 0 || negative != 0){
        return {positive, negative};
    } else {
        return {};
    }
}

std::string countSheep(int number) {
    /*
    * Given a non-negative integer, 3 for example, return a string with a murmur: "1 sheep...2 sheep...3 sheep...". Input will always be valid, i.e. no negative integers.
    * https://www.codewars.com/kata/5b077ebdaf15be5c7f000077/train/cpp
    */
   string s;
   for (int i = 1; i <= number; i++)
       s.append(std::to_string(i) + " sheep...");
   return s;
}

char getGrade(int a, int b, int c) {
  /*
  * Complete the function so that it finds the mean of the three scores passed to it and returns the letter value associated with that grade.
  * Numerical Score	Letter Grade
  * 90 <= score <= 100	'A'
  * 80 <= score < 90	'B'
  * 70 <= score < 80	'C'
  * 60 <= score < 70	'D'
  * 0 <= score < 60	'F'
  * https://www.codewars.com/kata/55cbd4ba903825f7970000f5/train/cpp
  */

    float score = (a + b + c) / 3;
    if(score >= 90){
        return 'A';
    } else if(score >= 80){
        return 'B';
    } else if(score >= 70) {
        return 'C';
    } else if(score >= 60) {
        return 'D';
    } else {
        return 'F';
    }
    // Better solution:
    // return score >= 90 ? 'A' : score >= 80 ? 'B' : score >= 70 ? 'C' : score >= 60 ? 'D' : 'F'; 
}

bool isDivisible(int n, int x, int y) {
  /*
  * Create a function that checks if a number n is divisible by two numbers x AND y. All inputs are positive, non-zero digits.
  * https://www.codewars.com/kata/5545f109004975ea66000086/train/cpp
  */

    return (n % x == 0 && n % y == 0) ? true : false;
}

int paperwork(int n, int m){
    /*
    * Your classmates asked you to copy some paperwork for them. You know that there are 'n' classmates and the paperwork has 'm' pages.
    * Your task is to calculate how many blank pages do you need. If n < 0 or m < 0 return 0.
    * Example:
    * n= 5, m=5: 25
    * n=-5, m=5:  0
    * https://www.codewars.com/kata/55f9b48403f6b87a7c0000bd/train/cpp
    */
   return (n<0 || m<0) ? 0 : n*m;
}

int opposite(int number) 
{
    /*
    * Very simple, given a number, find its opposite.
    * https://www.codewars.com/kata/56dec885c54a926dcd001095/train/cpp
    */

   return number * -1;
}

int arrayPlusArray(std::vector<int> a, std::vector<int> b) {
    /*
    * I'm new to coding and now I want to get the sum of two arrays...actually the sum of all their elements. I'll appreciate for your help.
    */
   int sum = 0;
   for (size_t i = 0; i < a.size(); i++)
   {
       sum += a[i];
   }
   for (size_t i = 0; i < b.size(); i++)
   {
       sum += b[i];
   }
   return sum;
   // Better solution:
   // return std::accumulate(a.begin(), a.end(), 0) + std::accumulate(b.begin(), b.end(), 0);
}