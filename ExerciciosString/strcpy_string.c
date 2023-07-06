#include <stdio.h>
#include <string.h>
#include <conio.h>

int
main ()
{

  char fonte[5]="BBC";
  char destino[50] = "Programa de Ensino e Tutoria";
  
  printf ("String fonte: %s\n", fonte);
  printf ("String destino: %s\n\n", destino);

//   apaga o que estava na String "destino" e coloca o conteúdo de "fonte"
  strcpy (destino,fonte);
  printf ("String destino após a cópia ser realizada: \n");
  printf ("%s\n", destino);

  getch ();
  return 0;
}
