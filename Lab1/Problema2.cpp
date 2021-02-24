#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<fstream>
using namespace std;

FILE* fis = fopen("in1.txt", "r");

int atoi(char a[])
{
    int rez = 0;
    if (a[0] == '-')
    {
        for (int i = 1; a[i] != 0; ++i)
            rez = rez * 10 + a[i] - '0';
        rez *= -1;
        return rez;
    }
    for (int i = 0; a[i] != 0; ++i)
        rez = rez * 10 + a[i] - '0';
    return rez;
}

int main()
{
    char a[200];
    int sum = 0;
    while ((fscanf(fis, "%[^\n]", a)) != EOF)
    {
        fgetc(fis);
        sum += atoi(a);
    }
    printf("%d", sum);
    return 0;
}