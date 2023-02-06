/*      HW Arrays: EX4: C Program to Insert an element in an Array 	*/


#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	/*	These are written once instead of fflush()	*/
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	/*			array_1 definition and declaration	*/
	int arr_1 [10];

	/*			scan number of elements 			*/
	int n;
	printf("Enter no of elements: ");
	scanf("%d",&n);

	/*	scan elements of array_1		 	*/
	int i;
	for (i=0; i<n; i++)
		scanf("%d",&arr_1[i]);

	/*	element to be inserted				*/
	int element;
	printf("Enter the element to be inserted: ");
	scanf("%d",&element);

	/*	print initial array (before insert) */
	printf("The initial array (before insert: ");
	for (i=0; i<n; i++)
		printf("%d ",arr_1[i]);
	printf("\n");

	/*		location to insert 				*/
	int location;
	printf("Enter the location: ");
	scanf("%d",&location);
	location -= 1; //so that i deal with index

	/*		shift all elements 1 index to the right 	*/

	/*	algorithm	*/
	/*	ex: assume you want to insert x in index 3
	 * 	shift all the elements starting from index 3 once to the right
	 * 		replace the elements starting from the right
	 *
	 * 	now the position index you want is empty (-1)
	 * 	put your desired value in it
	 */


	/*	shift all the elements starting from index 3 once to the right	*/
	/*	ex: 123456	*/
	/*		1203456	*/
	for (i=n; i>location; i--)
	{
		arr_1[i] = arr_1[i-1];
	}
	//arr_1[location] = -1;
	arr_1[location] = element;

	printf("array after shifting and adding the desired number: ");
	for (i=0; i<n+1; i++) //number of elements is now = n+1
		printf("%d ",arr_1[i]);


}
