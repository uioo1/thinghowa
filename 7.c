/**********************************
 **    真 真 真 真真  **
 **   真� : 真�           **
 **   真�: 2017� 5� 10�   **
 **********************************/
#include <stdio.h>



int main(void)

{

	int grade[10];

	int i, j, sum, tmp;

	float average;

	//失旋脊径

	for (i = 0; i < 10; i++) {

		printf("%d腰属 失旋聖 脊径馬室推:", i);

		scanf("%d", &grade[i]);

	}



	//汝液域至

	for (i = sum = 0; i < 10; i++)

		sum += grade[i];

	average = sum / 10.0;

	printf("失旋 汝液: %f\n", average);



	//識澱舛慶: 獄鷺舛慶

	for (i = 0; i < 9; i++)

		for (j = 9; j > i; j--)

			if (grade[j - 1] > grade[j]) {

				tmp = grade[j - 1];

				grade[j - 1] = grade[j];

				grade[j] = tmp;

			}

	//失旋授生稽 窒径

	printf("失旋授:");

	for (i = 0; i<10; i++)

		printf("%d", grade[i]);

	printf("\n");

	return 0;

}
