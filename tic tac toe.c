#include<stdio.h>
#include<stdlib.h>
void main()
{
    char a[9]={'0','1','2','3','4','5','6','7','8'};
    int option,ply,ans;
    int i,n,turnx=0,turno=0;
    int winning_condition(char []);


    printf("\t\t\t\t\tTIC TAC TOE\n");
    printf("1.PLAYER 1\n2.PLAYER 2\n");
    scanf("%d",&option);
    switch(option)
    {
    case 1: printf("3.X\n4.O\n");
            scanf("%d",&ply);

               switch(ply)
               {
               case 3:printf("\nplayer1=X\n");
                      break;
               case 4:printf("\nplayer1=O\n");
                      break;
               }
             break;

    case 2:printf("\n5.X\n6.O\n");
           scanf("%d",&ply);

               switch(ply)
               {
               case 5:printf("\nplayer2=X\n");break;
               case 6:printf("\nplayer2=O\n");break;
               }
               break;
    }

      printf("\t\t\t\t\t %c     |  %c       |   %c \n",a[0],a[1],a[2]);
      printf("\t\t\t\t\t-------|----------|----------\n");
      printf("\t\t\t\t\t %c     |  %c       |   %c \n",a[3],a[4],a[5]);
      printf("\t\t\t\t\t-------|----------|----------\n");
      printf("\t\t\t\t\t %c     |  %c       |   %c \n",a[6],a[7],a[8]);

      for(i=0;i<9;i++)
      {
          if(i%2==0)
          {
            printf("ENTER YOUR CHOICE X: ");
            scanf("%d",&n);
            system("CLS");
            if(a[n]!='X' && a[n]!='O')


            a[n]='X';
            turnx++;
            printf("\t\t\t\t\t %c     |  %c       |   %c \n",a[0],a[1],a[2]);
            printf("\t\t\t\t\t-------|----------|----------\n");
            printf("\t\t\t\t\t %c     |  %c       |   %c \n",a[3],a[4],a[5]);
            printf("\t\t\t\t\t-------|----------|----------\n");
            printf("\t\t\t\t\t %c     |  %c       |   %c \n",a[6],a[7],a[8]);
            printf("%d\n",turnx);


             if(turnx>2)
             {
                ans=winning_condition(a);
                if(ans==1){printf("\t\t\t\t\tX WINS",option);
                break;}
             }

          }

            else
            {
                printf("ENTER YOUR CHOICE O: ");
                scanf("%d",&n);
                system("CLS");
                 if(a[n]!='X' && a[n]!='O')

                 a[n]='O';
                 turno++;
                 printf("\t\t\t\t\t %c     |  %c       |   %c \n",a[0],a[1],a[2]);
                 printf("\t\t\t\t\t-------|----------|----------\n");
                 printf("\t\t\t\t\t %c     |  %c       |   %c \n",a[3],a[4],a[5]);
                 printf("\t\t\t\t\t-------|----------|----------\n");
                 printf("\t\t\t\t\t %c     |  %c       |   %c \n",a[6],a[7],a[8]);
                    printf("%d\n",turnx);
                  if(turno>2)
              {
                ans=winning_condition(a);
                if(ans==1){printf("\t\t\t\t\tO WINS",option);
                break;}
              }

        }


      }
      ans=winning_condition(a);
      if(ans==0)printf("\t\t\t\t\tGAME DRAW");

}
int winning_condition(char a[])
{
    if(a[0]==a[1]&&a[0]==a[2]&&a[1]==a[2])
        return 1;
    else
        if(a[0]==a[3]&&a[0]==a[6]&&a[3]==a[6])
        return 1;
    else
        if(a[0]==a[4]&&a[0]==a[8]&&a[4]==a[8])
        return 1;
    else
        if(a[1]==a[4]&&a[1]==a[7]&&a[4]==a[7])
        return 1;
    else
        if(a[2]==a[5]&&a[5]==a[8]&&a[2]==a[8])
        return 1;
    else
        if(a[3]==a[4]&&a[3]==a[5]&&a[4]==a[5])
        return 1;
    else
        if(a[6]==a[7]&&a[6]==a[8]&&a[7]==a[8])
        return 1;
    else
        if(a[2]==a[4]&&a[2]==a[6]&&a[4]==a[6])
        return 1;
    else return 0;

}
