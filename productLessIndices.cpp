// Author: Ryan Miller
// Date: 06.10.2015
// Desc: Random question received from the website www.interviewcake.com
//       The question asked to write a function called get_products_of_all_ints_except_at_index
//       Basically, the function takes the elements of an array and computes the product of all
//       values not including the current index value. The array created below is the given test
//       array from the question.
// Future Improvements: I would like to go about the calculations differently as they are currently
//                      being done with a known array size and through nested ifs. My intentions 
//                      with this program were to answer the question with the first idea that came
//                      to mind. I believe the program works with zeros as no division is possible.

#include<iostream>

using namespace std;

void get_products_of_all_ints_except_at_index()
{
  int original[] = {1, 7, 3, 4}; // initializing the test array
  int num_elements = sizeof(original)/4; // calculating the total number of elements in the array (in case unknown)
  int products[num_elements]; // initializing the array used ot hold the products based on total number of elements
  int product = 0; // initializing the product
  int j = 0; // count for product array

  for(int i = 0; i < num_elements; i++) // looping through each index of the original array
    {
      if(i == 0) // here is where the nested ifs take place ... I would like to change this section
        {
          product = original[i+1] * original[i+2] * original[i+3];
          products[j] = product;
          j++;
        }
      else if(i == 1)
        {
          product = original[i-1] * original[i+1] * original[i+2];
          products[j] = product;
          j++;
        }
      else if(i == 2)
        {
          product = original[i-2] * original[i-1] * original[i+1];
          products[j] = product;
          j++;
        }
      else
        {
          product = original[i-3] * original[i-2] * original[i-1];
          products[j] = product;
          j++;
        }
    }

  int num_products = sizeof(products)/4; // somewhat redundant but checking for same amount of elements
  for(int k = 0; k < num_products; k++) // output the products to screen
    {
      cout << products[k] << endl;
    }

} // end of func

int main()
{

  get_products_of_all_ints_except_at_index();

} // end of main
