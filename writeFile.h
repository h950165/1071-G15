void writefFile(Lotto lottos[])
{
  int choice;
  char  filename[80];
  printf("=>") ;
  scanf("%d", &choice);
  printf("\n");
  switch(choice)
		{
		 case  1:
		   randgen(lottos);
           showLottos(lottos,counter);
           writefFile(lottos) ;
		   break;
        case   3:
            printf("Enter filename: ");
            scanf("%s",filename);

            fp=fopen(filename, "w");


            for(int  i=0;i<counter;i++)
            {
              fprintf(fp,"%d/%02d/%02d %s   \n", lottos[i].date.year, lottos[i].date.month, lottos[i].date.day ,lottos[i].str  );
            }

            fclose(fp);

            printf("%s Calendar data written to file Calendar.txt successfully\n",filename);

            break;
		}

}
