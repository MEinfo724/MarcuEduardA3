#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Math.h"
#include <cstdarg>
#include <cstring>
#include <stdio.h>      
#include <stdlib.h> 
 
int Math::Add(int a , int b)
{
    return a + b;
}

int Math::Add(int a , int b, int c)
{
    return a + b + c;
}

int Math::Add(double a, double b)
{
    return a + b;
}

int Math::Add(double a, double b, double c)
{
    return a + b + c;
}

int Math::Mul(int a, int b)
{
    return a * b;
}

int Math::Mul(int a, int b, int c)
{
    return a * b * c;
}

int Math::Mul(double a, double b)
{
    return a * b;
}

int Math::Mul(double a, double b, double c)
{
    return a * b * c;
}

int Math::Add(int count, ...)
{
    va_list args;
    va_start(args, count);
    int suma = 0;
    while (count != 0)
    {
        int s = va_arg(args, int);
        suma = suma + s;
        count--;
    }
    va_end(args);
    return suma;
   
}

char* Math::Add(const char* a, const char* b)
{
    if (a == nullptr || b == nullptr)
        return nullptr;
    char* result = new char[200];
    int t = 0, maxLen, minLen, i = 0, difLen;
    if (strlen(a) > strlen(b))
    {
        maxLen = strlen(a);
        minLen = strlen(b);
    }
    else
    {
        maxLen = strlen(b);
        minLen = strlen(a);
    }
    result[maxLen] = '\0';
    for (i = 1; i <= minLen; i++, t /= 10)
    {
        t = (a[strlen(a) - i] - '0') + (b[strlen(b) - i] - '0') + t;
        result[maxLen - i] = t % 10 + '0';
    }
    difLen = abs(maxLen - minLen);
    if (difLen != 0)
        for (i = difLen - 1; i >= 0; i--, t /= 10)
        {
            if (strlen(a) > strlen(b))
            {
                t = (a[i] - '0') + t;
                result[i] = t % 10 + '0';
            }
            else
            {
                t = (b[i] - '0') + t;
                result[i] = t % 10 + '0';
            }
        }
    if (!t)
        return result;
    else
    {
        strcpy(result + 1, result);
        result[0] = '1';
        return result;
    }
}
char* Math::Mul(const char* a, int b)
{
    int i, t = 0, pow = 0;
    if (a == nullptr || b == 0)
        return nullptr;
    char* result = new char[200];
    strcpy(result, "0");

    while (b != 0)
    {
        char aux[200] = "0";
        int cifra = b % 10;
        for (i = strlen(a) - 1; i >= 0; i--, t /= 10)
        {
            t += (a[i] - '0') * cifra;
            aux[i] = t % 10 + '0';
        }
        for (; t; t /= 10)
        {
            for (int i = strlen(aux); i > 1; i--)
            {
                aux[i] = aux[i - 1];
            }
            aux[0] = t % 10 + '0';
        }
        for (i = 0; i < pow; i++)
        {
            strcat(aux, "0");
        }
        b /= 10;
        pow++;
        result = Math::Add(aux, result);
    }

    return result;
}
