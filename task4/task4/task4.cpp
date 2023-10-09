#include <stdio.h>
int main(){
    int choice;
    printf(">"); scanf_s("%d", &choice);
    switch (choice){
    case 1: {
        for (int i = 1; i <= 9; i++) {
            for (int j = 1; j <= 9; j++) {
                printf("%d * %d = %d\t", i, j, i + j);}
            printf("\n"); break;}}
    case 2:{
        for (int i = 1; i <= 9; i++) {
            for (int j = 1; j <= 9; j++) {
                printf("%d * %d = %d\t", i, j, i * j);}
            printf("\n");break;}
    default:printf("Invalid user input!"); }
          return 0;}