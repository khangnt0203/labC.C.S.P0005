#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void printTable (int n)
{
	int i;
	for (i=1;i<=10;i++)
	{
		printf("%d x %d = %d\n", n, i, n*i);
	}
}
int main(int argc, char *argv[]) 
{
	int num;
	char key;
	do
	{
		do
		{
		printf("Enter a number: ");
		scanf("%d",&num);
		}
		while (num < 1 || num > 9);
	printTable(num);
	printf("\nPress any key to countinue. Esc to exit.\n");
	fflush (stdin);
	key=getch();
	}
	while (key != 27);

	return 0;
}
