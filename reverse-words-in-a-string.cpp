class Solution {
public:
    string reverseWords(string s) {
        string rev = "";
        string temp = "";

        for (int i = 0; i < s.size(); i++) {
            while (i < s.size() && s[i] != ' ') {
                //To store words one by one
                temp += s[i];
                i++;
            }
            
            if (temp != "") {
                // If string is not empty, we will add it at beginning of result.
                if (rev != "") {
                    rev = temp + " " + rev;
                } 
                else {
                    rev = temp; 
                }
                //re-initialize temp to empty string to store next word
                temp = "";
            }
        }
        return rev;        
    }
};
