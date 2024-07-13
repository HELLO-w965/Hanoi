#include<stdio.h>


void move(char start, char end)
{
	static count = 1;
	printf("%d\n", count);
	printf("%c->%c \n\n", start, end);
	count++;
	
	
}
void Hanoi(int n, char start, char temp, char end)
{
	if (n == 1)
	{
		move(start, end);
	}
	else
	{
		Hanoi(n - 1, start, end, temp);
		move(start, end);
		Hanoi(n - 1, temp, start, end);
	}
}
int main()


{
	int x;
	printf("请输入盘子个数\n");
	scanf("%d",&x);
	printf("\n");
	Hanoi(x, 'A', 'B', 'C');

	return 0;

}