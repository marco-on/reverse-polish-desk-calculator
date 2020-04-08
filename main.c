// pag72. 4.4 Brian W. Kernighan, Dennis M. Ritchie - The C Programming Language-Prentice Hall (1978)

#include "rev-polish-dc.h"

void main() /* reverse Polish desk calculator */
{
	int type;
	char s[MAXOP] ;
	double op2;

	while ( (type = getop (s , MAXOP) ) != EOF)
	{
		switch (type) {
			case NUMBER:
				push (atof(s)) ;
				break;
			case '+':
				push(pop() + pop());
				break;
			case '*': 
				push(pop() * pop());
				break;
			case '-':
				op2 = pop();
				push (pop() - op2);
				break;
			case '/':
				op2 = pop();
				if (op2 != 0.0)
					push (pop() / op2);
				else
					printf ("zero divisor popped\n") ;
				break;
			case '=':
				printf("\t%f\n", push(pop()) );
				break;
			case 'c':
				clear();
				break;
			case TOOBIG:
				printf("%.20s is too long\n", s);
				break;
			default:
				printf ( "unknown command %c\n", type) ;
				break;
		}
	}
}