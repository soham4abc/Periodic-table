#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include "elements.h"

int i;
char clear_colour[7] = "\033[0m";

char red_bold[10] = "\033[1;31m";
char green_bold[10] = "\033[1;32m";
char yellow_bold[10] = "\033[1;33m";
char blue_bold[10] = "\033[1;34m";
char purple_bold[10] = "\033[1;35m";
char cyan_bold[10] = "\033[1;36m";
char white_bold[10] = "\033[1;37m";

char red_bg_black_font[13] = "\033[0;30;41m";
char green_bg_black_font[13] = "\033[0;30;42m";
char yellow_bg_black_font[13] = "\033[0;30;43m";
char blue_bg_black_font[13] = "\033[0;30;44m";
char purple_bg_black_font[13] = "\033[0;30;45m";
char cyan_bg_black_font[13] = "\033[0;30;46m";

char Icyan_bg_black_font[13] = "\033[030;106m";
char Iyellow_bg_red_font[13] = "\033[031;103m";

void ClearScreen()
{
    system("@cls||clear");
}

void HomeScreen()
{
    ClearScreen();
    printf("                                   \033[31;1;51;4mPERIODIC TABLE\033[0m\n");
    printf("|%s H  %s|                                                                               |%s He %s|\n", yellow_bg_black_font, clear_colour, cyan_bg_black_font, clear_colour);
    printf("|%s Li %s|%s Be %s|                                                 |%s B  %s|%s C  %s|%s N  %s|%s O  %s|%s F  %s|%s Ne %s|\n", red_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, red_bg_black_font, clear_colour, yellow_bg_black_font, clear_colour, yellow_bg_black_font, clear_colour, yellow_bg_black_font, clear_colour, green_bg_black_font, clear_colour, cyan_bg_black_font, clear_colour);
    printf("|%s Na %s|%s Mg %s|                                                 |%s Al %s|%s Si %s|%s P  %s|%s S  %s|%s Cl %s|%s Ar %s|\n", red_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, red_bg_black_font, clear_colour, yellow_bg_black_font, clear_colour, yellow_bg_black_font, clear_colour, green_bg_black_font, clear_colour, cyan_bg_black_font, clear_colour);
    printf("|%s K  %s|%s Ca %s|%s Sc %s|%s Ti %s|%s V  %s|%s Cr %s|%s Mn %s|%s Fe %s|%s Co %s|%s Ni %s|%s Cu %s|%s Zn %s|%s Ga %s|%s Ge %s|%s As %s|%s Se %s|%s Br %s|%s Kr %s|\n", red_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, red_bg_black_font, clear_colour, red_bg_black_font, clear_colour, yellow_bg_black_font, clear_colour, green_bg_black_font, clear_colour, cyan_bg_black_font, clear_colour);
    printf("|%s Rb %s|%s Sr %s|%s Y  %s|%s Zr %s|%s Nb %s|%s Mo %s|%s Tc %s|%s Ru %s|%s Rh %s|%s Pd %s|%s Ag %s|%s Cd %s|%s In %s|%s Sn %s|%s Sb %s|%s Te %s|%s I  %s|%s Xe %s|\n", red_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, red_bg_black_font, clear_colour, red_bg_black_font, clear_colour, green_bg_black_font, clear_colour, cyan_bg_black_font, clear_colour);
    printf("|%s Cs %s|%s Ba %s|%s *  %s|%s Hf %s|%s Ta %s|%s W  %s|%s Re %s|%s Os %s|%s Ir %s|%s Pt %s|%s Au %s|%s Hg %s|%s Ti %s|%s Pb %s|%s Bi %s|%s Po %s|%s At %s|%s Rn %s|\n", red_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, Iyellow_bg_red_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, red_bg_black_font, clear_colour, green_bg_black_font, clear_colour, cyan_bg_black_font, clear_colour);
    printf("|%s Fr %s|%s Ra %s|%s ** %s|%s Rf %s|%s Db %s|%s Sg %s|%s Bh %s|%s Hs %s|%s Mt %s|%s Ds %s|%s Rg %s|%s Cn %s|%s Nh %s|%s Fl %s|%s Mc %s|%s Lv %s|%s Ts %s|%s Og %s|\n\n", red_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, green_bg_black_font, clear_colour, cyan_bg_black_font, clear_colour);

    printf("       *  |%s La %s|%s Ce %s|%s Pr %s|%s Nd %s|%s Pm %s|%s Sm %s|%s Eu %s|%s Gd %s|%s Tb %s|%s Dy %s|%s Ho %s|%s Er %s|%s Tm %s|%s Yb %s|%s Lu %s|\n", Iyellow_bg_red_font, clear_colour, Iyellow_bg_red_font, clear_colour, Iyellow_bg_red_font, clear_colour, Iyellow_bg_red_font, clear_colour, Iyellow_bg_red_font, clear_colour, Iyellow_bg_red_font, clear_colour, Iyellow_bg_red_font, clear_colour, Iyellow_bg_red_font, clear_colour, Iyellow_bg_red_font, clear_colour, Iyellow_bg_red_font, clear_colour, Iyellow_bg_red_font, clear_colour, Iyellow_bg_red_font, clear_colour, Iyellow_bg_red_font, clear_colour, Iyellow_bg_red_font, clear_colour, Iyellow_bg_red_font, clear_colour);
    printf("       ** |%s Ac %s|%s Th %s|%s Pa %s|%s U  %s|%s Np %s|%s Pu %s|%s Am %s|%s Cm %s|%s Bk %s|%s Cf %s|%s Es %s|%s Fm %s|%s Md %s|%s No %s|%s Lr %s|\n", Icyan_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour);
    printf("\n\n");
}

