#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int shapeArea(int n) {
    int s=0;
    for (int i=1;i<=n+(n-1);i++){
        if(i%2==1){
            s+=i;
        }
    }
    for(int i=1;i<=(n+n-1)-2;i++){
        if(i%2==1){
            s+=i;
        }
    }
    return s;
}

int main() {
	int n;
	cin>>n;
	cout<<shapeArea(n);
	return 0;

}
