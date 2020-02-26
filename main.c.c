/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

void takeinput(int rounds,int height,int width);
void proccessinput();
void recurmap();

#define ROUND_MAX 32000
#define HW_MAX 16000
int main()
{
    int iteration = 0;
    int rounds = 0;
    int height;
    int width;
    takeinput(rounds,height,width);
	while (iteration < rounds)
	{
        recurmap();
	}
}

void takeinput(int rounds,int height,int width)
{
    //Take # of rounds
    printf ("enter rounds: ");
    scanf("%d", &rounds);
    //printf ("%d", rounds);
    //scanf("%s", &temprounds);
    //while not num or is > 32000: error, take #of rounds
    //printf ("%d", rounds - '0');
    while (rounds < 1 || rounds > ROUND_MAX)
    {
        getchar();
        printf ("enter rounds: ");
        scanf(" %d", &rounds);
        //printf ("%d", rounds);
    }

    //Take height and width
    printf ("enter height and width: ");
    char temp[200];
    scanf(" %[^\n]s", temp);
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