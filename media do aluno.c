#include<stdio.h>
main(){

    
    float media;

    printf("Digite sua nota");
    scanf("%f", &media);

   if(media >= 7.00){
        printf("Voce esta aprovado");

       
   }else if (media < 4){
    printf("Voce esta reprovado");
      
}else{
    printf("Voce esta de recuperacao");   
    }
    }