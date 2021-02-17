#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
char Prop[255];
char VectorCuv[255][255];
int i = 0;

int main()
{

    scanf("%[^\t\n]", Prop);
    char* p;
    char aux[255];
    p = strtok(Prop, " ");
    while (p != NULL)
    {
        strcpy(VectorCuv[i], p);
        i++;
        p = strtok(NULL, " ");
    }

    int n = i;
    int j;
    i = 0;
    for (i = 0; i <= n; i++)
        for (j = i + 1; j < n; j++)
        {
            if (strlen(VectorCuv[i]) < strlen(VectorCuv[j]))
            {
                strcpy(aux, VectorCuv[i]);
                strcpy(VectorCuv[i], VectorCuv[j]);
                strcpy(VectorCuv[j], aux);
            }
        }
    for (i = 0; i <= n; i++)
        printf("%s \n", VectorCuv[i]);

    return 0;

}

