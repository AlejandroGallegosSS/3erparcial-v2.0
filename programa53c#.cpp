#include <stdio.h>
//AlejandroGM
float calcularMax(float x , float y ){
  float max; 
  if (x>=y){
    max=x;
  }else{
    max=y;
  }return max;
}

float calcularNota(float p1, float p2, float notaExamen) {
    float notaEC = p1 * 0.2 + p2 * 0.2 + notaExamen * 0.6;
    return calcularMax(notaEC, notaExamen);
}

int main(){
  float parcial1, parcial2, examen, final;
  char c;
  do {
    printf("Introduzca nota parcial 1[0,10]: ");
    scanf("%f", &parcial1);
    printf("Introduzca nota parcial 1[0,10]: ");
    scanf("%f", &parcial2);
    printf("Introduzca nota examen final [0,10]: ");
    scanf("%f", &examen);

    //L�pez Carreto Abril: 
    final=calcularNota(parcial1,parcial2,examen);
    printf("La nota final es %f",final);
    printf("\n\n Salir?  (s/n)");
    
    do{
    scanf("%c", &c);
    }while (c=='\n');
    printf("\n");
    
  }while(c!='s');
  return 0;
 
}
