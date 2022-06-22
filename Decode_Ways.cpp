class Solution {
public:
    int numDecodings(string s) {
        int n=s.size();
        if(s[0]=='0') return 0;
        if(n==1) return 1;
        
        int d1,d2,m;
        int v1=1;
        int v2=1;
        for(int i=1;i<n;i++){
            int v=0;
            d1=s[i]-'0';
            d2=s[i-1]-'0';
            if(d1!=0) v=v+v2;
            if(d2!=0){
                m=d2*10+d1;
                if(m>=10 && m<=26) v=v+v1;
            }
            v1=v2;
            v2=v;
        }
        return v2;
    }
};