void Result(int index)
{
    ClearScreen();
    printf("                                   \033[31;1;51;4mPERIODIC TABLE\033[0m\n\n");
    printf("%sElement : %s%s\n", red_bold, atom[index].name, clear_colour);
    printf("%sSymbol : %s%s\n", red_bold, atom[index].symbol, clear_colour);
    printf("%sAtomic Number : %d%s\n", red_bold, atom[index].atomicnum, clear_colour);
    printf("%sAtomic Weight : %g g/mol%s\n", red_bold, atom[index].atomicwt, clear_colour);
    printf("%sDensity : %f g/cm^3%s\n", red_bold, atom[index].density, clear_colour);
    printf("%sElectronic Configuration : %s%s\n", red_bold, atom[index].configuration, clear_colour);
}

void quit()
{
    HomeScreen();
    printf("%sAre you sure you want to quit [Y/N]? : %s", red_bold, clear_colour);
    char response = getch();
    if (tolower(response) == 'y')
    {
        printf("\n\n\n%sThank You%s\n\n", yellow_bold, clear_colour);
    }
    else if (tolower(response) == 'n')
    {
        main();
    }
    else
    {
        quit();
    }
}

void again()
{
    printf("\n\n\n%sSearch for a different element [Y/N]? : %s", yellow_bold, clear_colour);
    char response = getch();
    if (tolower(response) == 'y')
    {
        search();
    }
    else if (tolower(response) == 'n')
    {
        quit();
    }
    else
    {
        again();
    }
    printf("\n\n\n");
}

void search_by_name()
{
    HomeScreen();
    char element_name[20];
    bool find = false;
    printf("%sEnter the Element's Name : %s", red_bold, clear_colour);
    scanf("%s", element_name);
    for (i = 0; i < 118; i++)
    {
        if (strcmp(atom[i].name, element_name) == 0)
        {
            find = true;
            Result(i);
            break;
        }
    }
    if (find == false)
    {
        printf("%sWrong Entry%s\n",red_bold, clear_colour);
    }
    again();
}

void search_by_symbol()
{
    HomeScreen();
    char element_symbol[20];
    bool find = false;
    printf("%sEnter the Element's Symbol : %s", red_bold, clear_colour);
    scanf("%s", element_symbol);
    for (i = 0; i < 118; i++)
    {
        if (strcmp(atom[i].symbol, element_symbol) == 0)
        {
            find = true;
            Result(i);
            break;
        }
    }
    if (find == false)
    {
        printf("%sWrong Entry%s\n",red_bold, clear_colour);
    }
    again();
}

void search_by_atomicnum()
{
    HomeScreen();
    int atomic_number;
    bool find = false;
    printf("%sEnter the Element's Atomic Number : %s", red_bold, clear_colour);
    scanf("%d", &atomic_number);
    for (i = 0; i < 118; i++)
    {
        if (atom[i].atomicnum == atomic_number)
        {
            find = true;
            Result(i);
            break;
        }
    }
    if (find == false)
    {
        printf("%sWrong Entry%s\n",red_bold, clear_colour);
    }
    again();
}

void search_by_atomicweight()
{
    HomeScreen();
    float atomic_weight;
    bool find = false;
    printf("%sEnter the Element's Atomic Weight : %s", red_bold, clear_colour);
    scanf("%f", &atomic_weight);
    for (i = 0; i < 118; i++)
    {
        if (atom[i].atomicwt == atomic_weight)
        {
            find = true;
            Result(i);
            break;
        }
    }
    if (find == false)
    {
        printf("%sWrong Entry%s\n",red_bold, clear_colour);
    }
    again();
}

void search()
{
    HomeScreen();
    printf("%sSearch By : %s\n", red_bold, clear_colour);
    printf("%s   < 1 > Element Name%s\n", blue_bold, clear_colour);
    printf("%s   < 2 > Symbol%s\n", blue_bold, clear_colour);
    printf("%s   < 3 > Atomic Number%s\n", blue_bold, clear_colour);
    printf("%s   < 4 > Atomic Weight%s\n\n", blue_bold, clear_colour);
    printf("%sYour Choice : %s", yellow_bold, clear_colour);
    char response_Search = getch();

    switch (response_Search)
    {
    case '1':
        search_by_name();
        break;
    case '2':
        search_by_symbol();
        break;
    case '3':
        search_by_atomicnum();
        break;
    case '4':
        search_by_atomicweight();
        break;
    default:
        search();
        break;
    }
}

int main()
{
    HomeScreen();
    printf("%sEnter:%s\n", red_bold, clear_colour);
    printf("    %s< 1 > Continue%s\n", blue_bold, clear_colour);
    printf("    %s< 2 > Quit%s\n\n", blue_bold, clear_colour);
    printf("%sYour Choice : %s", yellow_bold, clear_colour);
    char response_HomeScreen = getch();
    table();
    switch (response_HomeScreen)
    {
    case '1':
        search();
        break;
    case '2':
        quit();
        break;
    default:
        main();
        break;
    }

    return 0;
}
