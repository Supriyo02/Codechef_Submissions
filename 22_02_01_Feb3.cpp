#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-->0){
	    int i,n,a,b,s1,s2;
	    s1=0;
	    s2=0;
	    cin>>n>>a>>b;
	    char s[n];
	    cin>>s;
	    for(i=0;i<n;i++){
	        if(s[i]=='0')
	        s1=s1+a;
	        else
	        s2=s2+b;
	    }
	    cout<<s1+s2<<endl;
	}
	return 0;
}

