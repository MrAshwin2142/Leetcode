class Solution {
public:
    string greatestLetter(string s) {
        vector<bool> up(26),lo(26);
        for(auto i:s){
            if(i>='a' && i<='z') lo[i-'a']=true;
            else up[i-'A']=true;
        }
        for(int j=25;j>=0;j--){
            if(up[j] && lo[j]){
             char hh=j+'A';
                string ans;
                ans.push_back(hh);
                return ans;
            }
        }
        return "" ;
    }
};
