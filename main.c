#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*KAMUS*/
    char FILE_NAME[] = "test.pdf";
    char CC;
    FILE *myfile;
    int retval;

    /*ALGORITMA*/
    myfile = fopen(FILE_NAME, "r");
    retval = fscanf(myfile, "%c" , &CC);
    while (retval != EOF) {
        printf("%c", CC);
        retval = fscanf(myfile, "%c", &CC);
        if (retval != '.') {
            break;
        }
    }
    fclose(myfile);
    return 0;
}
