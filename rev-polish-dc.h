#ifndef REV_POLISH_DC
#define REV_POLISH_DC

	#include <stdio.h>
		
	#define MAXOP 20 /* max size of operand, operator */ //in main.c
	#define NUMBER '0' /* signal that number found */ //in main.c getop.c
	#define TOOBIG '9' /* signal that string is too big */ //in main.c getop.c

	#define MAXVAL 100	/*maximum depth of val stack */ //in push_pop.c
	
	#define BUFSIZE 100 //in get.c
	
//	#define STD_ATOF //comment to use atof.c // uncommento to use stdlib.h
	
	int getch();
	void ungetch (int c);
	int getop(char s[], int lim);
	void clear();
	double push(float f);
	double pop();

	#ifdef STD_ATOF
	//	#include <stdlib.h>
	#endif
	#ifndef STD_ATOF
		double atof(char s[]);
	#endif	
	
#endif