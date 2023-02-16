#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t-->0){
        int n,mid,k,i,j,c;
        cin>>n>>k;
        int a[n+k];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n-1;i++){
            for(j=0;j<n-1;j++){
                if(a[j]>a[j+1]){
                    c=a[j];
                    a[j]=a[j+1];
                    a[j+1]=c;
                }
            }
        }
        
        mid=(n+k)/2;
        cout<<a[mid]<<endl;
        
    }
	return 0;
}

