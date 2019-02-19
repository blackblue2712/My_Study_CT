#include<iostream>
#include<math.h>
using namespace std;

	
main(){
	long long n,k,p;
	cin>>n>>k;
	int s=n*2;//face cake
	int c;//lan chien
	if(n<=k){
		p=10;
			}
			else{
				if(s%k==0){
		p=s/k*5;
	}
	else{
		c=s/k+1;
		p=c*5;
	}
}
				
	
cout<<p;
}
