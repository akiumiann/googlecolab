 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 
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
 
 void intraverse (struct t2node *p)
 {
	  
	  if (p != NULL) {
	  	if(p->left != NULL && p->right)
	  	printf("(");
	  	intraverse(p->left);
	  	printf("%c", p->data);
	  	intraverse(p->right);
	  	if(p->left != NULL && p->right)
	  	printf(")");
	  }
 }
 
 int main(void)
 {
 	struct t2node *p;
 	printf("input number.\n");
 	p=postfix2tree ();
 	intraverse(p);
 	printf("\n");
 	
 	return 0;
 	}