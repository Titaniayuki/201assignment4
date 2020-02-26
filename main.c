#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define ROUND_MAX 32000
#define HW_MAX 16000
int main()
{
    int iteration = 0;
    int rounds = 0;
    int height;
    int width;
    takeinput();
	while (iteration < rounds)
	{
        recurmap();
	}
}

void takeinput(int rounds,int height,int width)
{
    //Take # of rounds
    printf ("enter rounds: ");
    scanf("%s", &rounds);
    //while not num or is > 32000: error, take #of rounds
    printf ("%d", rounds - '0');
    while (!isdigit(rounds) || ((rounds - '0') > ROUND_MAX))
    {
        printf ("enter rounds: ");
        scanf(" %s", &rounds);
        printf ("%d", rounds - '0');
    }
    rounds -= '0';

    //Take height and width
    printf ("enter height and width: ");
    char temp[200];
    scanf("%s", &temp);
    printf ("%s",temp);
    //while not number or is > 16000 or height!= width: error, take #of height and

            //width
			//Else
				//Take input until the height num enter
				//while !Process matrix()
					//Take matrix again
				//Return

}

void proccessinput()
{
    //Split string at enter
	//If num of row strings is not > height
		//Iterate each row string
			//If its not a digit: error return False
			//If it’s a whitespace: ignore
			//If it’s a digit:
			//	if the row array is not full: insert
			//	else: error  return False
		//insert row to matrix
		//return true
	//else: error  return False
	return;

}

void recurmap()
{
    return;
    return;
}

