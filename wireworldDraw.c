#include <stdio.h>
#include "wireworldDraw.h"
#include "color.h"

int drawToTerminal(int **mapArray, int **colourArray, int rowMap, int colMap)
{
	int i;
	int j;

	/* Copying mapArray to colourArray */
	for(i = 0; i < colMap; i++)
	{
		for(j = 0; j < rowMap; j++)
		{
			colourArray[i][j] = mapArray[i][j];
		}
	}

	setBackground("black");
	for(i = 0; i < colMap; i++)
	{

		setBackground("black");
		for(j = 0; j < rowMap; j++)
		{
			if(colourArray[i][j] == 3)
			{
				setBackground("yellow");
			}
			
			else if(colourArray[i][j] == 2)
			{
				setBackground("red");
			}
			
			else if(colourArray[i][j] == 1)
			{
				setBackground("blue");
			}
			printf("  ");
			setBackground("black");
		}
		setBackground("reset");
		printf("\n");
	}	
	setBackground("reset");
	return 0;
}
