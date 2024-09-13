// C++ program to implement
// the above approach
#include <bits/stdc++.h>
using namespace std;
 
// Function to check if right-angled
// triangle can be formed by the
// given coordinates
void checkRightAngled(int X1, int Y1,
                      int X2, int Y2,
                      int X3, int Y3)
{
    // Calculate the sides
    int A = (int)pow((X2 - X1), 2)
            + (int)pow((Y2 - Y1), 2);
 
    int B = (int)pow((X3 - X2), 2)
            + (int)pow((Y3 - Y2), 2);
 
    int C = (int)pow((X3 - X1), 2)
            + (int)pow((Y3 - Y1), 2);
 
    // Check Pythagoras Formula
    if ((A > 0 and B > 0 and C > 0)
        and (A == (B + C) or B == (A + C)
             or C == (A + B)))
        cout << "Yes";
 
    else
        cout << "No";
}
 
// Driver Code
int main()
{
    int X1 = 0, Y1 = 2;
    int X2 = 0, Y2 = 14;
    int X3 = 9, Y3 = 2;
 
    checkRightAngled(X1, Y1, X2,
                     Y2, X3, Y3);
 
    return 0;
}
