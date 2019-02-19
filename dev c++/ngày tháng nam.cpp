#include <stdio.h>;
#include <conio.h>;
int songay,d,m,y;
int main (){
	printf("nhap vao ngay thang nam hien tai:");
	scanf("%d%d%d",&d,&m,&y);
	switch(m){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: songay=31;
		break;
		case 4:
		case 6:
		case 9:
		case 11: songay=30;
		break;
		case 2: if(y%4==0 && y%100!=0)
		songay=29; else songay=28;
		break;
	}
	d=d+1;
	if(d>songay)
	{
		d=1;
		m=m+1;
	if(m>12){
		m=1;
		y=y+1;
	}

	
	}
	printf("ngay mai la %d-%d-%d",d,m,y);
	
}
