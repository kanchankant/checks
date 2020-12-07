/**
 * Prompts user for as many as MAX values until EOF is reached,
 * then prints the values in sorted order. Used to test `sort`.
 *
 * Usage: ./islandmain
 *
 * DO NOT CHANGE ANYTING IN THIS FILE
 */

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

#include "island.h"

int main(void)
{
    int map[5][5];
    int input =0;
    int flag = 0;
    //filling in the 2d array
    for (int i=0; i<5; i++)
    {

        for (int j=0; j<5; j++)
        {
            int ii = get_int("input any of the following (-1, -2, -3, -4): ");
            if (ii<0 && ii>-5)
            {
                flag=1;
                input=ii;
                break;
            }
            map[i][j]=ii;
        }
        if (flag==1)
        {
            break;
        }
    }

    if (input == -1)
    {
        int island1[5][5] ={{1,1,1,1,1},{1,0,1,1,1},{1,1,1,1,1},{1,1,0,1,1},{1,1,1,1,1}};
        int perimeter = mapping(island1);
        printf("%d\n", perimeter);
    }
    //add similar if statements for input = -2, -3 -4
    //add if statements for invalid inputs (less than -4 or above 1)

    else
    {
        int perimeter = mapping(map);
        printf("%d\n", perimeter);
    }
    printf("\n");
}
