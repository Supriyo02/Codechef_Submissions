#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-->0){
	    int i,n,k,sum=0;
	    cin>>n>>k;
	    int t[n];
	    int d[n];
	    for(i=0;i<n;i++){
	        cin>>t[i]>>d[i];
	    }
	    for(i=0;i<n;i++){
	        if(t[i]<k){
	            k=k-t[i];
	            t[i]=0;
	        }
	        else{
	            t[i]=t[i]-k;
	            break;
	        }
	    }
	    for(i=0;i<n;i++){
	        sum=sum+t[i]*d[i];
	    }
	    cout<<sum<<endl;
	}
	return 0;
}

