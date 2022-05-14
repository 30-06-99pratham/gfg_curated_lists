vector<int> duplicates(int arr[], int n) {
        // code here
        unordered_map<int,int>mp;
        vector<int>v;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for(int i=0;i<n;i++){
            if(mp[arr[i]] > 1){
                v.push_back(arr[i]);
                mp[arr[i]]=1;
            }
        }
        sort(v.begin(), v.end());
        if(v.size()>=1) return v;
        else return {-1};
    }
};
