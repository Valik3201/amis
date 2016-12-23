#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 typedef struct abit_info {
     char first_name[25];
     char last_name[25];
     int age;
	 char subjects[25];
     float result_zno;
   }abit_info;
   
int get_integer(){
    int integer;
    while(scanf("%d",&integer) != 1)
        {
            printf("Ошибка! Повторите еще раз: ");
        }
    return integer;
    }
	
int get_float(){
    float f;
    while(scanf("%d",&f) != 1)
        {
            printf("Ошибка! Повторите еще раз: ");
        }
    return f;
    }

char *get_string() 
{	
   int i=0;
   int flag=1;
   char str[25];
   scanf("%s", str);
   while (strlen(str)>25)) 
   {
     if(strlen(str)>25) printf("Ошибка! Много символов! Повторите еще раз: ");
	 flag=0;
   }
    
	for(i=0;i<strlen(str);i++)
	{		if( !(str[i]>='a' && stri[i]<='z') || (str[i]>='A' && str[i]<='Z'))
		{
			printf("%c не буква!",c);
			flag=0;	
		}	
	}
	if (!flag) return get_string();
	if (flag) return str;
   
    return str;
}

