#include <stdio.h>
#include <conio.h>

int main(){
int x;
int a,b,c;
printf("nhap vao so can kiem tra :");
scanf("%d",&x);
a=x/100;
b=(x/10)%10;
c=x%10;
printf("%d,%d,%d\n",a,b,c);
s=a+b+c;
printf("%d\n",s);
if((a+b+c)%3==0)
printf ("%d chia het cho 3",x);
else printf("%d khong chia het cho 3",x);
}
