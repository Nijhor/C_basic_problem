#include <stdio.h>
int main()
{
	char x;
	char y;


    scanf("%c %c",&x,&y);

    if ((x == 'R' && y == 'R') || (y == 'P' && x == 'P') || (y == 'S' && x == 'S'))
	{
			printf("Tie") ;
    }


    else if (x == 'P' && y == 'R')
    {
            printf("Player 1 wins");
    }
    else if (y == 'P' && x == 'R')
    {
            printf("Player 2 wins");
    }


    else if (x == 'p' || x == 'P')
    {
            if (y == 's' || y == 'S')
            {
                    printf("Player 2 wins");
            }
    }
    else if (x == 's' || x == 'S')
    {
    	if (y == 'p' || y == 'P')
            printf("Player 1 wins");
    }
    else if (x == 'r' || x == 'R')
    {
        if  (y == 's' || y == 'S')
        {
            printf("Player 1 wins");
        }
    }
    else if (x == 's' || x == 'S')
    {
        if (y == 'r' || y == 'R')
        {
            printf("Player 2 wins");
        }
    }

    printf("\n");

    return 0;
}
