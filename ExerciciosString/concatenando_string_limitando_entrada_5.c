#include <stdio.h>
#include <string.h>
#include <conio.h>

int
main ()
{
//   longo inteiro sem sinal
  size_t num = 5;
  char resultado[50] = "Programa de Ensino";
  printf ("String original: \n%s\n\n", resultado);

  // no caso vocC* limita a entrada de caracteres na string
  strncat (resultado, " e Tutoria - BBC", num);
  printf ("String apC3s os %d primeiros caracteres serem concatenados:\n",
	  num);
  printf ("%s\n", resultado);

  getch ();
  return 0;
}
