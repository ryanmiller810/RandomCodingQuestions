// Author: Ryan Miller
// Date: 06.10.2015
// Desc: Question within the algorithm domain of www.hackerrank.com under the warmup section. Question
//       prompts you to calculate the height of a utopian tree sapling as it has certain growing
//       characteristcis within two specific seasons. 
// Future: The only item I can see that would need improving would be to move the growing season algorithms
//         into their own functions versus coding them into the for loop of N.

#include <iostream>
using namespace std;

int main() 
{
    int T; // number of test cases
    int N; // number of growing cycles
    int height = 1; // height of initial utopian tree sapling
    cin >> T;
    if(T <= 0 || T >= 11) // Boundary restriction on T
    {
        return 0;    
    }
    else
    {
        for(int j = 0; j < T; j++) 
        {
            cin >> N;
            if(N < 0 || N > 60) // Boundary restriction on N
            {
                return 0;
            }
            else
            {
                for(int i = 1; i <= N; i++)
                    {
                        if(i%2!=0) // check to see if season is even or odd...
                        {
                            height = (height * 2); // growing trend for an odd season   
                        }    
                        else
                        {
                            height = (height + 1); // growing trend for an even season
                        }

                    }
            }

            cout << height << endl;
            height = 1; // output height for specified N and reset height to 1

        }    

    }

}
