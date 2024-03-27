#include <stdio.h>

int main()
{

   float preco, imposto, custo, desconto;
   char tipo, refrig;

   printf("Digite o preco do produto:");
   scanf("%f%*c", &preco);

   printf("Digite o tipo do produto (A — alimentacao; L — limpeza; e V — vestuario):\n");
   scanf("%c%*c", &tipo);

   printf("Digite o tipo de refrigerao do produto  (S — produto que necessita de refrigeracao; e N — produto que nao necessita de refrigeracao):\n");
   scanf("%c%*c", &refrig);

   switch (refrig)
   {
   case 'N':
      switch (tipo)
      {
      case 'A':
         if (preco < 15)
         {
            preco = preco + 2;
            printf("O valor adicional sera de R$2.00\n");
         }
         else if (preco >= 15)
         {
            preco = preco + 5;
            printf("O valor adicional sera de R$5.00\n");
         }
         break;
      case 'L':
         if (preco < 10)
         {
            preco = preco + 1.50;
            printf("O valor adicional sera de R$1.50\n");
         }
         else if (preco >= 10)
         {
            preco = preco + 2.50;
            printf("O valor adicional sera de R$2.50\n");
         }
         break;
      case 'V':
         if (preco < 30)
         {
            preco = preco + 3;
            printf("O valor adicional sera de R$3.00\n");
         }
         else if (preco >= 30)
         {
            preco = preco + 2.5;
            printf("O valor adicional sera de R$2.50\n");
         }
         break;
      default:
         printf("tipo invalido\n");
      }
      break;

   case 'S':

      switch (tipo)
      {
      case 'A':
         preco = preco + 8;
         printf("O valor adicional sera de R$8.00\n");
         break;
      case 'L':
         printf("nao ha valor adicional\n");
         break;
      case 'V':
         printf("nao ha valor adicional\n");
         break;
      default:
         printf("tipo invalido\n");
      }
      break;

   default:
      printf("refrigeracao invalida\n");
   }
   if (preco < 25)
   {
      imposto = preco * 0.05;
      printf("O imposto sera de R$%.2f\n", imposto);
   }

   else if (preco >= 25)
   {
      imposto = preco * 0.08;
      printf("O imposto sera de R$%.2f\n", imposto);
   }

   custo = preco + imposto;
   printf("O preco do custo do produto sera de R$%.2f\n", custo);
   if (tipo == 'A' && refrig == 'S')
   {
      imposto = 0;
      printf("O produto nao tera desconto\n");
   }

   else
   {
      imposto = 0.03 * preco;
      printf("O produto tera um desconto de R$%.2f\n", imposto);
   }
   preco = preco - imposto;
   printf("O novo preco do produto sera de R$%.2f\n", preco);
   if (preco <= 50)
   {
      printf("O produto e barato");
   }
   else if (preco > 50 && preco < 100)
   {
      printf("O produto tem preco normal");
   }
   else if (preco >= 100)
   {
      printf("O produto e caro");
   }
}