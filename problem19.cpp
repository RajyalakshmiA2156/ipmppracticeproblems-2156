class Solution {
public:
    string convertToTitle(int columnNumber) {
       string resstr="";
    
        while (columnNumber>0){
            columnNumber--;
            char ch='A'+columnNumber%26;
            resstr=resstr+ch;
            columnNumber/=26;
        }
          reverse(resstr.begin(), resstr.end());
        return resstr;
    }
};
