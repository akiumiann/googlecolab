#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define swap(p,q,t) {t= *(p);*(p)= *(q);*(q)=t;}

void downheap (int k, int a[], int n)
{
    int i,  v = a[k];
    while (k <= n/2) {
	  i = 2*k;
	  if (i < n && a[i] < a[i+1]) i++;
	  if (v >= a[i]) break;
	  a[k] = a[i];
	  k = i;
    } 
    a[k] = v;
}

void heapsort (int a[], int n)
{
    int  k,  t;
    for (k = n/2; k >= 1; k--)
	  downheap(k, a, n);
    while (n > 1) {
	  swap(&a[1], &a[n], t);
	  downheap(1, a, --n);
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
 	
 	heapsort (y,n);
 	for (i=1; i<=n; i++){
 		printf("%2d ", y[i]);
 	}
 	
 	return 0;
 }