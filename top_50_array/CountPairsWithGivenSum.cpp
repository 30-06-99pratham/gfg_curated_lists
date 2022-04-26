class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        unordered_map<int,int>mp;
        int count=0;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for(int i=0;i<n;i++){
            if(mp.find(k-arr[i])!=mp.end()) {
                mp[arr[i]]--;
                count+=mp[k-arr[i]];
                
                
            }
            
        }
        return count;
    }
};

//O(n)
