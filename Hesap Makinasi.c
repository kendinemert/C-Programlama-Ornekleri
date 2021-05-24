#include <stdio.h>
#include <stdlib.h>


   int main()
   {
      int a,b,sonuc;
      char secim;

      printf ("1.sayiyi giriniz: ");
      scanf ("%d",&a);
      fflush(stdin);

     printf ("Islem seciniz: (+ , - , * , /) ");
     secim = getchar();
     printf ("2. sayiyi giriniz: ");
     printf ("%d %c  ",a,secim);
     scanf("%d",&b);

     switch(secim)
      {
      case '+' :
          sonuc = a + b;
          printf("Toplama isleminin sonucu = %d ",sonuc);
      break;

      case '-' :
          sonuc = a - b;
          printf("Cikartma isleminin sonucu = %d ",sonuc);
      break;

      case '*' :
          sonuc = a * b;
          printf("Carpma isleminin sonucu = %d ",sonuc);
      break;

      case '/' :
          sonuc = a / b;
          printf("Bolme isleminin sonucu = %d ",sonuc);
      break;
      default :
      printf ("Lutfen belirtilen karakterlerden biriniz seciniz. ");
      }

      fflush(stdin);
      getchar();
      return 0;
  }
