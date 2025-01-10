/* Pradeep Prajapati */

/* Github : https://github.com/Pradeep-1496 */
/* LinkedIn : https://ca.linkedin.com/in/pradeep-prajapati-764a97311 */
/* Code Forces : https://codeforces.com/profile/pradeep_1496 */
/* Leetcode : https://leetcode.com/u/Pradeep_1496/ */

/* Problem name or link :  */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;     // Size
    int j = n - 1; // last Pointer to array
    int m = n / 2; // no of swap

    for (int i = 0; i < m; i++)
    {

        swap(arr[i], arr[j - i]);
    }

    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
    return 0;
}