 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <time.h>
 
 int  f (int n)
 {
     if (n <= 1)
         return 1;
     else
         return f(n-1) + f(n-2);
 }

 int main(void){
 
 int n;
 long cpu_time;
 
 scanf("%d", &n);
 f(n);
 printf("saiki:%d\n", f(n));
 cpu_time = clock();
 printf("CPUtimeF %d\n", cpu_time);
 
 return 0;
 }