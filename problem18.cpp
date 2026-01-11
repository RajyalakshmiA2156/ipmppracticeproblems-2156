class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n=0;
        for (int i=0;i<columnTitle.length();i++){
            n=(columnTitle[i]-'A'+1)+n*26; }// traversing 26 elements for one change in alphabet 
            return n;
    }
};
