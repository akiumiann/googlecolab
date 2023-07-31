#include<stdio.h>
 int main(void){
 	int a,b,c,d;
 	
 	printf("a=");
 	scanf("%d",&a);
 	
 	b=a/8;
 	c=a%8;
 	d=10*b+c;
 	
 	printf("8=%d,16=%X \n" ,d,a);
 	
 	return 0;
 	}