 #include<stdio.h>
 #include<string.h> /*for strlen()*/
 
 void reverse(char *s);
 
 int main(void){
 	char str[]="program";
 	reverse(str);
 	printf("str=%s\n", str);
 	
 	return 0;
 	}
 	
 void reverse(char *s){
 	int wk, n1=0, n2;
 	
 	n2=strlen(s) -1;
 	while(n1 < n2){
 		wk= *(s+n1);
 		*(s+n1)=*(s+n2);
 		*(s+n2)= wk;
 		++n1; --n2;
 		}
 	}