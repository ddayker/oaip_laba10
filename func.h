#include <stdio.h>
#include <string.h>
#include <locale.h>

char s[100], str[100];

void zad1(void)
{
    printf("Введите строку:\n");
    getchar();
    gets(s);
    for(int i=0;s[i]!='\0';i++){
        if (s[i]=='a') s[i]='b';
        if (s[i]=='A') s[i]='B';
    }
    puts(s);
}

void zad5(void)
{
    int i;
    printf("Введите строку:\n");
    getchar();
    gets(s);
    for(i=0;s[i]!='.';i++){
        if (s[i]=='\0') break;
    }
    if(s[i]=='.') strcpy(s+i, ".exe");
    else strcat(s+i, ".exe");
    printf("Результат:\n");
    puts(s);

}

void zad4(void)
{
    printf("Введите строку:\n");
    getchar();
    gets(s);
    printf("Слова:\n");
    for (int i = 0; i < strlen(s); i++){
        if (s[i] != ' ' && s[i]!='\0')
            printf("%c",s[i]);
        else printf("\n");}

}

void zad8(void)
{
    printf("Введите строку: ");
    getchar();
    gets(s);
    
    char c;

    for (int i = 0; i < strlen(s)-1; i+=2)
    {
        c = s[i];
        s[i] = s[i + 1];
        s[i + 1] = c;
    }

    printf("Итоговая строка: ");
    puts(s);
}

void zad2(void)
{
    printf("Введите строку: ");
    getchar();
    gets(s);
    int i=0;
for(i=(int)strlen(s)-1; i>=0; i--)
{
    if(s[i]!=' '){
        if((s[i]>64 && s[i]<91))str[i]=s[i]+32;
        else str[i]=s[i];
    }
}
int n=(int)strlen(str);
for(i=0;i<n/2;i++)
if (str[i]!=str[n-1-i])
{
    puts("Не палиндром");
    return;
}
puts("Строка-палиндром");
return;
}


int menu(void)
{
    int ch = 0;
    while (ch < 1 || ch > 6)
    {
        printf("\n Выберите задачу:\n");
        printf("1. Ввести символьную строку, заменить все буквы a на буквы b как заглавные, так и строчные\n");
        printf("2. Ввести полный адрес файла (возможно, без расширения и изменить его расширение на «.ехе».\n   (Пример:  C:\\Documents\\qqq.com - C:\\Documents\\qqq.exe)\n");
        printf("3. Ввести предложение и разобрать его на отдельные слова\n");
        printf("4. Разработать функцию, которая переставляет пары соседних символов.\n");
        printf("5. Разработать функцию, которая определяет, верно ли, что предложение (с пробелами) – палиндром!\n   (Пример: a roza ypala na lapy Azora)\n");
        printf("6. Выход\n");
        printf("Ваш выбор: ");
        scanf("%d",&ch);
        
    }
    return ch;
}
