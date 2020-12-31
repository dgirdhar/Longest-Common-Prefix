class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        string firstStr = "";
        int firstStrSize = 0;
        
        if (strs.size() > 0) {
            firstStr = strs[0];
            firstStrSize = firstStr.size();
        }
        
        for (int i = 0; i < firstStrSize; ++i) {
            char charToCompare = firstStr[i];
            bool misMatchFound = false;
            
            for (int j = 1; j < strs.size(); ++j) {
                string &tempStr = strs[j];
                
                if (i < tempStr.size()) {
                    if (charToCompare != tempStr[i]) {
                        misMatchFound = true;
                        break;
                    }
                }
                else {
                    misMatchFound = true;
                    break;
                }
            }
            
            if (misMatchFound) {
                break;
            }
            else {
                res += charToCompare;
            }
        }
        
        return res;
    }
};
