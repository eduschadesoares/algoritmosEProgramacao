 #include <stdlib.h>
 #include <stdio.h>
 
 int main () {
 	int N, I, soma;
 	for (N=1; N<=100000; N++){
 		soma=0;
 		for (I=N-1; I>=1; I--)
 			if (N%I==0)
 			soma=soma+I;
 			
 			if (soma==N) printf("%d Xuxu\n", N);
 			}
  		
	system ("pause");
	return 0;	
 	
 }
