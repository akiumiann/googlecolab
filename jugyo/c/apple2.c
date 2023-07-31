#include<stdio.h>
 int main(void){
 	char ss[50];
 	int i;
 	
 	printf("string:");
 	scanf("%s",ss);
 	
 	for(i=0;i<=50;i++){
 		if(ss[i]==0) break;
 		printf("%d = %X \n" ,i,ss[i]);
 		}
 	
 	return 0;
 	}