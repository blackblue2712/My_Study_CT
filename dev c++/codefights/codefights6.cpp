#include<iostream>
#include<string.h>

using namespace std;
int makeArrayConsecutive2(int statues[],int n) {
    int t=0;
    int loop=0;
   for (int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
           if(statues[i]>statues[j]){
               t=statues[i];
               statues[i]=statues[j];
               statues[j]=t;
           }
       }
   }
	for(int i=n-1;i>0;i--){
		loop=loop+(statues[i]-statues[i-1]-1);
	}
	return loop;
}
int main() {
	int a[100];
	int n;
	int l=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>> a[i];
	}
	cout<<makeArrayConsecutive2(a,n);
	return 0;
}
//(cach 2: (max-min)+1-length)
