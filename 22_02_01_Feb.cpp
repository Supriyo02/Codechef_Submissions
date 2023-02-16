#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-->0){
	    int n,i,s1,s0,len;
	    s1=0;
	    s0=0;
	    cin>>n;
	    char s[n];
	    cin>>s;
	    for(i=0;i<n;i++){
	        if(s[i]=='0')
	        s0=s0+1;
	        else
	        s1=s1+1;
	    }
	    if(s0<s1)
	    len=(s0*2)+1;
	    else if(s1<s0)
	    len=(s1*2)+1;
	    else
	    len=s0*2;
	    cout<<len<<endl;
	}
	return 0;
}

