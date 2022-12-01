#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a = 7;
	int *aPtr = &a;

	printf("The addres of a is %p\nThe value of aPtr is %p",&a,aPtr);

	printf("\n\nThe value of a is %d\nThe value of *aPtr is %p", a, *aPtr);		//

	printf("\n\nShoving that * and & are complements of each other\n&*aPtr = %p\n*&aPtr = %p\n", &*aPtr, *&aPtr);

	system("pause");
	return 0;
}