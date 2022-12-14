#include <stdio.h>

void move(char pos1, char pos2)
{
	printf("%c->%c ", pos1, pos2);
}

//n:盘子个数
//pos1:起始位置
//pos2:中转位置
//pos3:目的位置

void Hanoi(int n, char pos1, char pos2, char pos3)
{
	if (n == 1)
	{
		move(pos1, pos3);
	}
	else
	{
		Hanoi(n - 1, pos1, pos3, pos2); //先将pos1上n-1个盘子以pos3为中转移动到pos2的位置
		move(pos1, pos3);//将最大的盘子移到pos3
		Hanoi(n - 1, pos2, pos1, pos3);//再将pos2上n-1个盘子以pos1为中转移动到pos3的位置
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