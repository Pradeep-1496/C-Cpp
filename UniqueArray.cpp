/* Pradeep Prajapati */

/* Github : https://github.com/Pradeep-1496 */
/* LinkedIn : https://ca.linkedin.com/in/pradeep-prajapati-764a97311 */
/* Code Forces : https://codeforces.com/profile/pradeep_1496 */
/* Leetcode : https://leetcode.com/u/Pradeep_1496/ */

/* Problem name or link : Unique in Array */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {1, 2, 2, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int uniqueCount = 0;

    // Process each element in the array
    for (int i = 0; i < n; i++)
    {
        bool isDuplicate = false;
        // Check if arr[i] is already in the unique part of the array
        for (int j = 0; j < uniqueCount; j++)
        {
            if (arr[i] == arr[j])
            {
                isDuplicate = true;
                break;
            }
        }
        // If it's not a duplicate, move it to the "unique" part of the array
        if (!isDuplicate)
        {
            arr[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }

    // Print only the unique values up to the uniqueCount
    cout << "Unique values in the array: ";
    for (int i = 0; i < uniqueCount; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
