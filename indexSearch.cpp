// Author: Ryan Miller
// Date: 06.10.2015
// Desc: Question is from the algorithm domain under sorting at www.hackerrank.com. The name
//       of the question is Intro to Tutorial Challenge. Basically, the question asked to have
//       a user input a element to be searched for along with a size for a vector to be initialized.
//       Next, the user enters the elements they want entered into the array. It is assumed that the
//       element being searched for will occur only once. The index of the element being searched for
//       is found and then outputted to the screen.
// Future: No future changes at the moment.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm> // A lot of these were included by hackerrank
using namespace std;


int main() 
{
    int V = 0; // value to be searched for
    int n = 0; // size of the array
    int ar_n = 0; // values the array will accept
    int index = 0; // index of the found value
    
    cin >> V;
    if(V < -1000 || V > 1000) // Boundary for the element being searched for
    {
        return 0;
    }

    cin >> n;
    if(n < 1 || n > 1000) // Boundary of the size of the array
    {
        return 0;
    }
    
    int array[n];

    for(int i = 0; i < n; i++)
    {
        cin >> ar_n; // Read in the values being inserted into the array
        array[i] = ar_n;
        if(array[i] == V) // if the value being inserted is the one being searched for, return i for the index location
        {
            cout << i << endl;                
        }

    }

    return 0;
}
