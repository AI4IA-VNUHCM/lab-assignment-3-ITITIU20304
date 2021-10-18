/*
3.	Input an array of n integers. Find the largest sorted sub array
(sorted array increasing/decreasing and has the largest number of elements)
Ex:
 _____________________________________________
| Input: 2 5 3 4 8 9 7 6 10                   |
| Output: Increasing 3 4 8 9 Decreasing 9 7 6 |
|_____________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex3(int in_arr[], int n){
	//Your codes here
	int i,j;
	int test1 = 0, test2 = 0;
	for (i=0, j=n-1; (i<=floor((n-1)/2)) && (j>=ceil((n-1)/2));i++,j--){
		if (in_arr[i]>=in_arr[i--]){
			test1 = 1;
			break;
		}
		if (in_arr[j]<=in_arr[j++]){
			test2 = 1;
			break;
		}
	}   
	if (test1 == 0 )
		printf("%d",test1);
	else
	   return 0;   
	if (test2 == 0)
		printf("%d",test2);
	else 
	    return 0;

	
	
	

	
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int testcase[argc],i;
	for(i=0; i<argc;i++){
		testcase[i] = atoi(argv[i+1]);
	}
	
	Ex3(testcase, argc);
	
	return 0;
}
