#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-->0){
	    int n,d,i=0;
	    cin>>n;
	    while(n>0){
	        d=sqrt(n);
	        n=n-pow(d,2);
	        i=i+1;
	    }
	    cout<<i<<endl;
	    
	}
	return 0;
}

