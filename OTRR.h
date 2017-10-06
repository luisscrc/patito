
#ifndef OTRR.h
#define OTRR.h

void fores()
{  
  int array[10],i, Epsilon=0,suma_par=0, suma_parr=0;
       for(i=0; i<10;i++) {
          printf("Igresa los valores del arreglo %d) \n",i);
          scanf("%d",&array[i]); }
       for (i=0;i<10;i++){
           printf("%d \t",array[i]);
           if(i%2==0)     // posiciones par
             suma_par=suma_par+array[i];
           if(array[i]%2==0) // numeros par
             suma_parr=suma_parr+array[i];
             Epsilon+=array[i];}
             
       printf("Suma de los pares: %d \n",suma_par);
       printf("Suma de los numeros pares %d\n",suma_parr);
       printf("Suma de todo el arreglo: %d \n",Epsilon);
       getch();
}
#endif             
