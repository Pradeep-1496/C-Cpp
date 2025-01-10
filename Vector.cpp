/* Pradeep Prajapati */

/* Github : https://github.com/Pradeep-1496 */
/* LinkedIn : https://ca.linkedin.com/in/pradeep-prajapati-764a97311 */
/* Code Forces : https://codeforces.com/profile/pradeep_1496 */
/* Leetcode : https://leetcode.com/u/Pradeep_1496/ */

/* Problem name or link :  */

#include<bits/stdc++.h>

using namespace std;


void printV(vector<int> v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
}

int main(){
    vector<int> a;
    vector<int> &v = a;   // "v" is reference to "a", not a copy of "a"
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.insert(a.begin() + a.size(), {8, 9, 10});   // AS last element
    a.insert(a.end() + -a.size(), {11, 12, 13});  // As first element

   
    // printV(v);

    // printV(a);

 
 
return 0;
}