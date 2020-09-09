#include <stdio.h>
#include <string.h>

int main()
{
    char frame[40];
    printf("Enter the frame:");
    scanf("%s",frame);
    int frame_size = strlen(frame);
    char polynomial_coeff[10];
    printf("Enter the polynomial_coeff:");
    scanf("%s",polynomial_coeff);
    char temp[frame_size];
    strcpy(temp,frame);
    int poly_len = strlen(polynomial_coeff);
    for(int i = 0;i < poly_len;i++) {
        strcat(frame,"0");
    }
    char rem[poly_len];
    int o = frame_size-poly_len+1;
    printf("%d\n",o);
    //printf("%s\n",frame);
    char quo[o];
    int k = 0;
    int i = 0;
    char comp[poly_len]; 
    for(int i = 0;i < poly_len;i++) {
        comp[i] = temp[i];
    }
    //printf("%s\n",comp);
    int t;
    char update[poly_len];
    i = poly_len-1;
    while(i < frame_size) {
        t = 0;
        if(comp[0] == '1') {
            quo[k] = '1';
        } else {
            quo[k] = '0';
        }
        for(int j = 0;j < poly_len;j++) {
            if(comp[0] == '1') {
                //quo[k] = '1';
                if(comp[j] == polynomial_coeff[j]) {
                    update[t] = '0';
                } else {
                    update[t] = '1';
                }
            } else {
                //quo[k] = '0';
                if(comp[j] == '0') {
                    update[t] = '0';
                } else {
                    update[t] = '1';
                }
            }
            t = t + 1;
        }
        //printf("quo:%s\n",quo);
        //printf("update:%s\n",update);
        k = k + 1;
        i = i + 1;
        char new[poly_len];
        int m;
        for(m = 0;m < poly_len-1;m++) {
            new[m] = update[m+1];
        }
        new[poly_len-1]=frame[i];
        strcpy(comp,new);
        //printf("comp:%s\n\n",comp);
        strcpy(rem,update); 
        strcpy(update,"");
        
    }
    char quotient[20];
    strcpy(quotient,quo);
    printf("Quotient:%s\n",quotient);
    char Remainder[strlen(rem)];
    for(int i = 0;i<strlen(rem)-1;i++){
        Remainder[i]=rem[i+1];
    }
    printf("Remainder:%s\n",Remainder);
    strcat(temp,Remainder);
    printf("Final data:%s\n",temp);
    //printf("%s\n",rem);
    //printf("%s\n",comp);
    //printf("%s",quo);
    return 0;
}



