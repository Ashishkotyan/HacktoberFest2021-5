/* -------------------------------------------------------------------------- */
/*                     Is Both Or Not Problem Code: ISBOTH                    */
/* -------------------------------------------------------------------------- */

/**You're given a number N. If N is divisible by 5 or 11 but not both then print "ONE"(without quotes). 
 * If N is divisible by both 5 and 11 then print "BOTH"(without quotes). 
 * If N is not divisible by 5 or 11 then print "NONE"(without quotes).
*/

/*
    Input:
        First-line will contain the number N.

    Output:
        Print the answer in a newline.

    Constraints
        1≤N≤103

    Sample Input 1: 
        50

    Sample Output 1:
        ONE

    Sample Input 2:
        110

    Sample Output 2:
        BOTH

    Sample Input 2:
        16

    Sample Output 2:
        NONE

    EXPLANATION:
        In the first example, 50 is divisible by 5, but not 11.
        In the second example, 110 is divisible by both 5 and 11.
        In the third example, 16 is not divisible by 5 or 11.
*/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    if (N % 5 == 0 && N % 11 == 0)
        cout << "BOTH";
    else if (N % 5 == 0 || N % 11 == 0)
        cout << "ONE";
    else if (N % 5 != 0 || N % 11 != 0)
        cout << "NONE";
    return 0;
}