/**********************************
 **    �� �� �� ����  **
 **   ��� : ���           **
 **   ���: 2017� 5� 10�   **
 **********************************/
#include <stdio.h>



int main(void)

{

	int grade[10];

	int i, j, sum, tmp;

	float average;

	//�����Է�

	for (i = 0; i < 10; i++) {

		printf("%d��° ������ �Է��ϼ���:", i);

		scanf("%d", &grade[i]);

	}



	//��հ��

	for (i = sum = 0; i < 10; i++)

		sum += grade[i];

	average = sum / 10.0;

	printf("���� ���: %f\n", average);



	//��������: ��������

	for (i = 0; i < 9; i++)

		for (j = 9; j > i; j--)

			if (grade[j - 1] > grade[j]) {

				tmp = grade[j - 1];

				grade[j - 1] = grade[j];

				grade[j] = tmp;

			}

	//���������� ���

	printf("������:");

	for (i = 0; i<10; i++)

		printf("%d", grade[i]);

	printf("\n");

	return 0;

}
