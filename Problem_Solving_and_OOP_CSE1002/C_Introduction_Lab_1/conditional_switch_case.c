#include<stdio.h>
void main()
{
	char c;
	scanf("%c",&c);
	switch(c)
	{
		case 'b' :
		case 'B' :
			printf("Battleship");
			break;
		case 'c' :
		case 'C' :
			printf("Cruiser");
			break;
		case 'd' :
		case 'D' :
			printf("Destroyer");
			break;
		case 'f' :
		case 'F' :
			printf("Frigate");
			break;
	}
}
