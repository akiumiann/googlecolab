 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <time.h>
 
 
 
 int fibonacci (int n)
 {
     int  i,  *f;
     f = (int *)malloc((n+1)*sizeof(int));
     f[0] = f[1] = 1;
     for (i = 2; i <= n; i++)
         f[i] = f[i-1] + f[i-2];
     return f[n];
 }
 
 int main(void){
 
 int n;
 long cpu_time;
 
 scanf("%d", &n);
 fibonacci(n);
 printf("hisaiki:%d\n", fibonacci(n));
 cpu_time = clock();
 printf("CPUŽžŠÔF %d\n", cpu_time);   
 
 return 0;
 }