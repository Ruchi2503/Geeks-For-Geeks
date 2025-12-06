class Solution {
  public:
    string countSort(string s) {
        vector<int> count(26, 0);
    
    // Count frequency of each character
    for (char ch : s) {
        count[ch - 'a']++;
    }
    
    // Build sorted string
    string sortedStr = "";
    for (int i = 0; i < 26; i++) {
        sortedStr.append(count[i], 'a' + i);
    }
    
    return sortedStr;
        
    }
};
