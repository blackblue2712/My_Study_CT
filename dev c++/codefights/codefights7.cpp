#include<iostream>
#include<string.h>

using namespace std;
bool almostIncreasingSequence(int a[],int n) {
    int p=-1, c=0;
    int n=sequence.size();
for (int i=0;i<n-1;i++){
	if (sequence[i]>=sequence[i+1]) {
		p=i;
		c++;
	}
}
if (c>1) return 0;
if (c==0) return 1;
if (p==n-2 || p==0) return 1;
if (sequence[p] < sequence[p+2]) return 1; //10 1 2 3 4 5 6 1
if (sequence[p-1] < sequence[p+1]) return 1;
return 0;
}

int main() {
	int a[100];
	int n;
	int l=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>> a[i];
	}
	cout<<almostIncreasingSequence(a,n);
	return 0;
}
