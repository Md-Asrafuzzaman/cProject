#include<stdio.h>

int main()
{
       char dhaka,lalmoni;
    struct city{
    char from[30];
    char to[30];
    char date[30];
};
    struct city c1;
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
   printf(" Rozina Enterprise\t\t8:00PM\t\t\t8:00AM\t\t\t45\t\t\t500\n");
   printf(" Non AC\n Route: Dhaka - Bogra -\n Gobindaganj - Rangpur - \n Lalmonirhat - Tushbh...\n\n\t\t<<<<<<<<\tView seat\t>>>>>>>\n");
   printf("\t\t\t_________\t_________\n\t\t\t A1 | A2\tA3 | A4\n\t\t\t_________\t_________\n\t\t\t B1 | B2\tB3 | B4\n\t\t\t_________\t_________\n\t\t\t C1 | C2\tC3 | C4\n\t\t\t_________\t_________\n\t\t\t D1 | D2\tD3 | D4\n\t\t\t___________\t_________\n\t\t\t E1 | E2\tE3 |E4\n\t\t\t_________\t_________\n\t\t\t F1 | F2\tF3 |F4\n\t\t\t_________\t_________\n\n");
      char i;
   printf("\nyour seat is\t:\t ");
   scanf(" %[^\n]",&i);

return 0;
}
