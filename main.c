/*
 * main.c
 *
 *  Created on: 2024/08/06
 *      Author: 21683936
 */
#include<stdio.h>
#define DEFAULT_VALUE (0)
#define END_VALUE (10)
#define SUB_CALL (1)	/* sub関数の呼び出しON-OFF */

void sub(void);

char *VER="1.00";
char *TYPE="オリジナル";
int SUM = DEFAULT_VALUE;

int main(){
	printf("Ver. %s\n", VER);
	printf("Type %s\n", TYPE);
	if (SUB_CALL != 0){
		sub();
	}
	return 0;
}
void sub(){
	int i;
	for (i=1; i<=END_VALUE; i++){
		SUM=SUM+i;
		// PVSCL:IFCOND(IntermediateResults)
		printf("%d,",SUM);
		// PVSCL:ENDCOND
	}

	// PVSCL:IFCOND(IntermediateResults)
	// PVSCL:IFCOND(IntermediateResults->Format='number')
	printf("%d\n",SUM);
	// PVSCL:ELSEIFCOND(IntermediateResults->Format='formula')
	printf("<ans>: %d\n",SUM);
	// PVSCL:ELSEIFCOND(IntermediateResults->Format='sentence')
	printf("合計は、%d です。\n",SUM);
	// PVSCL:ELSECOND
	printf("none\n");
	// PVSCL:ENDCOND
	// PVSCL:ENDCOND
}
