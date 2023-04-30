#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    char gram[20],part1[20],part2[20],mg[20],ng[20],tg[20];
    int i,j=0,k=0,l=0,pos;
    printf("Enter Production : A->");
    scanf("%s",gram);
    for(i=0;gram[i]!='|';i++,j++)
       part1[j]=gram[i];
    part1[j]='\0';
    for(j=++i,i=0;gram[j]!='\0';j++,i++)
           part2[i]=gram[j];
    part2[i]='\0';
    for(i=0;i<strlen(part1)||i<strlen(part2);i++)
    {
        if(part1[i]==part2[i]){
          mg[k]=part1[i];
          k++;
          pos=i+1;
        }
    }
    for(i=pos,j=0;part1[i]!='\0';i++,j++)
       ng[j]=part1[i];
    ng[j++]='|';
    for(i=pos;part2[i]!='\0';i++,j++)
        ng[j]=part2[i];    
    mg[k]='X';
    mg[++k]='\0';
    ng[j]='\0';
    printf("\n Gramar witout Left Factoring :\n");
    printf("A->%s",mg);
    printf("\n X-> %s\n",ng);
}
