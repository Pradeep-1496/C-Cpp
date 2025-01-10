/* Pradeep Prajapati */

/* Github : https://github.com/Pradeep-1496 */
/* LinkedIn : https://ca.linkedin.com/in/pradeep-prajapati-764a97311 */
/* Code Forces : https://codeforces.com/profile/pradeep_1496 */
/* Leetcode : https://leetcode.com/u/Pradeep_1496/ */

/* Problem name or link : https://leetcode.com/problems/single-number/ */

#include <bits/stdc++.h>

using namespace std;

int singleNumber(vector<int> &nums)
{
    int result = 0;
    for (int val : nums)
    {
        result ^= val;
    }
    return result;
}

int main()
{
    vector<int> nums = {4, 1, 2, 2, 1};
    cout << singleNumber(nums) << endl;
    return 0;
}