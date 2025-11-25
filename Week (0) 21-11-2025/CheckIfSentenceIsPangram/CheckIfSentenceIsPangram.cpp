#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkIfPangram(string sentence) {
        int word[26] = {0}; 
    
        if(sentence.size() < 26) return false;

        for(int i = 0; i < sentence.length(); i++) {
            if(sentence[i] >= 'a' && sentence[i] <= 'z') {
                word[sentence[i] - 'a']++;
            }
        }

        for(int i = 0; i < 26; i++) {
            if(word[i] == 0) return false;
        }

        return true;
        }
};