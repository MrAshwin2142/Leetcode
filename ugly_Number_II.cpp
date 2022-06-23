class Solution {
public:
    int nthUglyNumber(int n) {
       
    vector<int> arr(1,1);
    int i=0,j=0,k=0;
    arr[0]=1;
    for(int l=1; l<n; l++) {
        int m=min(arr[i]*2,arr[j]*3);
        int o=min(m,arr[k]*5);
        arr.push_back(o);
        if(arr[l]==arr[i]*2) i++;
        if(arr[l]==arr[j]*3) j++;
        if(arr[l]==arr[k]*5) k++;

    }
    return arr[n-1];
    }
};
