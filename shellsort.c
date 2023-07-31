 #include <stdlib.h>
 #include <stdio.h>
 #include <limits.h>
 #define swap(p,q,t) {t= *(p);*(p)= *(q);*(q)=t;}
 
 void shellsort (int a[], int n)
{
    int  i,  j,  h,  v;
    for (h = 1; h <= n/9; h = 3*h+1);
    for (; h > 0; h /= 3)
	  for (i = h+1; i <= n; i ++) {
	      v = a[i];
	      for (j = i; j > h && a[j-h] > v; j -= h)
		  a[j] = a[j-h];
	      a[j] = v;
	      }
	  
    }
  
  int main(void)
 {
 	int n, i, x, y[20];
 	
 	srand(time(NULL));
 	
 	scanf("%d", &n);
 	for (i=1; i<=n; i++){
 		x = rand();
 		y[i] = x % 100;
 		printf("%2d ",  y[i]);
 	}
 	
 	printf("\n");
 	
 	shellsort (y,n);
 	for (i=1; i<=n; i++){
 		printf("%2d ", y[i]);
 	}
 	
 	return 0;
 }