class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    vector<int>pos;
	    vector<int>neg;
	    for(int i=0;i<n;i++){
	        if(arr[i]>=0){
	            pos.push_back(arr[i]);
	        }
	        else{
	            neg.push_back(arr[i]);
	        }
	    }
	    int i=0,k=0,m=0;
	    while(i<n){
	        if(k!=pos.size()){
	            arr[i++] = pos[k++];
	        }
	        if(m!=neg.size()){
	            arr[i++] = neg[m++];
	        }
	    }
	
	    
	    
	    
	    
	}
};
