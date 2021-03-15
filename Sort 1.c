#include <stdio.h>
#include <string.h>

int main()
{
    char temp[50];
    int a;
    scanf("%d",&a);
    char str[a][50];

   for (int i = 0; i <= a; ++i)
    {
      fgets(str[i], sizeof(str[i]), stdin);
    }


   for (int i = 0; i <= a; ++i)
    {
      for (int j = i + 1; j <= a; ++j)
      {


         if (strcmp(str[i], str[j]) > 0)
        {
            strcpy(temp, str[i]);
            strcpy(str[i], str[j]);
            strcpy(str[j], temp);
        }
      }
   }


   for (int i = 0; i <= a; ++i)
    {
      fputs(str[i], stdout);
    }
   return 0;
}
