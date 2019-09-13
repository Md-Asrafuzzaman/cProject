#include<stdio.h>
#include<stdio.h>
int main()
{
    struct city{
    char from[30];
    char to[30];
    char date[30];
    char sit[30];

};
    struct city c1;
    struct city c2[15][15];
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
   printf("1) Rozina Enterprise\t\t8:00PM\t\t\t8:00AM\t\t\t45\t\t\t550\n");
   printf(" Non AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n Lalmonirhat - Tushbh...\n\n");
     printf("2) Hanif Enterprise\t\t8:00PM\t\t\t8:00AM\t\t\t45\t\t\t1050\n");
   printf(" AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n Lalmonirhat - Tushbh...\n\n");
    printf("3) Nabil Enterprise\t\t8:00PM\t\t\t8:00AM\t\t\t45\t\t\t550\n");
   printf(" Non AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n Lalmonirhat - Tushbh...\n\n");
     printf("4) Nabil Enterprise\t\t8:00PM\t\t\t8:00AM\t\t\t45\t\t\t1050\n");
   printf("  AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n Lalmonirhat - Tushbh...\n\n");
      printf("5) Hanif Enterprise\t\t8:00PM\t\t\t8:00AM\t\t\t45\t\t\t550\n");
   printf(" Non AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n Lalmonirhat - Tushbh...");

    char i;
        for(i =0;i <=15; i++)
    {
        scanf(" %[^\n] ",&c2[i][i].sit);
    }
       FILE *fp;
    fp=fopen("zaman.txt","w");

    for(i =0;i <=15; i++)
    {
        fprintf(fp," %s ",c2[i][i].sit);
    }

    fclose(fp);
   printf("\n\nChoice your bus : ");
   int n;
   scanf("%d",&n);
   if(n==1){
    printf("your bus is Rozina enterprise");
    printf("\n\n\t\t<<<<<<<<\t\tView seat\t\t>>>>>>>\n");
   }
return 0;
}

