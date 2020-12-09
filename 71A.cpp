#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   unsigned int l;
   char s[100];
   scanf("%d",&n);
   while(n)
   {
       scanf("%s",&s);
       l=strlen(s);
       //printf("%d",l);
       if(l>10)
       {
           printf("%c%d%c\n",s[0],l-2,s[l-1]);
       }
       else
        printf("%s\n",s);
       n--;
   }
    return 0;

}
