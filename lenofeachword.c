 #include<stdio.h>
 #define max 300
 int main()
 {
    char c, a[max];
    int i=0,i1, word=0,c_len;
    int b[max],cnt=0,j=0;
    while((c=getchar())!=EOF)
    {
        a[i]=c;
        i++;
    }
    a[i]='\0'; 
    c_len=i;
    for(i1=0;a[i1]!='\0';i1++)
    {
        if((a[i1]==' ' && a[i1+1]!=' ') || (a[i1]=='\n' && a[i1+1]!=' ') || (a[i1]=='\t' && a[i1+1]!=' '))
        {
            word++;
        }
    }
    int j1;
    for(j1=0;j1<c_len;j1++)
    {   
        if(a[j1]!=' ' && a[j1]!='\n' && a[j1]!='\t')
        {  
            cnt++;
        }
        else if(a[j1]==' ' && a[j1+1]!=' ' || a[j1]=='\n' && a[j1+1]!=' ' || a[j1]=='\t' && a[j1+1]!=' ')
        {
            b[j++]=cnt;
          //  printf("\n count=%d", cnt);
            cnt=0;
        }
       // printf("\n count=%d", cnt);
        //  printf("\n j1=%d", j1);
      //  b[j++]=cnt;
    }
    printf("\ncharacter_count=%d", c_len);
     printf("\nword_count=%d", word);
   //  printf("\nj=%d", j);
    // printf("\ncount=%d", cnt);
     for(int j2=0;j2<j;j2++)
     {
         printf("\nlength of word [%d],  %d\t", j2+1,b[j2]);
     }
    return 0;
 }
 


 