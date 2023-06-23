int updateGame(int** mapArray, int colMap, int rowMap)
{
	int i;
	int j;
	int counter;	
	
	/* Update the Electron head to neighbours
	 * Set all prior Electron heads to Electron tails */
	for(i = 0; i < colMap; i++)
	{
		for(j = 0; j < rowMap; j++)
		{
			if(mapArray[i][j] == 1)
			{
				if((i != 0 && j != 0) && mapArray[i - 1][j - 1] == 3)
				{
					mapArray[i - 1][j - 1] = 6; 
				}
				
				if(i != 0 && mapArray[i - 1][j] == 3)
				{
					mapArray[i - 1][j] = 6; 
				}

				if((i != 0 && j != rowMap - 1) && mapArray[i - 1][j + 1] == 3)
				{
					mapArray[i - 1][j + 1] = 6; 
				}

				if(j != 0 && mapArray[i][j - 1] == 3)
				{
					mapArray[i][j - 1] = 6; 
				}
				
				if(j != rowMap - 1 && mapArray[i][j + 1] == 3)
				{
					mapArray[i][j + 1] = 6; 
				}

				if((i != colMap - 1 && j != 0) && mapArray[i + 1][j - 1] == 3)
				{
					mapArray[i + 1][j - 1] = 6; 
				}
				
				if(i != colMap - 1 && mapArray[i + 1][j] == 3)
				{
					mapArray[i + 1][j] = 6; 
				}

				if((i != colMap - 1 && j != rowMap - 1) && mapArray[i + 1][j + 1] == 3)
				{
					mapArray[i + 1][j + 1] = 6; 
				}
				mapArray[i][j] = 5;
			}
		}
	}
	
	/* Clear all Instances of Electron tails */	
	for(i = 0; i < colMap; i++)
	{
		for(j = 0; j < rowMap; j++)
		{
			if(mapArray[i][j] == 2)
			{
				mapArray[i][j] = 3;
			}
		}
	}


	for(i = 0; i < colMap; i++)
	{
		for(j = 0; j < rowMap; j++)
		{
			counter = 0;	
			if(mapArray[i][j] == 6)
			{
				if((i != 0 && j != 0) && mapArray[i - 1][j - 1] == 5)
				{
					counter++;
				}
				
				if(i != 0 && mapArray[i - 1][j] == 5)
				{
					counter++;
				}

				if((i != 0 && j != rowMap - 1) && mapArray[i - 1][j + 1] == 5)
				{
					counter++;
				}

				if(j != 0 && mapArray[i][j - 1] == 5)
				{
					counter++;
				}
				
				if(j != rowMap - 1 && mapArray[i][j + 1] == 5)
				{
					counter++;
				}

				if((i != colMap - 1 && j != 0) && mapArray[i + 1][j - 1] == 5)
				{
					counter++;
				}
				
				if(i != colMap - 1 && mapArray[i + 1][j] == 5)
				{
					counter++;
				}

				if((i != colMap - 1 && j != rowMap - 1) && mapArray[i + 1][j + 1] == 5)
				{
					counter++;
				}

				if(counter == 1 || counter == 2)
				{
					mapArray[i][j] = 1;
				}

				else
				{
					mapArray[i][j] = 3;
				}
			}
		}
	}
	
	for(i = 0; i < colMap; i++)
	{
		for(j = 0; j < rowMap; j++)
		{	
			if(mapArray[i][j] == 5)
			{
				mapArray[i][j] = 2;
			}
		}
	}
	return 0;
}
