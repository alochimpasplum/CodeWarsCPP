#include <vector>

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