#include <stdio.h>

int bin[100];
int numbin;

void calDecToBin(int dec){
    for(int i =0 ;dec > 0 ; i++){
        if(dec %2 == 0)
            bin[numbin] = 0;
        else
            bin[numbin] = 1;
        dec /= 2;
        numbin++;
    }
    while (numbin%4 != 0){
        bin[numbin] = 0;
        numbin++;
    }
}

void binShow(int dec){
    calDecToBin(dec);
    for (int i = numbin-1; i>=0; i--) {
        printf("%d", bin[i]);
    }
}

int binGetArray(int dec , int array_bin[]) {
    int count=0;
    calDecToBin(dec);
    for (int i = numbin-1; i>=0; i--) {
        array_bin[count++] = bin[i];
    }
    return count;
}

