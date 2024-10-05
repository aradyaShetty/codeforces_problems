int pf(vi& a[], int m){
  if(a[m] <= 0){
    return 0;
  }
  else{
    return 1;
  }
}

void sba(vi& a[], int n){
  int l = -1, r = n, m;
  while(l+1<r){
    m = l + (r-l)/2;
    if(pf(a, m) == 0){
      l = m;
    }
    else{
      r = m;
    }
  }

  if(a[l] == x)
    cout<<r<<" "<<l<<endl;
  else    
}
