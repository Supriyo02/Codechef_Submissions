#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-->0){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if((a==b && c==d)||(a==c && b==d)||(a==d && c==b))
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}

