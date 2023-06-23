#include <stdio.h>
#include <stdlib.h>
#include "wireworldDraw.h"
#include "wireworldLogic.h"
#include "newSleep.h"

int main(int argc, char *argv[])
{
	int rowMap;
	int colMap;
	int stepAmount;
	float sleepTime;

	int counter;
	
	int i;
	int j;
	
	int **mapArray;
	int **colourArray;

	FILE* f;
	char ch[10];
	
	f = fopen(argv[1], "r");
	
	if(argv[2] == NULL || argv[3] == NULL)
	{
		printf("Error: Not Enough Arguments\n");
		fclose(f);
	}	

	else if (atoi(argv[2]) <= 0 || atof(argv[3]) <= 0)
	{
		printf("ERROR: Step Amount or Sleep Length cannot be 0 or less\n");
		fclose(f);
	}

	else if(f == NULL)
	{
		perror("ERROR: File not Found\nSpecfic Error");
		fclose(f);
	}
	else
	{
		stepAmount = atoi(argv[2]);
		sleepTime = atof(argv[3]);

		fscanf(f, "%s", ch);
		colMap = atoi(ch);
		fscanf(f, "%s", ch);
		rowMap = atoi(ch);
		
		/* Making the mapArray, colourArray, and electronArray */
		mapArray = (int**)malloc(colMap * sizeof(int*));
		colourArray = (int**)malloc(colMap * sizeof(int*));
		
		for(i = 0; i < colMap; i++)
		{
			mapArray[i] = (int*)malloc(rowMap * sizeof(int));
			colourArray[i] = (int*)malloc(rowMap * sizeof(int));
			for(j = 0; j < rowMap; j++)
			{
				fscanf(f, "%s", ch);
				mapArray[i][j] = atoi(ch);
				colourArray[i][j] = atoi(ch);
				/* If the value is 1, set 1 on the corresponding index of electronArray */
			}
		}	
		fclose(f);
	
		
		counter = 1;

		/* Beginning the Simulation */
		while(counter <= stepAmount)
		{
			system("clear");
			drawToTerminal(mapArray, colourArray, rowMap, colMap);
			updateGame(mapArray, colMap, rowMap);
			counter++;
			newSleep(sleepTime);
		}
		/* Freeing malloc'd memory */
		for(i = 0; i < colMap; i++)
		{
			free(mapArray[i]);
			free(colourArray[i]);
		}
		free(mapArray);
		free(colourArray);
	}
	return 0;
}
