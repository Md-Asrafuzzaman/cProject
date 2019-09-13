#include<stdio.h>
#include<stdio.h>
#include<stdio.h>

int main()
{
    struct city{
    char from[30];
    char to[30];
    char date[30];
    char sit[30];
    char b[15];
};
    struct city c1;
    struct city c2[30];
    struct city c3[15];
   printf("Enter city from\t:\t");
   scanf(" %[^\n]",c1.from);
   printf("Enter city to\t:\t");
   scanf(" %[^\n]",c1.to);
   printf("Date of journney:\t");
   scanf(" %[^\n]",c1.date);
   printf("\n\tFrom\t\tTo\t\t\tDate of journey\n");
   printf("------------------\t-------------------\t-------------------\n");
   printf("\t%s\t\t%s\t\t\t%s:\n",c1.from,c1.to,c1.date);
   printf("------------------\t-------------------\t-------------------\n\n");
   printf("___________________________________________________________________________________________________________________\n");
   printf("  Operetor(Bus type)\t@\tDev.time\t@\tArr.time\t@\tSeat aviable\t@\tFair\t@\n");
   printf("___________________________________________________________________________________________________________________\n");
    char j;
       if(c1.from=="dhaka" && c1.to=="aha")
    {
   printf("1) Rozina Enterprise\t\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t550\n");
   printf(" Non AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n Lalmonirhat - Tushbh...\n\n");
   printf("2) Hanif Enterprise\t\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t1050\n");
   printf(" AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n Lalmonirhat - Tushbh...\n\n");
   printf("3) Nabil Enterprise\t\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t550\n");
   printf(" Non AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n Lalmonirhat - Tushbh...\n\n");
   printf("4) Nabil Enterprise\t\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t1050\n");
   printf("  AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n Lalmonirhat - Tushbh...\n\n");
   printf("5) Hanif Enterprise\t\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t550\n");
   printf(" Non AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n Lalmonirhat - Tushbh...\n");

   int i;
   printf("\n\nChoice your bus : ");
   int n;
   scanf("%d",&n);
   switch(n){
   case 1:
   printf("your bus is Rozina enterprise");
   break;
   case 2:
    printf("your bus is Hanif Enterprise and AC service");
       break;
   case 3:
   printf("your bus is Nabil Enterprise");
       break;
   case 4:
   printf("your bus is Nabil Enterprise and AC service");
    break;
   case 5:
   printf("your bus is Hanif Enterprise");
      break;
       }
        printf("\n\n\t\t<<<<<<<<\t\tView seat\t\t>>>>>>>\n");
               FILE *fp;
   fp=fopen("ticket.txt","r");
   for(i=0;i<30;i++){
   fscanf(fp," %s",&c2[i].sit);
   }
   for(i=0;i<30;i++){
   printf("\t\t| %s |\t",c2[i].sit);
   }
   printf("\n\tchoise your seat is\t:\t");
   scanf(" %[^\n]",&c2[i].sit);
   printf("\t\tyour sit is : %s\n",c2[i].sit);
      fclose(fp);
       }

          else if(c1.from==c3[0].b && c1.to==c3[2].b){
    printf("1) Ena Enterprise\t\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t550\n");
   printf(" Non AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur\n\n");
   printf("2) Hanif Enterprise\t\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t1050\n");
   printf(" AC\n Route: Dhaka - Bogra -\n Gobindaganj - polasbari - \n rangpur\n\n");
   printf("3) Nabil Enterprise\t\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t550\n");
   printf(" Non AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur -\n\n");
   printf("4) Nabil Enterprise\t\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t1050\n");
   printf("  AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur\n\n");
   printf("5) Hanif Enterprise\t\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t550\n");
   printf(" Non AC\n Route: Dhaka - Bogra -\n Gobindaganj - rangpur\n\n");
   printf("6) TR Enterprise\t\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t550\n");
   printf(" Non AC\n Route: Dhaka - Bogra -\n Gobindaganj - rangpur\n\n");
   printf("7) T.R Enterprise\t\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t1150\n");
   printf(" Non AC\n Route: Dhaka - Bogra -\n Gobindaganj - rangpur\n\n");

  int i;
   printf("\n\nChoice your bus : ");
   int n;
   scanf("%d",&n);
   switch(n){
   case 1:
   printf("your bus is Rozina enterprise");
   break;
   case 2:
    printf("your bus is Hanif Enterprise and AC service");
       break;
   case 3:
   printf("your bus is Nabil Enterprise");
       break;
   case 4:
   printf("your bus is Nabil Enterprise and AC service");
    break;
   case 5:
   printf("your bus is Hanif Enterprise");
      break;
       }
        printf("\n\n\t\t<<<<<<<<\t\tView seat\t\t>>>>>>>\n");
               FILE *fp;
   fp=fopen("ticket.txt","r");
   for(i=0;i<30;i++){
   fscanf(fp," %s",&c2[i].sit);
   }
   for(i=0;i<30;i++){
   printf("\t\t| %s |\t",c2[i].sit);
   }
   printf("\n\tchoise your seat is\t:\t");
   scanf(" %[^\n]",&c2[i].sit);
   printf("\t\tyour sit is : %s\n",c2[i].sit);
      fclose(fp);
          }
return 0;
}
