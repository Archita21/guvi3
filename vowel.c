 #include<stdio.h>
int main()
{
    int a,b,c;
  
 printf("enter three no");
 scanf("%d%d%d",&a,&b,&c);
 
 if((a>b&&a>c)||(b>a&&b>c)||(c>a&&c>b))
 {
  printf("largest no");
}
return 0;
}           