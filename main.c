// Alumno: Guerra Ariel Alejandro 
// Curso: K2002 de sintaxis y semantica de los lenguajes (SSL)

#include <stdio.h>
#include <ctype.h>

int main() {

   int linea;
 
   //recorrer linea hasta teminarla
   while (EOF != (linea = getchar())){ 
      //si es mayuscula la cambia a minuscula y viseversa
      if (isupper (linea)){

         putchar (tolower (linea));
      }
      if (islower (linea)){

         putchar (toupper (linea));
      }
      if (ispunct (linea)){
         
        putchar (linea);
      }
      if isspace (linea){
      
        putchar (linea);
      }  
      
   }

   return 0; //puse 0 en el retorno porque EXIT_SUCCESS le daba error
}
