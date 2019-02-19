#include<conio.h>
#include<stdio.h>
#include<string.h>
#define maxsize 100

void xoa(char str[],int vitri){
	int n=strlen(str);
	for(int i=vitri;i<n;i++){
		str[i]=str[i+1];		
	}
n--;	
}
void tim(char str[]){
	while(true){
		if(str[0]==' ')
		xoa(str,0);
		else break;
	}
}
void sapxep(char str[]){
	char temp;
	for(int i=0;i<strlen(str);i++){
		for(int j=0;j<strlen(str);j++){
			if(str[i]>str[j]){
				temp=str[i];
				str[i]=str[j];
				str[j]=temp;
			}
		}
	}
}

void loop(char str[],char s){
	int l;
	for(int i=0;i<strlen(str);i++){
		if(str[i]==s){
			l++;
		}
	}
	printf("So lan xuat hien cua %c la %d",s,l);
}

int main(){
	char str[maxsize];
	char s;
	printf("Nhap string: ");
	gets(str);
	tim(str);
	sapxep(str);
	printf("\nstring da xoa va sap xep:");
	printf("%s",str);
	printf("\nnhap ki tu can tim kiem:");scanf("%c",&s);
	loop(str,s);
	return 0;
}
