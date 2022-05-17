// Alumno: Guerra Ariel Alejandro 
// Curso: K2002 de sintaxis y semantica de los lenguajes (SSL)

#include <stdio.h>
#include <ctype.h>

int main() {

   int Linea;
   //pedir al usuario ingreso de caracteres
   printf ("Ingrese linea a convertir: ");
   //recorrer linea hasta teminarla
   while (EOF != (linea = getchar())){ 
      //si es mayuscula la cambia a minuscula y viseversa
      if (isupper (linea)){

         linea = tolower (linea);

         goto salida;
      }
      if (islower(linea)){

         linea = toupper(Linea);
      }
      if (isdigit(Linea)){

         Linea = '\0';
      }
      salida:
      //salida de caracteres
      putchar (Linea);
   }

   return EXIT_SUCCESS;
}