#include <stdio.h>
#include <stdlib.h>

#define PI 3.14




float square(const int r){
    float alan;

    alan=PI*r*r ;
    return alan;
}

int main(){

    int r;
    float alan;

    printf("dairenin yaricapi nedir:");
    scanf("%d",&r);

    alan=square(r);

    printf("dairenin alani:%f",alan);

    return 0 ;
}
