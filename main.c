#include <stdio.h>
#include <stdlib.h>
#include "minmax.h"

int main(int argc, char *argv[]) {
	
	MinMax m, n;
	m = newMinMax();
	n = newMinMax();
	
	printf("Set m:\t\t\t");
	add(m,3);
	add(m,23);
	add(m,108);
	add(m,69);
	add(m,54);
	display(m);
	
	printf("\nSmallest Element:\t%d", findMin(m));
	printf("\nLargest Element:\t%d", findMax(m));
	
	printf("\nDeleting min:\t\t");
	deleteMin(m);
	display(m);
	
	printf("\nDeleting max:\t\t");
	deleteMax(m);
	display(m);
	
	printf("\nIs set m empty?\t\t");
	if(isEmpty(m)==1){
		printf("YES");
	}
	else{
		printf("NO");
	}
	
	printf("\nIs set n empty?\t\t");
	if(isEmpty(n)==1){
		printf("YES");
	}
	else{
		printf("NO");
	}

	printf("\nClear set m:\t\t");
	clear(m);
	display(m);
	
	destroy(&m);
	destroy(&n);

	return 0;
}
