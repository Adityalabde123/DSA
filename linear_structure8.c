struct student
{
   int rno;
   char name[20];
   int per;
}s1[100];
int main()
{
	int i,n,nm,num;
   int ch;
   do
   {
      printf("\n 1-accept \n 2-disp All \n 3-sear by no \n 4-search by name \n 5-MAx per \n 6-Average per \n Enter choice:");
      scanf("%d",&ch);
      switch(ch)
      {
         case 1:accept(); break;
         case 2:dispAll(); break;
         case 3:printf("Enter number to search:");
                     scanf("%d",&num);
                     searchbyno(num);
                     break;
         case 4:printf("Enter name to search:");
                     scanf("%s",&nm);
                     searchbyname(nm);
                     break;
         case 5: disp_max(); break;
         case 6: disp_avg_per(); break;
         default: printf("\n Invalid Choice.....");
      }
   }while(ch<7);
  getch();

void accept()
{
  printf("Enter limit:");
  scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       printf("ENter rollno name per:");
       scanf("%d%s%d",&s1[i].rno,&s1[i].name,&s1[i].per);
   }  
}
void disp()
{
   for(i=0;i<n;i++)
   {
       printf("\n Roll no=%d",s1[i].rno);
       printf("\n Name=%s",s1[i].name);
       printf("\n Per=%d",s1[i].per);  
   }
}






}

























