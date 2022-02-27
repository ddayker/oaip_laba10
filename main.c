#include "func.h"
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    while(1){
        switch (menu())
        {
            case 1:
                zad1();
                break;

            case 2:
                zad5();
                break;

            case 3:
                zad4();
                break;

            case 4:
                zad8();
                break;

            case 5:
                zad2();
                break;

            case 6:
                printf("программа завершена...\n");
                return 0;
        }
    }
}
