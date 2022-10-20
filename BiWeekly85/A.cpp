class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n=blocks.size();
        vector<int>pref(n+1,0);
        for(int i=1;i<=n;i++){
            pref[i]=(blocks[i-1]=='B')?1:0;
            pref[i]+=pref[i-1];
            // cout<<pref[i]<<" ";
        }
        // cout<<endl;
        int mini=INT_MAX;
        for(int i=0;i<=n-k;i++){

            mini=min(mini,k-(pref[i+k]-pref[i]));

        }
      return mini;

    }
};
