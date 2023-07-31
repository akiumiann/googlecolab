 #include <stdlib.h>
 #include <stdio.h>
 #include <limits.h>
 #define swap(p,q,t) {t= *(p);*(p)= *(q);*(q)=t;}
 
 void insertion_sort (int a[], int n)
{
    int  i,  j,  v;
    a[0] = INT_MIN;
    for (i = 2; i <= n; i++) {
	  v = a[i];
	  for (j = i; a[j-1] > v; j--) 
	      a[j] = a[j-1];
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
 	
 	insertion_sort (y,n);
 	for (i=1; i<=n; i++){
 		printf("%2d ", y[i]);
 	}
 	
 	return 0;
 }