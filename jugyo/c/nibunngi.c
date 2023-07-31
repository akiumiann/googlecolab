 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <time.h>
 
 struct t2node {
    int data;
    struct t2node *left;
    struct t2node *right;
 };
 
 struct t2node *postfix2tree ()
 {
     struct t2node *stack[100];
     int  sp = -1;
     struct t2node *n;
     int c;
 
     while ((c = getchar()) != '\n') {
 	  n = (struct t2node *)malloc(sizeof *n);
 	  n->data = c;
 	  
 	  if (c == ' '){
 	     continue;
 	  } if (c == '+' || c == '*' || c == '-' || c == '/') {
 	      n->right = stack[sp--];   /*   pop()   */
 	      n->left = stack[sp--];   /*   pop()   */
 	  } else {
 	      n->left = n->right = NULL;
 	  }
 	  stack[++sp] = n;   /*  push(n)  */
     }
     return stack[sp--];
 }
 

 int height(struct t2node *p){
  	int a=0,b=0;

  	if(p == NULL)return 0;

  	a=height(p->left) + 1;
  	b=height(p->right) + 1;

  	if(a>b) return a;
  	else return b;
  	}
 
 int main(void){
 
 struct t2node *p;
 	printf("input number.\n");
 	p=postfix2tree ();
 	height(p);
 	printf("height:%d\n", height(p));
 	
 return 0;
 }