#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define swap(p,q,t) {t= *(p);*(p)= *(q);*(q)=t;}

void quicksort(int a[], int left, int right)
{
    int  i,  j,  p,  t;

    if (left < right) {
		p = a[right];
		for (i = left-1, j = right;;) {
			while (a[++i] < p);
	        while (a[--j] >= p);
	        if (i > j)
				break;
	        swap(&a[i], &a[j], t);
	    } 

		a[right] = a[i];  a[i] = p;
		quicksort(a, left, j);
		quicksort(a, i+1, right);
    }
}

  int main(void)
 {
 	int n, i, x, y[20];
 	
 	scanf("%d", &n);
 	srand(time(NULL));
 	
 	for (i=1; i<=n; i++){
 		x = rand();
 		y[i] = x % 100;
 		printf("%2d ",  y[i]);
 	}
 	
 	printf("\n");
 	
 	quicksort (y,1,n);
 	for (i=1; i<=n; i++){
 		printf("%2d ", y[i]);
 	}
 	
 	return 0;
 }