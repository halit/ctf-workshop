#include <stdio.h>

const char* flag = "ahanda ben aranan degerim!";

int main(int argc, char *argv[]) {
    if(argc < 2){
        printf("Kullanim: %s <deger>", argv[0]);
    }else{
        printf("yanlis deger girdiniz");
    }
    return 0;
}
