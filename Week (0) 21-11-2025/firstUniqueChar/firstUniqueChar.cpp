#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int firstUniqChar(string s) {
        int counter [265] ={0};
        for(int i=0;i<s.size();i++)
        {
            counter[s[i]]++;
        }
         for(int i=0;i<s.size();i++)
         {
            if(  counter [s[i]]==1)
            {
                return i;
            }
         }
         return -1;
}
};