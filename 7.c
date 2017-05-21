/**********************************
 **    ¿¿ ¿¿ ¿¿ ¿¿¿¿  **
 **   ¿¿¿ : ¿¿¿           **
 **   ¿¿¿: 2017¿ 5¿ 10¿   **
 **********************************/
#include <stdio.h>



int main(void)

{

	int grade[10];

	int i, j, sum, tmp;

	float average;

	//¼ºÀûÀÔ·Â

	for (i = 0; i < 10; i++) {

		printf("%d¹øÂ° ¼ºÀûÀ» ÀÔ·ÂÇÏ¼¼¿ä:", i);

		scanf("%d", &grade[i]);

	}



	//Æò±Õ°è»ê

	for (i = sum = 0; i < 10; i++)

		sum += grade[i];

	average = sum / 10.0;

	printf("¼ºÀû Æò±Õ: %f\n", average);



	//¼±ÅÃÁ¤·Ä: ¹öºíÁ¤·Ä

	for (i = 0; i < 9; i++)

		for (j = 9; j > i; j--)

			if (grade[j - 1] > grade[j]) {

				tmp = grade[j - 1];

				grade[j - 1] = grade[j];

				grade[j] = tmp;

			}

	//¼ºÀû¼øÀ¸·Î Ãâ·Â

	printf("¼ºÀû¼ø:");

	for (i = 0; i<10; i++)

		printf("%d", grade[i]);

	printf("\n");

	return 0;

}
