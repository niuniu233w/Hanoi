#include <stdio.h>

void move(char pos1, char pos2)
{
	printf("%c->%c ", pos1, pos2);
}

//n:���Ӹ���
//pos1:��ʼλ��
//pos2:��תλ��
//pos3:Ŀ��λ��

void Hanoi(int n, char pos1, char pos2, char pos3)
{
	if (n == 1)
	{
		move(pos1, pos3);
	}
	else
	{
		Hanoi(n - 1, pos1, pos3, pos2); //�Ƚ�pos1��n-1��������pos3Ϊ��ת�ƶ���pos2��λ��
		move(pos1, pos3);//�����������Ƶ�pos3
		Hanoi(n - 1, pos2, pos1, pos3);//�ٽ�pos2��n-1��������pos1Ϊ��ת�ƶ���pos3��λ��
	}

}

int main()
{

	Hanoi(1, 'A', 'B', 'C');
	printf("\n");
	Hanoi(2, 'A', 'B', 'C');
	printf("\n");
	Hanoi(3, 'A', 'B', 'C');
	printf("\n");
	return 0;
}