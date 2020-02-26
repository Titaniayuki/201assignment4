/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

#define ROUND_MAX 32000
#define HW_MAX 16000

void takeinput(int rounds,int height,int width, int matrix[]);

void proccessinput();
void recurmap();


int main()
{
    int iteration = 0;
    int rounds = 0;
    int height;
    int width;
   
    int matrix[200];
    takeinput(rounds,height,width, matrix);
	while (iteration < rounds)
	{
        recurmap();
	}
}

void takeinput(int rounds,int height,int width, int matrix[])
{
    //int matrix[HW_MAX][HW_MAX] = {0}
    printf ("here");
    char temp[200];
    scanf(" %200s", temp);
    printf ("%ld\n",strlen(temp));
    printf ("%s\n",temp);
    char delim[] = "\n";
    char *token;
    
    /* get the first token */
    token = strtok(temp, delim);
   
    char temp2[200];
    int index = 0;
    /* walk through other tokens */
    while( token != NULL )
    {
        //temp2[index] = *token;
        printf( " %s\n", token);
        token = strtok(NULL, delim);
    }
    //for (int i = 0; i < strlen(temp); i++)
    //{
        //printf( " %c\n", temp[i]);
    //}
    

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