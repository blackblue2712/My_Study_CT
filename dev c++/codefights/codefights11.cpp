#include<stdio.h>
#include<conio.h>

//kiemtra tong so 2 ben

bool isLucky(int n) {
    int n1=n;
    int l=0;
    int s1=0,s2=0;
    while(n1!=0){
        n1=n1/10;
        l++;
    }
    for(int i=1;i<=l/2;i++){
        s1+=n%10;
        n=n/10;
    }
    for(int i=l/2+1;i<=l;i++){
        s2+=n%10;
        n=n/10;
    }
    if(s1==s2){
        return true;
    }
    else return false;
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",isLucky(n));
	return 0;
}
