#include <stdio.h>
#include <string.h>

int bu_degeri_bulmayin_ya[] = {0x79,0x61,0x76,0x61,0x73,0x20,0x79,0x61,0x76,0x61,0x73,0x20,0x69,0x73,0x69,0x6e,0x69,0x79,0x6f,0x72,0x75,0x7a,0x20,0x64,0x65,0x67,0x69,0x6c,0x20,0x6d,0x69,0x3f};

int harika_fonksiyon(const char* value){
    int len = sizeof(bu_degeri_bulmayin_ya) / sizeof(int);
    
    if(strlen(value) < len){
        return 0;
    }

    int i;
    for(i=0;i<len;i++){
        if(value[i] != bu_degeri_bulmayin_ya[i]){
            return 0;
        }
    }

    return 1;
}

int main(int argc, char *argv[]) {
    if(argc < 2){
        printf("Kullanim: %s <deger>", argv[0]);
    }else{
        if(harika_fonksiyon(argv[1]) == 1){
            printf("tebrikler beni kirdiniz!");
        }else{
            printf("bu sefer olmadi :(");
        }
    }
    return 0;
}
