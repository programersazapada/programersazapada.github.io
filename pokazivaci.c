##### PRVI ZADATAK #####
#include <stdio.h>
#include <math.h>
void funkcija(float *pok);
int main() {
    float br[5];
    float *pok;
    pok =& br[0];
    int i;
    for(i = 0; i < 5; i++){
        printf("\nUpisi %d. broj: ",i+1);
        scanf("%f",pok+i);
    }
    funkcija(pok);
    return 0;
}
void funkcija(float *pok){
    int i, j;
    float t;
    for(i = 0; i < 5; i++){
        for(j = i; j < 5; j++){
            if(*(pok+i)-(int)*(pok+i) > *(pok+j)-(int)*(pok+j)){
                t = *(pok+i);
                *(pok+i) = *(pok+j);
                *(pok+j) = t;
            }
        }
    }
    printf("\nSortirano prema decimalnim dijelovima od najmanjeg do najveceg: ");
    for(i = 0; i < 5; i++){
        printf("%.2f ",*(pok+i));
    }
    return;
}

##### DRUGI ZADATAK #####
#include <stdio.h>
#include <math.h>
void funkcija(float *pok);
int main() {
    float br[5];
    float *pok;
    pok =& br[0];
    int i;
    for(i = 0; i < 5; i++){
        printf("\nUpisi %d. broj: ",i+1);
        scanf("%f",pok+i);
    }
    funkcija(pok);
    return 0;
}
void funkcija(float *pok){
    int i;
    int ima = 0;
    for(i = 4; i > -1; i--){
        if((int)*(pok) % 2 == 0){
            ima++;
            break;
        }
    }
    if(ima != 0){
        printf("\nBrojevi s parnim cijelim dijelom: ");
        for(i = 4; i > -1; i--){
            if((int)*(pok + i) % 2 == 0){
                printf("%.2f ",*(pok+i));
            }
        }
    }else
    {
        printf("\nNema brojeva s parnim cijelim dijelom.");
    }
    return;
}

##### TRECI ZADATAK #####
#include <stdio.h>
#include <math.h>
#include <string.h>
int main() {
    char zn[100];
    char *pok, sl;
    pok =& zn[0];
    int i, raz = 0, ima = 0;
    printf("\nUpisi recenicu: ");
    gets(pok);
    printf("\nUpisi trazeno slovo: ");
    scanf(" %c",&sl);
    for(i = strlen(pok)-1; i > -1; i--){
        if(*(pok+i) == ' '){
            raz++;
        }
        if(raz == 1){
            if(*(pok+i) == sl){
                ima++;
                break;
            }
        }
    }
    if(ima != 0){
        printf("\nTrazeno slovo %c se pojavljuje u recenici.",sl);
    }else
    {
        printf("\nTrazeno slovo %c se pojavljuje u recenici.",sl);
    }
    return 0;
}