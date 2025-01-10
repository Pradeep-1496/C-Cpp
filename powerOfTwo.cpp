/* Pradeep Prajapati */

/* Github : https://github.com/Pradeep-1496 */
/* LinkedIn : https://ca.linkedin.com/in/pradeep-prajapati-764a97311 */
/* Code Forces : https://codeforces.com/profile/pradeep_1496 */
/* Leetcode : https://leetcode.com/u/Pradeep_1496/ */

/* Problem name or link :  Power of 2 or not */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    bool result;

    if (n <= 0)
    {
        result = false;
    }
    else
    {
        result = ((n & (n - 1)) == 0);
    }
    cout << result;

    return 0;
}
// a << b = a * 2^b