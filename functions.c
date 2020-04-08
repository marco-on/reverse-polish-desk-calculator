#include "rev-polish-dc.h"

int sp = 0; /* stack pointer */
double val [MAXVAL]; /* value stack */

void clear() /* clear stack */
{
	sp = 0;
}

double push(float f) /* push f onto value stack */
{
	if (sp < MAXVAL)
		return(val[sp++] = f);
	else {
		printf("error: stack full\n") ;
		clear();
		return(0);
	}
}

double pop() /* pop top value from stack */
{
	if (sp > 0)
		return (val[--sp]);
	else {
		printf ("error: stack empty\n") ;
		clear() ;
		return(0);
	}
}