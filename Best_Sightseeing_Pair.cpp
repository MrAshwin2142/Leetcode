class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& v) {
        int n=v.size();
        if(n==2) return v[0]+v[1]-1;
        int mp=0;
        int p=0;
        int iv=0;
        for(int i=0;i<n;i++){
            p=iv+v[i]-i;
            mp=max(mp,p);
            iv=max(iv,v[i]+i);
        }
            return mp;
    }
};
