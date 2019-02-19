#include<conio.h>
#include<stdio.h>
#include<string.h>
#define maxsize 100
#include<math.h>


int main(){
	char str[maxsize];
	int s=0;
	printf("Nhap chuoi:");
	gets(str);
	for(int i=0;i<strlen(str);i++){
		if(str[i]<=57 && str[i]>=48){
			s=s+str[i]-48;
		}
	}
	puts(str);
	printf("%d",s);
	return 0;
}

