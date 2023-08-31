#include <stdio.h>
#include <stdlib.h>
 
 /*	Userdefined datatype (struct) contains two doubles	*/
struct SComplex
{
	double m_R; // Real part
	double m_I; // Imaginary part
}; 

/*	Function to Read Complex	*/
struct SComplex ReadComplex(char name[])
{
	struct SComplex read;  
	printf("Please Enter the 1st complex number named %s in the form of real, imaginary: ",name);
	scanf("%lf %lf",&read.m_R, &read.m_I);

	return read;  
}

/*	Function to Add Complex		*/
struct SComplex AddComplex(struct SComplex A, struct SComplex B)
{
	struct SComplex addition;
	addition.m_I = A.m_I + B.m_I; 
	addition.m_R = A.m_R + B.m_R; 

	return addition;  
}

/*	Function to print Complex	*/
void PrintComplex(struct SComplex number)
{
	printf("The result of the addition of number1, number2 = %lf + %lfi",number.m_R,number.m_I);
}

int main(void)
{
	struct SComplex number_1, number_2; 

	/*	Reading Complex Numbers	*/
	number_1 = ReadComplex("number1");
	number_2 = ReadComplex("number2");

	/*	Adding Complex Numbers	*/
	struct SComplex addition_result = AddComplex(number_1, number_2); 
	PrintComplex(addition_result);





	return 0;
}


