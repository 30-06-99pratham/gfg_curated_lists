class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        vector<int>pos;
        vector<int>neg;
        int j=0;
        for(int i = 0;i<n;i++){
            if(arr[i]>0){
                pos.push_back(arr[i]);
            }
            else{
                neg.push_back(arr[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(i<pos.size()){
            arr[i] = pos[i];
            }
            else{
                arr[i] = neg[j];
                j++;
            }
        }
    }
};
