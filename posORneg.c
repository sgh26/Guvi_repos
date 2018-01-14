#include<stdio.h>
#include<conio.h>

void prn(int n){
	n==0?printf("Zero"):n>0?printf("Positive"):printf("Negative");
}

int main(){
	int n;
	printf("Enter a number");
	scanf("%d",&n);
	prn(n);
	getch();
	return 0;
}

	
