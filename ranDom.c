#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randGetArrayNum(int data[] ,int num, int start, int end) {
    srand(time(NULL));
    for (int i = 0; i <num; ++i) {
        data[i] = rand()%(end-start+1)+start;
    }
    return num;
}

int randGetNumber(int start, int end) {
    int number;
    srand(time(NULL));
    number = rand()%(end-start+1)+start;
    return number;
}

void showRandomNumber(int num, int start, int end){
    srand(time(NULL));
    for (int i = 0; i <num; ++i) {
        printf("%d ", rand() % (end - start + 1) + start);
    }
}

int randGetArrayAZ(char data[], int num, char start, char end) {
    srand(time(NULL));
    char getchar;
    if (start < 65 || end > 90) {
        printf("You key error A-Z is toupper");
    } else {
        for (int i = 0; i < num; ++i) {
            data[i] = rand() % (end - start + 1) + start;
        }
        return num;
    }
}

char randGetAZ(char start, char end){
    srand(time(NULL));
    char getchar;
    if(start <65 || end>90) {
        printf("You key error A-Z is toupper");
    } else{
        getchar = rand()%(end-start+1)+start;
        return getchar;
    }
}

void showRandomAZ(int num,char start, char end){
    srand(time(NULL));
    if(start <65 || end>90) {
        printf("You key error A-Z is toupper");
    }else
        for (int i = 0; i <num; ++i)
            printf("%c ", rand() % (end - start + 1) + start);
}

int randGetArrayaz(char data[], int num, char start, char end) {
    srand(time(NULL));
    char getchar;
    if (start < 97 || end > 122) {
        printf("You key error A-Z is toupper");
    } else {
        for (int i = 0; i < num; ++i) {
            data[i] = rand() % (end - start + 1) + start;
        }
        return num;
    }
}

char randGetaz(char start, char end){
    srand(time(NULL));
    char getchar;
    if(start <91 || end>122) {
        printf("You key error a-z is tolower");
    } else{
        getchar = rand()%(end-start+1)+start;
        return getchar;
    }
}


void showRandomaz(int num,char start, char end){
    srand(time(NULL));
    if(start <97 || end>122) {
        printf("You key error a-z is tolower");
    }else
        for (int i = 0; i <num; ++i)
            printf("%c ", rand() % (end - start + 1) + start);
}

