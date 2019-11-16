#include "stdio.h"
#include "string.h"
int main(int argc, char const *argv[]) {
        char str[1000];
        int i=0;
        scanf("%s",str);
        for ( i = 0; i <strlen(str); i++) {
                if ((int)str[i]>=65 && (int)str[i]<=90) {
                        str[i] = (char)((int)str[i]+32);
                }
                else if ((int)str[i]>=97 && (int)str[i]<=122) {
                        str[i] = (char)((int)str[i]-32);
                }
                else{
                        printf("Please enter a string with only aplhabets");
                        return 0;
                }
        }
        printf("Reversed string is %s",str);
        return 0;
}

struct  address {
        int doorno;
        char street[1000];
}

//
// data_type variable[];
//
// int sum[100];
//
// print sum[99];
//
// int sum[] = {1,2,3,4,5}
//
// char string[4];
