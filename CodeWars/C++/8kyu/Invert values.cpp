// link this kata is : https://www.codewars.com/kata/5899dc03bc95b1bf1b0000ad/train/cpp
#include <vector>

std::vector<int> invert(std::vector<int> values)
{
    for( int i = 0; i < values.size(); i++)
      values[i] = values[i]* -1;
      return values;
}
