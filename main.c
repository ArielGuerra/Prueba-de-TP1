// Alumno: Guerra Ariel Alejandro 
// Curso: K2002 de sintaxis y semantica de los lenguajes (SSL)

#include <stdio.h>
#include <ctype.h>

int main() {

   int linea;
   //pedir al usuario ingreso de caracteres
   printf ("Ingrese linea a convertir: ");
   //recorrer linea hasta teminarla
   while (EOF != (linea = getchar())){ 
      //si es mayuscula la cambia a minuscula y viseversa
      if (isupper (linea)){

         linea = tolower (linea);
         //salida 
         putchar (linea);
      }
      else if (islower (linea)){

         linea = toupper (linea);
         //salida 
         putchar (linea);
         //si es un digito no hace nada
      }
      if (isdigit (linea)){
         
         linea;
      }
      salida:
      //salida 
      putchar (linea);
   }

   return 0; //puse 0 en el retorno porque EXIT_SUCCESS le daba error
}
