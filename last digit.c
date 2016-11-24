/*
Student Name:Diwakar kandel
Subject:programming fundamental
Roll No:08
Lab No:
Program:WAP to print last digit of any nos & nos without last digit.
Date:24nov,2016
*/
#include<stdio.h>
int main()
{
 int n,rim,d;
 printf("Enter any nos:\n");
 scanf("%d", &n);
 
 rim=n%10;
 d=n/10;
 printf("\n last digit of %d",rim);
 printf("\n without last digit of %d",d);
  
  return 0;
  }
 
