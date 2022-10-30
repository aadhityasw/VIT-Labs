#include<stdio.h>
void main()
{
	char c;
	scanf("%c",&c);
	if ((c=='b')||(c=='B')) 
	{
		printf("Battleship");
	}
	else if ((c=='c')||(c=='C')) 
	{
		printf("Cruiser");
	}
	else if ((c=='d')||(c=='D')) 
	{
		printf("Destroyer");
	}
	else if ((c=='f')||(c=='F')) 
	{
		printf("Frigate");
	}
}
