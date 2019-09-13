#include<stdio.h>
#include<stdio.h>
#include<stdio.h>
int main()
{
    struct city{
    char from[15];
    char to[15];
    char date[15];
    char sit[40];
    char name[20];
    char number[15];
    char gender[10];
    };
    struct city c1;
    struct city c2[40];
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
   printf("  Operetor(Bus type)\t@\tDev.time\t@\tArr.time\t@\tSeat avilable\t@\tFair\t@\n");
   printf("___________________________________________________________________________________________________________________\n");
    if(c1.from[0]=='d' && c1.to[0]=='r')
    {
   printf("1) S.R Travels (Pvt) Ltd\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t550\n");
   printf(" Non AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur -\n\n");
   printf("2) Hanif Enterprise\t\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t1050\n");
   printf(" AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur -\n\n");
   printf("3) Nabil Paribahan\t\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t550\n");
   printf(" Non AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur -\n\n");
   printf("4) Nabil Paribahan\t\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t1050\n");
   printf("  AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur \n\n");
   printf("5) Hanif Enterprise\t\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t550\n");
   printf(" Non AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur\n");

   int i;
   for(i=0;i<36;i++){
     scanf(" %[^\n]",&c2[i].sit);
   }
   FILE*fp;
   fp=fopen("ticket.txt","w");
   for(i=0;i<36;i++){
   fprintf(fp," %s ",&c2[i].sit);
   }
   fclose(fp);


   printf("\n\nChoice your bus : ");
   int n,m;
   scanf("%d",&n);
   switch(n){
   case 1:
   printf("your bus is Rozina enterprise\n");
   printf("if you select one sit plese press 1\nif you select two sit plese press 2\n");
   printf("if you select three sit plese press 3\nif you select four sit plese press 4\n ");
          scanf("%d",&m);
         switch(m){
   case 1:
   printf("Total economy %d",m*550);
   break;
   case 2:
   printf("Total economy %d",m*550);
   break;
   case 3:
   printf("Total economy %d",m*550);
   break;
   case 4:
   printf("Total economy %d",m*550);
   break;
   case 5:
   printf("You can not buy tickets more than 4 ");
    break;
       }
   break;
   case 2:
   printf("your bus is Hanif Enterprise and AC service\n");
      printf("if you select one sit plese press 1\nif you select two sit plese press 2\n");
   printf("if you select three sit plese press 3\nif you select four sit plese press 4\n ");
         scanf("%d",&m);
         switch(m){
   case 1:
   printf("Total economy %d",m*1050);
   break;
   case 2:
   printf("Total economy %d",m*1050);
   break;
   case 3:
   printf("Total economy %d",m*1050);
   break;
   case 4:
   printf("Total economy %d",m*1050);
   break;
   case 5:
   printf("You can not buy tickets more than 4 ");
   break;
       }

   break;
   case 3:
   printf("your bus is Nabil Enterprise\n");
      printf("if you select one sit plese press 1\nif you select two sit plese press 2\n");
   printf("if you select three sit plese press 3\nif you select four sit plese press 4\n ");
         scanf("%d",&m);
         switch(m){
   case 1:
   printf("Total economy %d",m*550);
   break;
   case 2:
   printf("Total economy %d",m*550);
   break;
   case 3:
   printf("Total economy %d",m*550);
   break;
   case 4:
   printf("Total economy %d",m*550);
   break;
   case 5:
   printf("You can not buy tickets more than 4 ");
   break;
       }

   break;
   case 4:
   printf("your bus is Nabil Enterprise and AC service\n");
      printf("if you select one sit plese press 1\nif you select two sit plese press 2\n");
   printf("if you select three sit plese press 3\nif you select four sit plese press 4\n ");
         scanf("%d",&m);
         switch(m){
   case 1:
   printf("Total economy %d",m*1050);
   break;
   case 2:
   printf("Total economy %d",m*1050);
   break;
   case 3:
   printf("Total economy %d",m*1050);
   break;
   case 4:
   printf("Total economy %d",m*1050);
   break;
   case 5:
   printf("You can not buy tickets more than 4 ");
   break;
       }


   break;
   case 5:
   printf("your bus is Hanif Enterprise\n");
      printf("if you select one sit plese press 1\nif you select two sit plese press 2\n");
   printf("if you select three sit plese press 3\nif you select four sit plese press 4\n ");
         scanf("%d",&m);
         switch(m){
   case 1:
   printf("Total economy %d",m*550);
   break;
   case 2:
   printf("Total economy %d",m*550);
   break;
   case 3:
   printf("Total economy %d",m*550);
   break;
   case 4:
   printf("Total economy %d",m*550);
   break;
   case 5:
   printf("You can not buy tickets more than 4 ");
   break;
       }

   break;
       }
                 printf("\n\n\t\t<<<<<<<<\t\tView seat\t\t>>>>>>>\n");


   fp=fopen("ticket.txt","r");
   for(i=0;i<36;i++){
   fscanf(fp," %s",&c2[i].sit);
   }
   for(i=0;i<36;i++){
   printf("| %s |\t",c2[i].sit);
   }
   printf("\n\tchoise your seat is\t:\t");
   scanf(" %[^\n]",&c2[i].sit);
   printf("\t\tyour sit is : %s\n",c2[i].sit);


        printf("please inter your name  : ");
        scanf(" %[^\n]",c1.name);
        printf("please inter your gender : ");
        scanf(" %[^\n]",c1.gender);
        printf("please inter your phone  : ");
        scanf(" %[^\n]",c1.number);

              fp=fopen("ticket.txt","w+");
              fprintf(fp,"\n\nName  : %s\n",c1.name);
              fprintf(fp,"Gender : %s\n",c1.gender);
              fprintf(fp,"phone : %s\n",c1.number);
              fp=fopen("ticket.txt","r+");
              fscanf(fp," %s",&c1.name);
              fscanf(fp," %s",&c1.gender);
              fscanf(fp," %s",&c1.number);



              printf("\n\nPassenger Details\nName : %s\nGender : %s\nPhone : %s\n\n",c1.name,c1.gender,c1.number);
                              fclose(fp);
              printf("\t\t\tJourney Details :\n\n");
                 printf("\t\t\t\t\t%s to %s\n",c1.from,c1.to);
            switch(n){
        case 1:
            printf("\t\t\t\t\tS.R Travels \n");
            break;
        case 2:
            printf("\t\t\t\t\t Hanif Enterprise \n");
            break;
        case 3:
            printf("\t\t\t\t\tNabil Poribohon \n");
            break;
        case 4:
            printf("\t\t\t\t\tNabil Poribohon\n");
            break;
        case 5:
            printf("\t\t\t\t\tHanif Enterprise \n");
            break;
            }
            printf("\t\t\t\t\t%s\n\t\t\t\t\tsit no %s\n:",c1.date,c2[i].sit);



    }
    else if(c1.from[0]=='d' && c1.to[0]=='l')
    {
   printf("1) Rozina Enterprise\t\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t550\n");
   printf(" Non AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n Lalmonirhat - Tushbh...\n\n");
   printf("2) Hanif Enterprise\t\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t1050\n");
   printf(" AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n Lalmonirhat - Tushbh...\n\n");
   printf("3) Nabil Paribahan\t\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t550\n");
   printf(" Non AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n Lalmonirhat - Tushbh...\n\n");
   printf("4) Nabil Paribahan\t\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t1050\n");
   printf("  AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n Lalmonirhat - Tushbh...\n\n");
   printf("5) Hanif Enterprise\t\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t550\n");
   printf(" Non AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n Lalmonirhat - Tushbh...\n");

   int i;


   printf("\n\nChoice your bus : ");
   int n,m;
   scanf("%d",&n);
   switch(n){
   case 1:
   printf("your bus is Rozina enterprise\n");
   printf("if you select one sit plese press 1\nif you select two sit plese press 2\n");
   printf("if you select three sit plese press 3\nif you select four sit plese press 4\n ");
          scanf("%d",&m);
         switch(m){
   case 1:
   printf("Total economy %d",m*550);
   break;
   case 2:
   printf("Total economy %d",m*550);
   break;
   case 3:
   printf("Total economy %d",m*550);
   break;
   case 4:
   printf("Total economy %d",m*550);
   break;
   case 5:
   printf("You can not buy tickets more than 4 ");
    break;
       }
   break;
   case 2:
   printf("your bus is Hanif Enterprise and AC service\n");
      printf("if you select one sit plese press 1\nif you select two sit plese press 2\n");
   printf("if you select three sit plese press 3\nif you select four sit plese press 4\n ");
         scanf("%d",&m);
         switch(m){
   case 1:
   printf("Total economy %d",m*1050);
   break;
   case 2:
   printf("Total economy %d",m*1050);
   break;
   case 3:
   printf("Total economy %d",m*1050);
   break;
   case 4:
   printf("Total economy %d",m*1050);
   break;
   case 5:
   printf("You can not buy tickets more than 4 ");
   break;
       }

   break;
   case 3:
   printf("your bus is Nabil Enterprise\n");
      printf("if you select one sit plese press 1\nif you select two sit plese press 2\n");
   printf("if you select three sit plese press 3\nif you select four sit plese press 4\n ");
         scanf("%d",&m);
         switch(m){
   case 1:
   printf("Total economy %d",m*550);
   break;
   case 2:
   printf("Total economy %d",m*550);
   break;
   case 3:
   printf("Total economy %d",m*550);
   break;
   case 4:
   printf("Total economy %d",m*550);
   break;
   case 5:
   printf("You can not buy tickets more than 4 ");
   break;
       }

   break;
   case 4:
   printf("your bus is Nabil Enterprise and AC service\n");
      printf("if you select one sit plese press 1\nif you select two sit plese press 2\n");
   printf("if you select three sit plese press 3\nif you select four sit plese press 4\n ");
         scanf("%d",&m);
         switch(m){
   case 1:
   printf("Total economy %d",m*1050);
   break;
   case 2:
   printf("Total economy %d",m*1050);
   break;
   case 3:
   printf("Total economy %d",m*1050);
   break;
   case 4:
   printf("Total economy %d",m*1050);
   break;
   case 5:
   printf("You can not buy tickets more than 4 ");
   break;
       }


   break;
   case 5:
   printf("your bus is Hanif Enterprise\n");
      printf("if you select one sit plese press 1\nif you select two sit plese press 2\n");
   printf("if you select three sit plese press 3\nif you select four sit plese press 4\n ");
         scanf("%d",&m);
         switch(m){
   case 1:
   printf("Total economy %d",m*550);
   break;
   case 2:
   printf("Total economy %d",m*550);
   break;
   case 3:
   printf("Total economy %d",m*550);
   break;
   case 4:
   printf("Total economy %d",m*550);
   break;
   case 5:
   printf("You can not buy tickets more than 4 ");
   break;
       }

   break;
       }
                 printf("\n\n\t\t<<<<<<<<\t\tView seat\t\t>>>>>>>\n");

    FILE *fp;
   fp=fopen("ticket.txt","r");
   for(i=0;i<36;i++){
   fscanf(fp," %s",&c2[i].sit);
   }
   for(i=0;i<36;i++){
   printf("| %s |\t",c2[i].sit);
   }
   printf("\n\tchoise your seat is\t:\t");
   scanf(" %[^\n]",&c2[i].sit);
   printf("\t\tyour sit is : %s\n",c2[i].sit);
    fclose(fp);

    }
    else if(c1.from[0]=='d' && c1.to[0]=='d')
    {
   printf("1) Nabil Paribahan\t\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t550\n");
   printf(" Non AC\n Route: Dhaka -- Dinajpur\n\n");
   printf("2) Hanif Enterprise\t\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t1050\n");
   printf(" AC\n Route: Dhaka -- dinajpur\n\n");
   printf("3) Ena Transport (Pvt) Ltd\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t550\n");
   printf(" Non AC\n Route: Dhaka --Dinajpur\n\n");
   printf("4) Nabil Paribahan\t\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t1050\n");
   printf("  AC\n Route: Dhaka -- Dinajpur\n\n");
   printf("5) Hanif Enterprise\t\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t550\n");
   printf(" Non AC\n Route: Dhaka -- Dinajpur\n");


   int i;

   printf("\n\nChoice your bus : ");
   int n,m;
   scanf("%d",&n);
   switch(n){
   case 1:
   printf("your bus is Rozina enterprise\n");
   printf("if you select one sit plese press 1\nif you select two sit plese press 2\n");
   printf("if you select three sit plese press 3\nif you select four sit plese press 4\n ");
          scanf("%d",&m);
         switch(m){
   case 1:
   printf("Total economy %d",m*550);
   break;
   case 2:
   printf("Total economy %d",m*550);
   break;
   case 3:
   printf("Total economy %d",m*550);
   break;
   case 4:
   printf("Total economy %d",m*550);
   break;
   case 5:
   printf("You can not buy tickets more than 4 ");
    break;
       }
   break;
   case 2:
   printf("your bus is Hanif Enterprise and AC service\n");
      printf("if you select one sit plese press 1\nif you select two sit plese press 2\n");
   printf("if you select three sit plese press 3\nif you select four sit plese press 4\n ");
         scanf("%d",&m);
         switch(m){
   case 1:
   printf("Total economy %d",m*1050);
   break;
   case 2:
   printf("Total economy %d",m*1050);
   break;
   case 3:
   printf("Total economy %d",m*1050);
   break;
   case 4:
   printf("Total economy %d",m*1050);
   break;
   case 5:
   printf("You can not buy tickets more than 4 ");
   break;
       }

   break;
   case 3:
   printf("your bus is Nabil Enterprise\n");
      printf("if you select one sit plese press 1\nif you select two sit plese press 2\n");
   printf("if you select three sit plese press 3\nif you select four sit plese press 4\n ");
         scanf("%d",&m);
         switch(m){
   case 1:
   printf("Total economy %d",m*550);
   break;
   case 2:
   printf("Total economy %d",m*550);
   break;
   case 3:
   printf("Total economy %d",m*550);
   break;
   case 4:
   printf("Total economy %d",m*550);
   break;
   case 5:
   printf("You can not buy tickets more than 4 ");
   break;
       }

   break;
   case 4:
   printf("your bus is Nabil Enterprise and AC service\n");
      printf("if you select one sit plese press 1\nif you select two sit plese press 2\n");
   printf("if you select three sit plese press 3\nif you select four sit plese press 4\n ");
         scanf("%d",&m);
         switch(m){
   case 1:
   printf("Total economy %d",m*1050);
   break;
   case 2:
   printf("Total economy %d",m*1050);
   break;
   case 3:
   printf("Total economy %d",m*1050);
   break;
   case 4:
   printf("Total economy %d",m*1050);
   break;
   case 5:
   printf("You can not buy tickets more than 4 ");
   break;
       }


   break;
   case 5:
   printf("your bus is Hanif Enterprise\n");
      printf("if you select one sit plese press 1\nif you select two sit plese press 2\n");
   printf("if you select three sit plese press 3\nif you select four sit plese press 4\n ");
         scanf("%d",&m);
         switch(m){
   case 1:
   printf("Total economy %d",m*550);
   break;
   case 2:
   printf("Total economy %d",m*550);
   break;
   case 3:
   printf("Total economy %d",m*550);
   break;
   case 4:
   printf("Total economy %d",m*550);
   break;
   case 5:
   printf("You can not buy tickets more than 4 ");
   break;
       }

   break;
       }
                 printf("\n\n\t\t<<<<<<<<\t\tView seat\t\t>>>>>>>\n");

    FILE *fp;
   fp=fopen("ticket.txt","r");
   for(i=0;i<36;i++){
   fscanf(fp," %s",&c2[i].sit);
   }
   for(i=0;i<36;i++){
   printf("| %s |\t",c2[i].sit);
   }
   printf("\n\tchoise your seat is\t:\t");
   scanf(" %[^\n]",&c2[i].sit);
   printf("\t\tyour sit is : %s\n",c2[i].sit);
    fclose(fp);

    }
    else if(c1.from[0]=='d' && c1.to[0]=='g')
    {
   printf("1) S.R Travels (Pvt) Ltd\t\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t550\n");
   printf(" Non AC\n Route: Dhaka - Bogra -\n Gaibandha\n\n");
   printf("2) S.R Travels (Pvt) Ltd\t\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t1050\n");
   printf(" AC\n Route: Dhaka - Bogra -\n Gaibandha\n\n");
   printf("3) Nabil Paribahan\t\t\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t550\n");
   printf(" Non AC\n Route: Dhaka - Bogra -\n Gaibandha\n\n");
   printf("4) Nabil Paribahan\t\t\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t1050\n");
   printf("  AC\n Route: Dhaka - Bogra -\n Gaibandha\n\n");
   printf("5) Hanif Enterprise\t\t\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t550\n");
   printf(" Non AC\n Route: Dhaka - Bogra -\n Gaibandha\n");

   int i;


   printf("\n\nChoice your bus : ");
   int n,m;
   scanf("%d",&n);
   switch(n){
   case 1:
   printf("your bus is Rozina enterprise\n");
   printf("if you select one sit plese press 1\nif you select two sit plese press 2\n");
   printf("if you select three sit plese press 3\nif you select four sit plese press 4\n ");
          scanf("%d",&m);
         switch(m){
   case 1:
   printf("Total economy %d",m*550);
   break;
   case 2:
   printf("Total economy %d",m*550);
   break;
   case 3:
   printf("Total economy %d",m*550);
   break;
   case 4:
   printf("Total economy %d",m*550);
   break;
   case 5:
   printf("You can not buy tickets more than 4 ");
    break;
       }
   break;
   case 2:
   printf("your bus is Hanif Enterprise and AC service\n");
      printf("if you select one sit plese press 1\nif you select two sit plese press 2\n");
   printf("if you select three sit plese press 3\nif you select four sit plese press 4\n ");
         scanf("%d",&m);
         switch(m){
   case 1:
   printf("Total economy %d",m*1050);
   break;
   case 2:
   printf("Total economy %d",m*1050);
   break;
   case 3:
   printf("Total economy %d",m*1050);
   break;
   case 4:
   printf("Total economy %d",m*1050);
   break;
   case 5:
   printf("You can not buy tickets more than 4 ");
   break;
       }

   break;
   case 3:
   printf("your bus is Nabil Enterprise\n");
      printf("if you select one sit plese press 1\nif you select two sit plese press 2\n");
   printf("if you select three sit plese press 3\nif you select four sit plese press 4\n ");
         scanf("%d",&m);
         switch(m){
   case 1:
   printf("Total economy %d",m*550);
   break;
   case 2:
   printf("Total economy %d",m*550);
   break;
   case 3:
   printf("Total economy %d",m*550);
   break;
   case 4:
   printf("Total economy %d",m*550);
   break;
   case 5:
   printf("You can not buy tickets more than 4 ");
   break;
       }

   break;
   case 4:
   printf("your bus is Nabil Enterprise and AC service\n");
      printf("if you select one sit plese press 1\nif you select two sit plese press 2\n");
   printf("if you select three sit plese press 3\nif you select four sit plese press 4\n ");
         scanf("%d",&m);
         switch(m){
   case 1:
   printf("Total economy %d",m*1050);
   break;
   case 2:
   printf("Total economy %d",m*1050);
   break;
   case 3:
   printf("Total economy %d",m*1050);
   break;
   case 4:
   printf("Total economy %d",m*1050);
   break;
   case 5:
   printf("You can not buy tickets more than 4 ");
   break;
       }


   break;
   case 5:
   printf("your bus is Hanif Enterprise\n");
      printf("if you select one sit plese press 1\nif you select two sit plese press 2\n");
   printf("if you select three sit plese press 3\nif you select four sit plese press 4\n ");
         scanf("%d",&m);
         switch(m){
   case 1:
   printf("Total economy %d",m*550);
   break;
   case 2:
   printf("Total economy %d",m*550);
   break;
   case 3:
   printf("Total economy %d",m*550);
   break;
   case 4:
   printf("Total economy %d",m*550);
   break;
   case 5:
   printf("You can not buy tickets more than 4 ");
   break;
       }

   break;
       }
                 printf("\n\n\t\t<<<<<<<<\t\tView seat\t\t>>>>>>>\n");

    FILE *fp;
   fp=fopen("ticket.txt","r");
   for(i=0;i<36;i++){
   fscanf(fp," %s",&c2[i].sit);
   }
   for(i=0;i<36;i++){
   printf("| %s |\t",c2[i].sit);
   }
   printf("\n\tchoise your seat is\t:\t");
   scanf(" %[^\n]",&c2[i].sit);
   printf("\t\tyour sit is : %s\n",c2[i].sit);
    fclose(fp);

    }
       else if(c1.from[0]=='d' && c1.to[0]=='n')
    {
   printf("1) S.R Travels (Pvt) Ltd\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t550\n");
   printf(" Non AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n Nilphamari\n\n");
   printf("2) Hanif Enterprise\t\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t1050\n");
   printf(" AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n Nilphamari\n\n");
   printf("3) Nabil Paribahan\t\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t550\n");
   printf(" Non AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n Nilphamari\n\n");
   printf("4) Nabil Paribahan\t\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t1050\n");
   printf("  AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n Nilphamari\n\n");
   printf("5) Hanif Enterprise\t\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t550\n");
   printf(" Non AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n Nilphamari\n");

   int i;


   printf("\n\nChoice your bus : ");
   int n,m;
   scanf("%d",&n);
   switch(n){
   case 1:
   printf("your bus is Rozina enterprise\n");
   printf("if you select one sit plese press 1\nif you select two sit plese press 2\n");
   printf("if you select three sit plese press 3\nif you select four sit plese press 4\n ");
          scanf("%d",&m);
         switch(m){
   case 1:
   printf("Total economy %d",m*550);
   break;
   case 2:
   printf("Total economy %d",m*550);
   break;
   case 3:
   printf("Total economy %d",m*550);
   break;
   case 4:
   printf("Total economy %d",m*550);
   break;
   case 5:
   printf("You can not buy tickets more than 4 ");
    break;
       }
   break;
   case 2:
   printf("your bus is Hanif Enterprise and AC service\n");
      printf("if you select one sit plese press 1\nif you select two sit plese press 2\n");
   printf("if you select three sit plese press 3\nif you select four sit plese press 4\n ");
         scanf("%d",&m);
         switch(m){
   case 1:
   printf("Total economy %d",m*1050);
   break;
   case 2:
   printf("Total economy %d",m*1050);
   break;
   case 3:
   printf("Total economy %d",m*1050);
   break;
   case 4:
   printf("Total economy %d",m*1050);
   break;
   case 5:
   printf("You can not buy tickets more than 4 ");
   break;
       }

   break;
   case 3:
   printf("your bus is Nabil Enterprise\n");
      printf("if you select one sit plese press 1\nif you select two sit plese press 2\n");
   printf("if you select three sit plese press 3\nif you select four sit plese press 4\n ");
         scanf("%d",&m);
         switch(m){
   case 1:
   printf("Total economy %d",m*550);
   break;
   case 2:
   printf("Total economy %d",m*550);
   break;
   case 3:
   printf("Total economy %d",m*550);
   break;
   case 4:
   printf("Total economy %d",m*550);
   break;
   case 5:
   printf("You can not buy tickets more than 4 ");
   break;
       }

   break;
   case 4:
   printf("your bus is Nabil Enterprise and AC service\n");
      printf("if you select one sit plese press 1\nif you select two sit plese press 2\n");
   printf("if you select three sit plese press 3\nif you select four sit plese press 4\n ");
         scanf("%d",&m);
         switch(m){
   case 1:
   printf("Total economy %d",m*1050);
   break;
   case 2:
   printf("Total economy %d",m*1050);
   break;
   case 3:
   printf("Total economy %d",m*1050);
   break;
   case 4:
   printf("Total economy %d",m*1050);
   break;
   case 5:
   printf("You can not buy tickets more than 4 ");
   break;
       }


   break;
   case 5:
   printf("your bus is Hanif Enterprise\n");
      printf("if you select one sit plese press 1\nif you select two sit plese press 2\n");
   printf("if you select three sit plese press 3\nif you select four sit plese press 4\n ");
         scanf("%d",&m);
         switch(m){
   case 1:
   printf("Total economy %d",m*550);
   break;
   case 2:
   printf("Total economy %d",m*550);
   break;
   case 3:
   printf("Total economy %d",m*550);
   break;
   case 4:
   printf("Total economy %d",m*550);
   break;
   case 5:
   printf("You can not buy tickets more than 4 ");
   break;
       }

   break;
       }
                 printf("\n\n\t\t<<<<<<<<\t\tView seat\t\t>>>>>>>\n");

    FILE *fp;
   fp=fopen("ticket.txt","r");
   for(i=0;i<36;i++){
   fscanf(fp," %s",&c2[i].sit);
   }
   for(i=0;i<36;i++){
   printf("| %s |\t",c2[i].sit);
   }
   printf("\n\tchoise your seat is\t:\t");
   scanf(" %[^\n]",&c2[i].sit);
   printf("\t\tyour sit is : %s\n",c2[i].sit);
    fclose(fp);

    }
           else if(c1.from[0]=='d' && c1.to[0]=='p')
    {
   printf("1) S.R Travels (Pvt) Ltd\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t550\n");
   printf(" Non AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n  Panchagarh\n\n");
   printf("2) Hanif Enterprise\t\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t1050\n");
   printf(" AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n  Panchagarh\n\n");
   printf("3) Nabil Paribahan\t\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t550\n");
   printf(" Non AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n  Panchagarh\n\n");
   printf("4) Nabil Paribahan\t\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t1050\n");
   printf("  AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n  Panchagarh\n\n");
   printf("5) Hanif Enterprise\t\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t550\n");
   printf(" Non AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n  Panchagarh\n");

   int i;


   printf("\n\nChoice your bus : ");
   int n,m;
   scanf("%d",&n);
   switch(n){
   case 1:
   printf("your bus is Rozina enterprise\n");
   printf("if you select one sit plese press 1\nif you select two sit plese press 2\n");
   printf("if you select three sit plese press 3\nif you select four sit plese press 4\n ");
          scanf("%d",&m);
         switch(m){
   case 1:
   printf("Total economy %d",m*550);
   break;
   case 2:
   printf("Total economy %d",m*550);
   break;
   case 3:
   printf("Total economy %d",m*550);
   break;
   case 4:
   printf("Total economy %d",m*550);
   break;
   case 5:
   printf("You can not buy tickets more than 4 ");
    break;
       }
   break;
   case 2:
   printf("your bus is Hanif Enterprise and AC service\n");
      printf("if you select one sit plese press 1\nif you select two sit plese press 2\n");
   printf("if you select three sit plese press 3\nif you select four sit plese press 4\n ");
         scanf("%d",&m);
         switch(m){
   case 1:
   printf("Total economy %d",m*1050);
   break;
   case 2:
   printf("Total economy %d",m*1050);
   break;
   case 3:
   printf("Total economy %d",m*1050);
   break;
   case 4:
   printf("Total economy %d",m*1050);
   break;
   case 5:
   printf("You can not buy tickets more than 4 ");
   break;
       }

   break;
   case 3:
   printf("your bus is Nabil Enterprise\n");
      printf("if you select one sit plese press 1\nif you select two sit plese press 2\n");
   printf("if you select three sit plese press 3\nif you select four sit plese press 4\n ");
         scanf("%d",&m);
         switch(m){
   case 1:
   printf("Total economy %d",m*550);
   break;
   case 2:
   printf("Total economy %d",m*550);
   break;
   case 3:
   printf("Total economy %d",m*550);
   break;
   case 4:
   printf("Total economy %d",m*550);
   break;
   case 5:
   printf("You can not buy tickets more than 4 ");
   break;
       }

   break;
   case 4:
   printf("your bus is Nabil Enterprise and AC service\n");
      printf("if you select one sit plese press 1\nif you select two sit plese press 2\n");
   printf("if you select three sit plese press 3\nif you select four sit plese press 4\n ");
         scanf("%d",&m);
         switch(m){
   case 1:
   printf("Total economy %d",m*1050);
   break;
   case 2:
   printf("Total economy %d",m*1050);
   break;
   case 3:
   printf("Total economy %d",m*1050);
   break;
   case 4:
   printf("Total economy %d",m*1050);
   break;
   case 5:
   printf("You can not buy tickets more than 4 ");
   break;
       }


   break;
   case 5:
   printf("your bus is Hanif Enterprise\n");
      printf("if you select one sit plese press 1\nif you select two sit plese press 2\n");
   printf("if you select three sit plese press 3\nif you select four sit plese press 4\n ");
         scanf("%d",&m);
         switch(m){
   case 1:
   printf("Total economy %d",m*550);
   break;
   case 2:
   printf("Total economy %d",m*550);
   break;
   case 3:
   printf("Total economy %d",m*550);
   break;
   case 4:
   printf("Total economy %d",m*550);
   break;
   case 5:
   printf("You can not buy tickets more than 4 ");
   break;
       }

   break;
       }
                 printf("\n\n\t\t<<<<<<<<\t\tView seat\t\t>>>>>>>\n");

    FILE *fp;
   fp=fopen("ticket.txt","r");
   for(i=0;i<36;i++){
   fscanf(fp," %s",&c2[i].sit);
   }
   for(i=0;i<36;i++){
   printf("| %s |\t",c2[i].sit);
   }
   printf("\n\tchoise your seat is\t:\t");
   scanf(" %[^\n]",&c2[i].sit);
   printf("\t\tyour sit is : %s\n",c2[i].sit);
    fclose(fp);

    }
               else if(c1.from[0]=='d' && c1.to[0]=='t')
    {
   printf("1) S.R Travels (Pvt) Ltd\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t550\n");
   printf(" Non AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n Thakurgaon\n\n");
   printf("2) Hanif Enterprise\t\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t1050\n");
   printf(" AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n  Thakurgaon\n\n");
   printf("3) Nabil Paribahan\t\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t550\n");
   printf(" Non AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n  Thakurgaon\n\n");
   printf("4) Nabil Paribahan\t\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t1050\n");
   printf("  AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n Thakurgaon\n\n");
   printf("5) Hanif Enterprise\t\t8:00PM\t\t\t8:00AM\t\t\t30\t\t\t550\n");
   printf(" Non AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n Thakurgaon\n");

   int i;


   printf("\n\nChoice your bus : ");
   int n,m;
   scanf("%d",&n);
   switch(n){
   case 1:
   printf("your bus is Rozina enterprise\n");
   printf("if you select one sit plese press 1\nif you select two sit plese press 2\n");
   printf("if you select three sit plese press 3\nif you select four sit plese press 4\n ");
          scanf("%d",&m);
         switch(m){
   case 1:
   printf("Total economy %d",m*550);
   break;
   case 2:
   printf("Total economy %d",m*550);
   break;
   case 3:
   printf("Total economy %d",m*550);
   break;
   case 4:
   printf("Total economy %d",m*550);
   break;
   case 5:
   printf("You can not buy tickets more than 4 ");
    break;
       }
   break;
   case 2:
   printf("your bus is Hanif Enterprise and AC service\n");
      printf("if you select one sit plese press 1\nif you select two sit plese press 2\n");
   printf("if you select three sit plese press 3\nif you select four sit plese press 4\n ");
         scanf("%d",&m);
         switch(m){
   case 1:
   printf("Total economy %d",m*1050);
   break;
   case 2:
   printf("Total economy %d",m*1050);
   break;
   case 3:
   printf("Total economy %d",m*1050);
   break;
   case 4:
   printf("Total economy %d",m*1050);
   break;
   case 5:
   printf("You can not buy tickets more than 4 ");
   break;
       }

   break;
   case 3:
   printf("your bus is Nabil Enterprise\n");
      printf("if you select one sit plese press 1\nif you select two sit plese press 2\n");
   printf("if you select three sit plese press 3\nif you select four sit plese press 4\n ");
         scanf("%d",&m);
         switch(m){
   case 1:
   printf("Total economy %d",m*550);
   break;
   case 2:
   printf("Total economy %d",m*550);
   break;
   case 3:
   printf("Total economy %d",m*550);
   break;
   case 4:
   printf("Total economy %d",m*550);
   break;
   case 5:
   printf("You can not buy tickets more than 4 ");
   break;
       }

   break;
   case 4:
   printf("your bus is Nabil Enterprise and AC service\n");
      printf("if you select one sit plese press 1\nif you select two sit plese press 2\n");
   printf("if you select three sit plese press 3\nif you select four sit plese press 4\n ");
         scanf("%d",&m);
         switch(m){
   case 1:
   printf("Total economy %d",m*1050);
   break;
   case 2:
   printf("Total economy %d",m*1050);
   break;
   case 3:
   printf("Total economy %d",m*1050);
   break;
   case 4:
   printf("Total economy %d",m*1050);
   break;
   case 5:
   printf("You can not buy tickets more than 4 ");
   break;
       }


   break;
   case 5:
   printf("your bus is Hanif Enterprise\n");
      printf("if you select one sit plese press 1\nif you select two sit plese press 2\n");
   printf("if you select three sit plese press 3\nif you select four sit plese press 4\n ");
         scanf("%d",&m);
         switch(m){
   case 1:
   printf("Total economy %d",m*550);
   break;
   case 2:
   printf("Total economy %d",m*550);
   break;
   case 3:
   printf("Total economy %d",m*550);
   break;
   case 4:
   printf("Total economy %d",m*550);
   break;
   case 5:
   printf("You can not buy tickets more than 4 ");
   break;
       }

   break;
       }
                 printf("\n\n\t\t<<<<<<<<\t\tView seat\t\t>>>>>>>\n");

    FILE *fp;
   fp=fopen("ticket.txt","r");
   for(i=0;i<36;i++){
   fscanf(fp," %s",&c2[i].sit);
   }
   for(i=0;i<36;i++){
   printf("| %s |\t",c2[i].sit);
   }
   printf("\n\tchoise your seat is\t:\t");
   scanf(" %[^\n]",&c2[i].sit);
   printf("\t\tyour sit is : %s\n",c2[i].sit);
    fclose(fp);

    }
    else
    printf(" \n\n There is no bus from %s to %s",c1.from,c1.to);
return 0;
}
