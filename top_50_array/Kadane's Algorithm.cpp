int meh=0;
int msf=INT_MIN;
for(int i=0;i<n;i++){
  meh+=arr[i];
  msf = max(msf,meh);
  if(meh<0){
    meh=0;
  }
}
return msf;
  
