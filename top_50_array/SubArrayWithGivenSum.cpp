lass Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        int i=0;
        int j=0;
        int currSum=0;
        while(i<n){
            if(currSum<s){
                currSum+=arr[j];
                j++;
            }
            else if(currSum>s){
                currSum-=arr[i];
                i++;
            }
            else{
                return {i+1,j};
            }
        }
        return {-1};
        
        
    }
};
