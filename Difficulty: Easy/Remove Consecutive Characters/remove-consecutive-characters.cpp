class Solution {
  public:
    string removeConsecutiveCharacter(string& s) {
        if(s.empty())return "";
        
        
        string result ="";
        result+= s[0];
        for(int i=1 ;i<s.length();i++){
            if(s[i] != result.back()){
                result +=s[i];
            }
        }
        return result;
    }
};