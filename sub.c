

void sub(void){
  
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
