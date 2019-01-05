void randgen(Lotto lottos[])
{


    char str[500];

     //lottos[counter].date.year ;
     //lottos[counter].date.month  ;
     //lottos[counter].date.day ;
     while(1)
    {
     printf("Enter year:  ");
     scanf("%d",&lottos[counter].date.year );

     printf("Enter month:  ");
     scanf("%d",&lottos[counter].date.month );

     printf("Enter day:  ");
     scanf("%d",&lottos[counter].date.day );

     printf("Thing:  ");
     scanf("%s",lottos[counter].str );

     printf("\n");
     counter++;
     break;
     }



}
