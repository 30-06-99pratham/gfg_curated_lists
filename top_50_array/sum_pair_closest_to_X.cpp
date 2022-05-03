class Solution{   
public:
    vector<int> sumClosest(vector<int>arr, int x)
    {
        // code here
        int n= arr.size();
        int i=0,j=n-1;
        int diff = INT_MAX;
        int first,second;
        int sum=0;
        while(i<j){
            sum = arr[i] + arr[j];
            if(abs(sum - x)< diff){
                diff =  abs(sum-x);
                first = arr[i];
                second = arr[j];
            }
            if(sum > x){
                j--;
            }
            else{
                i++;
            }
        }
        return {first,second};
    }
};
