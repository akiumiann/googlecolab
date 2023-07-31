#include<stdio.h>

 void syusseki_hantei(int kaisu)
 {
 	if(kaisu >=10){printf("O\n");}
 	else{printf("X\n");}
 	}
 	
 int main(void)
 {
 	int i;
 	printf("How many times were you present?");
 	scanf("%d", &i);
 	syusseki_hantei(i);
 	return 0;
 	}