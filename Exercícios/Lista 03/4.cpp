	#include <stdio.h>
	#include <stdlib.h>
	#include <time.h>
	
	int main (void){
	int cruzoe;
	for (cruzoe=100; cruzoe<=200; cruzoe++)
	printf("%i\n", cruzoe);
	system("dir");
	system("date/t");
	printf("%s\n",__DATE__);
	printf("%s",__TIME__);	
	return 0;	
		
	}
