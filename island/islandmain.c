/*DO NOT CHANGE ANYTING IN THIS FILE
 * Usage: ./islandmain
 * Execute this file to see 4 example arrays. 
 * You will have to use 4 different inputs to see them (-1, -2, -3, -4)
 * You can use these arrays to plan and test your program.
 * For checking: check50 kanchankant/checks/master/island
 * For submitting: submit50 kanchankant/checks/master/island
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
        int island1[5][5] ={{1,1,1,1,1},{1,1,1,1,0},{1,1,1,1,1},{0,1,1,1,1},{1,1,1,1,1}};
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                printf("%i", island1[i][j]);
            }
            printf("\n");
        }

        int perimeter = mapping(island1);
        printf("%d\n", perimeter);
    }

    if (input == -2)
    {
        int island2[5][5] ={{1,0,0,1,1},{1,0,1,1,1},{1,0,1,1,0},{1,1,1,0,0},{0,0,1,1,0}};
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                printf("%i", island2[i][j]);
            }
            printf("\n");
        }
        int perimeter = mapping(island2);
        printf("%d\n", perimeter);
    }

    if (input == -3)
    {
        int island3[5][5] ={{0,0,0,0,0},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1}};
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                printf("%i", island3[i][j]);
            }
            printf("\n");
        }

        int perimeter = mapping(island3);
        printf("%d\n", perimeter);
    }


    if (input == -4)
    {
        int island4[5][5] ={{1,0,1,0,1},{1,0,1,0,1},{1,0,1,0,1},{1,0,1,0,1},{1,1,1,1,1}};
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                printf("%i", island4[i][j]);
            }
            printf("\n");
        }
        int perimeter = mapping(island4);
        printf("%d\n", perimeter);
    }

    else
    {
        int perimeter = mapping(map);
        printf("%d", perimeter);
    }
    return 0;
}
