#include <stdio.h>
#include <string.h>

int flag_cry[] = {0x6a,0x68,0x7f,0x6e,0x68,0x66,0x2d,0x6b,0x61,0x6c,0x6a,0x2d,0x79,0x6c,0x60,0x2d,0x62,0x61,0x6c,0x7f,0x6c,0x66,0x2d,0x6f,0x78,0x2d,0x64,0x7e,0x79,0x68};

int fantastik_fonksiyon(const char* s){
    int flag_key = 0xD;

    int len = strlen(s);
    int len_f = sizeof(flag_cry) / sizeof(int);

    if(len != len_f){
        return 0;
    }

    int i;
    char real_flag[len_f+1];
    for(i=0;i<len_f;i++){
        real_flag[i] = flag_cry[i] ^ flag_key;
    }

    for(i=0;i<len_f;i++){
        if(real_flag[i] != s[i]){
            return 0;
        }
    }
    return 1;
}

int main(int argc, char *argv[]) {
    if(argc < 2){
        printf("Kullanim: %s <deger>", argv[0]);
    }else{
        if(fantastik_fonksiyon(argv[1])){
            printf("beni cok kiriyorsun :(");
        }else{
            printf("deger yanlis :)");
        }
    }
    return 0;
}

