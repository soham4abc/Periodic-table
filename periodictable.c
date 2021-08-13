#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include "elements.h"

int i;
int main();
void search();
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

char Iyellow_bg_black_font[13] = "\033[030;103m";
char Ipurple_bg_black_font[13] = "\033[030;105m";
char Icyan_bg_black_font[13] = "\033[030;106m";
char Iyellow_bg_red_font[13] = "\033[031;103m";

char blue_bg_black_font_underline[15] = "\033[0;30;44;4m";
char purple_bg_black_font_underline[15] = "\033[0;30;45;4m";
char cyan_bg_black_font_underline[15] = "\033[0;30;46;4m";
char white_bg_black_font_underline[13] = "\033[0;30;47;4m";

void ClearScreen()
{
    //system("clear"); //For UNIX systems
    system("@cls||clear");//for windows systems
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
    printf("%s\n", atom[index].colourbox);
    printf("%sElement :%s %s%s%s\n", green_bold, clear_colour, yellow_bold, atom[index].name, clear_colour);
    printf("%sSymbol :%s %s%s%s\n", green_bold, clear_colour, red_bold, atom[index].symbol, clear_colour);
    printf("%sAtomic Number :%s %s%d%s\n", green_bold, clear_colour, cyan_bold, atom[index].atomicnum, clear_colour);

    //printf("\n%sOverview:%s\n", white_bg_black_font, clear_colour);
    printf("%sCAS Number:%s %s%s%s\n", green_bold, clear_colour, blue_bold, atom[index].casnumber, clear_colour);
    printf("%sElectrons:%s %s%d%s %sProtons:%s %s%d%s %sNeutrons:%s %s%d%s\n", green_bold, clear_colour, cyan_bold, atom[index].electron, clear_colour, green_bold, clear_colour, cyan_bold, atom[index].proton, clear_colour, green_bold, clear_colour, cyan_bold, atom[index].neutron, clear_colour);

    printf("\n%sProperties:%s\n", Icyan_bg_black_font, clear_colour);
    printf("%sPeriod Number :%s %s%d%s\n", blue_bold, clear_colour, yellow_bold, atom[index].period, clear_colour);
    printf("%sGroup Number :%s %s%s%s %s(%s)%s\n", blue_bold, clear_colour, red_bold, atom[index].intgroup, clear_colour, red_bold, atom[index].group, clear_colour);
    printf("%sMelting Point :%s %s%g%s %sK%s\n", blue_bold, clear_colour, cyan_bold, atom[index].meltingpoint, clear_colour, white_bold, clear_colour);
    printf("%sBoiling Point :%s %s%g%s %sK%s\n", blue_bold, clear_colour, green_bold, atom[index].boilingpoint, clear_colour, white_bold, clear_colour);
    printf("%sAtomic Weight :%s %s%g%s %sg/mol%s\n", blue_bold, clear_colour, blue_bold, atom[index].atomicwt, clear_colour, white_bold, clear_colour);
    printf("%sDensity :%s %s%f%s %sg/cm^3%s\n", blue_bold, clear_colour, purple_bold, atom[index].density, clear_colour, white_bold, clear_colour);

    printf("\n%sReactivity:%s\n", Iyellow_bg_black_font, clear_colour);
    printf("%sElctrong Affinity :%s %s%g%s %skJ/mol%s\n", yellow_bold, clear_colour, green_bold, atom[index].electronaffinity, clear_colour, white_bold, clear_colour);

    printf("%sElctrong Negativity :%s %s%g%s\n", yellow_bold, clear_colour, red_bold, atom[index].electronegativity, clear_colour);

    printf("\n%sAtomic Properties:%s\n", Ipurple_bg_black_font, clear_colour);
    printf("%sAtomic Radius :%s %s%d%s %spm%s\n", purple_bold, clear_colour, red_bold, atom[index].atomicradius, clear_colour, white_bold, clear_colour);
    printf("%sElectron Shell:%s %s%s%s\n", purple_bold, clear_colour, yellow_bold, atom[index].electronshell, clear_colour);
    printf("%sElectronic Configuration :%s %s%s%s\n", purple_bold, clear_colour, cyan_bold, atom[index].configuration, clear_colour);
}
void quit()
{
    HomeScreen();
    printf("%sAre you sure you want to quit [Y/N]? : %s", red_bold, clear_colour);
    char response;
    fflush(stdin);
    scanf("%c", &response);
    printf("\n");

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
    char response;
    fflush(stdin);
    scanf("%c", &response);
    printf("\n");

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

void again_mainmenu()
{
    printf("\n\n\n%sReturn to Main Menu[Y/N]? : %s", yellow_bold, clear_colour);
    char response;
    fflush(stdin);
    scanf("%c", &response);

    if (tolower(response) == 'y')
    {
        main();
    }
    else if (tolower(response) == 'n')
    {
        quit();
    }
    else
    {
        again_mainmenu();
    }
    printf("\n\n\n");
}
void Modern_periodic_table()
{
    ClearScreen();
    printf("                             \033[31;1;51;4mMODERN PERIODIC TABLE\033[0m\n");
    printf("|%sG/P %s|%s 1  %s|                                                                               |%s 18 %s|\n", white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour);
    printf("|%s 1  %s|%s H  %s|%s 2  %s|                                                 |%s 13 %s|%s 14 %s|%s 15 %s|%s 16 %s|%s 17 %s|%s He %s|\n", white_bg_black_font_underline, clear_colour, yellow_bg_black_font, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, cyan_bg_black_font, clear_colour);
    printf("|%s 2  %s|%s Li %s|%s Be %s|                                                 |%s B  %s|%s C  %s|%s N  %s|%s O  %s|%s F  %s|%s Ne %s|\n", white_bg_black_font_underline, clear_colour, red_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, red_bg_black_font, clear_colour, yellow_bg_black_font, clear_colour, yellow_bg_black_font, clear_colour, yellow_bg_black_font, clear_colour, green_bg_black_font, clear_colour, cyan_bg_black_font, clear_colour);
    printf("|%s 3  %s|%s Na %s|%s Mg %s|%s 3  %s|%s 4  %s|%s 5  %s|%s 6  %s|%s  7 %s|%s 8  %s|%s 9  %s|%s 10 %s|%s 11 %s|%s 12 %s|%s Al %s|%s Si %s|%s P  %s|%s S  %s|%s Cl %s|%s Ar %s|\n", white_bg_black_font_underline, clear_colour, red_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, blue_bg_black_font, clear_colour, red_bg_black_font, clear_colour, yellow_bg_black_font, clear_colour, yellow_bg_black_font, clear_colour, green_bg_black_font, clear_colour, cyan_bg_black_font, clear_colour);
    printf("|%s 4  %s|%s K  %s|%s Ca %s|%s Sc %s|%s Ti %s|%s V  %s|%s Cr %s|%s Mn %s|%s Fe %s|%s Co %s|%s Ni %s|%s Cu %s|%s Zn %s|%s Ga %s|%s Ge %s|%s As %s|%s Se %s|%s Br %s|%s Kr %s|\n", white_bg_black_font_underline, clear_colour, red_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, red_bg_black_font, clear_colour, red_bg_black_font, clear_colour, yellow_bg_black_font, clear_colour, green_bg_black_font, clear_colour, cyan_bg_black_font, clear_colour);
    printf("|%s 5  %s|%s Rb %s|%s Sr %s|%s Y  %s|%s Zr %s|%s Nb %s|%s Mo %s|%s Tc %s|%s Ru %s|%s Rh %s|%s Pd %s|%s Ag %s|%s Cd %s|%s In %s|%s Sn %s|%s Sb %s|%s Te %s|%s I  %s|%s Xe %s|\n", white_bg_black_font_underline, clear_colour, red_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, red_bg_black_font, clear_colour, red_bg_black_font, clear_colour, green_bg_black_font, clear_colour, cyan_bg_black_font, clear_colour);
    printf("|%s 6  %s|%s Cs %s|%s Ba %s|%s *  %s|%s Hf %s|%s Ta %s|%s W  %s|%s Re %s|%s Os %s|%s Ir %s|%s Pt %s|%s Au %s|%s Hg %s|%s Ti %s|%s Pb %s|%s Bi %s|%s Po %s|%s At %s|%s Rn %s|\n", white_bg_black_font_underline, clear_colour, red_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, Iyellow_bg_red_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, red_bg_black_font, clear_colour, green_bg_black_font, clear_colour, cyan_bg_black_font, clear_colour);
    printf("|%s 7  %s|%s Fr %s|%s Ra %s|%s ** %s|%s Rf %s|%s Db %s|%s Sg %s|%s Bh %s|%s Hs %s|%s Mt %s|%s Ds %s|%s Rg %s|%s Cn %s|%s Nh %s|%s Fl %s|%s Mc %s|%s Lv %s|%s Ts %s|%s Og %s|\n\n", white_bg_black_font_underline, clear_colour, red_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, green_bg_black_font, clear_colour, cyan_bg_black_font, clear_colour);

    printf("          |%sG/P %s|%s 3  %s|%s -  %s|%s -  %s|%s -  %s|%s -  %s|%s -  %s|%s -  %s|%s -  %s|%s -  %s|%s -  %s|%s -  %s|%s -  %s|%s -  %s|%s -  %s|%s -  %s|\n", white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour);
    printf("       *  |%s 6  %s|%s La %s|%s Ce %s|%s Pr %s|%s Nd %s|%s Pm %s|%s Sm %s|%s Eu %s|%s Gd %s|%s Tb %s|%s Dy %s|%s Ho %s|%s Er %s|%s Tm %s|%s Yb %s|%s Lu %s|\n", white_bg_black_font_underline, clear_colour, Iyellow_bg_red_font, clear_colour, Iyellow_bg_red_font, clear_colour, Iyellow_bg_red_font, clear_colour, Iyellow_bg_red_font, clear_colour, Iyellow_bg_red_font, clear_colour, Iyellow_bg_red_font, clear_colour, Iyellow_bg_red_font, clear_colour, Iyellow_bg_red_font, clear_colour, Iyellow_bg_red_font, clear_colour, Iyellow_bg_red_font, clear_colour, Iyellow_bg_red_font, clear_colour, Iyellow_bg_red_font, clear_colour, Iyellow_bg_red_font, clear_colour, Iyellow_bg_red_font, clear_colour, Iyellow_bg_red_font, clear_colour);
    printf("       ** |%s 7  %s|%s Ac %s|%s Th %s|%s Pa %s|%s U  %s|%s Np %s|%s Pu %s|%s Am %s|%s Cm %s|%s Bk %s|%s Cf %s|%s Es %s|%s Fm %s|%s Md %s|%s No %s|%s Lr %s|\n", white_bg_black_font_underline, clear_colour, Icyan_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour);
    printf("\n\n");
    printf("%s  %s %sAlkali Metals%s\n", red_bg_black_font, clear_colour, red_bold, clear_colour);
    printf("%s  %s %sAlkaline Earth Metals%s\n", blue_bg_black_font, clear_colour, blue_bold, clear_colour);
    printf("%s  %s %sTransition Metals%s\n", purple_bg_black_font, clear_colour, purple_bold, clear_colour);
    printf("%s  %s %sNon Metals%s\n", yellow_bg_black_font, clear_colour, yellow_bold, clear_colour);
    printf("%s  %s %sHalogens%s\n", green_bg_black_font, clear_colour, green_bold, clear_colour);
    printf("%s  %s %sNobel Gases%s\n", cyan_bg_black_font, clear_colour, cyan_bold, clear_colour);
    printf("%s  %s %sLanthanoids%s\n", Iyellow_bg_red_font, clear_colour, yellow_bold, clear_colour);
    printf("%s  %s %sActinoids%s\n\n", Icyan_bg_black_font, clear_colour, cyan_bold, clear_colour);

    again_mainmenu();
}
void HomeScreenwithnum()
{
    ClearScreen();
    printf("                                   \033[31;1;51;4mPERIODIC TABLE\033[0m\n");

    printf("|%sG/P %s|%s 1  %s|                                                                               |%s 18 %s|\n", white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour);
    printf("|%s 1  %s|%s H  %s|%s 2  %s|                                                 |%s 13 %s|%s 14 %s|%s 15 %s|%s 16 %s|%s 17 %s|%s He %s|\n", white_bg_black_font_underline, clear_colour, yellow_bg_black_font, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, cyan_bg_black_font, clear_colour);
    printf("|%s 2  %s|%s Li %s|%s Be %s|                                                 |%s B  %s|%s C  %s|%s N  %s|%s O  %s|%s F  %s|%s Ne %s|\n", white_bg_black_font_underline, clear_colour, red_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, red_bg_black_font, clear_colour, yellow_bg_black_font, clear_colour, yellow_bg_black_font, clear_colour, yellow_bg_black_font, clear_colour, green_bg_black_font, clear_colour, cyan_bg_black_font, clear_colour);
    printf("|%s 3  %s|%s Na %s|%s Mg %s|%s 3  %s|%s 4  %s|%s 5  %s|%s 6  %s|%s  7 %s|%s 8  %s|%s 9  %s|%s 10 %s|%s 11 %s|%s 12 %s|%s Al %s|%s Si %s|%s P  %s|%s S  %s|%s Cl %s|%s Ar %s|\n", white_bg_black_font_underline, clear_colour, red_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, blue_bg_black_font, clear_colour, red_bg_black_font, clear_colour, yellow_bg_black_font, clear_colour, yellow_bg_black_font, clear_colour, green_bg_black_font, clear_colour, cyan_bg_black_font, clear_colour);
    printf("|%s 4  %s|%s K  %s|%s Ca %s|%s Sc %s|%s Ti %s|%s V  %s|%s Cr %s|%s Mn %s|%s Fe %s|%s Co %s|%s Ni %s|%s Cu %s|%s Zn %s|%s Ga %s|%s Ge %s|%s As %s|%s Se %s|%s Br %s|%s Kr %s|\n", white_bg_black_font_underline, clear_colour, red_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, red_bg_black_font, clear_colour, red_bg_black_font, clear_colour, yellow_bg_black_font, clear_colour, green_bg_black_font, clear_colour, cyan_bg_black_font, clear_colour);
    printf("|%s 5  %s|%s Rb %s|%s Sr %s|%s Y  %s|%s Zr %s|%s Nb %s|%s Mo %s|%s Tc %s|%s Ru %s|%s Rh %s|%s Pd %s|%s Ag %s|%s Cd %s|%s In %s|%s Sn %s|%s Sb %s|%s Te %s|%s I  %s|%s Xe %s|\n", white_bg_black_font_underline, clear_colour, red_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, red_bg_black_font, clear_colour, red_bg_black_font, clear_colour, green_bg_black_font, clear_colour, cyan_bg_black_font, clear_colour);
    printf("|%s 6  %s|%s Cs %s|%s Ba %s|%s *  %s|%s Hf %s|%s Ta %s|%s W  %s|%s Re %s|%s Os %s|%s Ir %s|%s Pt %s|%s Au %s|%s Hg %s|%s Ti %s|%s Pb %s|%s Bi %s|%s Po %s|%s At %s|%s Rn %s|\n", white_bg_black_font_underline, clear_colour, red_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, Iyellow_bg_red_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, red_bg_black_font, clear_colour, green_bg_black_font, clear_colour, cyan_bg_black_font, clear_colour);
    printf("|%s 7  %s|%s Fr %s|%s Ra %s|%s ** %s|%s Rf %s|%s Db %s|%s Sg %s|%s Bh %s|%s Hs %s|%s Mt %s|%s Ds %s|%s Rg %s|%s Cn %s|%s Nh %s|%s Fl %s|%s Mc %s|%s Lv %s|%s Ts %s|%s Og %s|\n\n", white_bg_black_font_underline, clear_colour, red_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, green_bg_black_font, clear_colour, cyan_bg_black_font, clear_colour);

    printf("          |%sG/P %s|%s 3  %s|%s -  %s|%s -  %s|%s -  %s|%s -  %s|%s -  %s|%s -  %s|%s -  %s|%s -  %s|%s -  %s|%s -  %s|%s -  %s|%s -  %s|%s -  %s|%s -  %s|\n", white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour);
    printf("       *  |%s 6  %s|%s La %s|%s Ce %s|%s Pr %s|%s Nd %s|%s Pm %s|%s Sm %s|%s Eu %s|%s Gd %s|%s Tb %s|%s Dy %s|%s Ho %s|%s Er %s|%s Tm %s|%s Yb %s|%s Lu %s|\n", white_bg_black_font_underline, clear_colour, Iyellow_bg_red_font, clear_colour, Iyellow_bg_red_font, clear_colour, Iyellow_bg_red_font, clear_colour, Iyellow_bg_red_font, clear_colour, Iyellow_bg_red_font, clear_colour, Iyellow_bg_red_font, clear_colour, Iyellow_bg_red_font, clear_colour, Iyellow_bg_red_font, clear_colour, Iyellow_bg_red_font, clear_colour, Iyellow_bg_red_font, clear_colour, Iyellow_bg_red_font, clear_colour, Iyellow_bg_red_font, clear_colour, Iyellow_bg_red_font, clear_colour, Iyellow_bg_red_font, clear_colour, Iyellow_bg_red_font, clear_colour);
    printf("       ** |%s 7  %s|%s Ac %s|%s Th %s|%s Pa %s|%s U  %s|%s Np %s|%s Pu %s|%s Am %s|%s Cm %s|%s Bk %s|%s Cf %s|%s Es %s|%s Fm %s|%s Md %s|%s No %s|%s Lr %s|\n", white_bg_black_font_underline, clear_colour, Icyan_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour, Icyan_bg_black_font, clear_colour);
    printf("\n\n");
}

void Mendeleev_Periodic_Table()
{
    ClearScreen();

    printf("                \033[31;1;51;4mMENDELEEV PERIODIC TABLE\033[0m\n");
    printf("     |%s I  %s|\n", white_bg_black_font_underline, clear_colour);
    printf("|%s 0  %s|%s H  %s|%s II %s|%sIII %s|%s IV %s|%s V  %s|%s VI %s|%sVII %s|\n", white_bg_black_font_underline, clear_colour, blue_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour);
    printf("|%s He %s|%s Li %s|%s Be %s|%s B  %s|%s C  %s|%s N  %s|%s O  %s|%s F  %s|\n", purple_bg_black_font_underline, clear_colour, cyan_bg_black_font_underline, clear_colour, blue_bg_black_font_underline, clear_colour, blue_bg_black_font_underline, clear_colour, blue_bg_black_font_underline, clear_colour, blue_bg_black_font_underline, clear_colour, blue_bg_black_font_underline, clear_colour, blue_bg_black_font_underline, clear_colour);
    printf("|%s Ne %s|%s Na %s|%s Mg %s|%s Al %s|%s Si %s|%s P  %s|%s S  %s|%s Cl %s|%s          VIII        %s|\n", purple_bg_black_font_underline, clear_colour, cyan_bg_black_font_underline, clear_colour, blue_bg_black_font_underline, clear_colour, blue_bg_black_font_underline, clear_colour, blue_bg_black_font_underline, clear_colour, blue_bg_black_font_underline, clear_colour, cyan_bg_black_font_underline, clear_colour, cyan_bg_black_font_underline, clear_colour, white_bg_black_font_underline, clear_colour);
    printf("|%s Ar %s|%sK   %s|%sCa  %s|%sSc  %s|%sTi  %s|%sV   %s|%sCr  %s|%sMn  %s|%s   Fe  |   Co  |  Ni  %s|\n", purple_bg_black_font, clear_colour, cyan_bg_black_font, clear_colour, cyan_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, blue_bg_black_font, clear_colour);
    printf("|%s    %s|%s  Cu%s|%s  Zn%s|%s  Ga%s|%s  Ge%s|%s  As%s|%s  Se%s|%s  Br%s|%s       |       |      %s|\n", purple_bg_black_font_underline, clear_colour, blue_bg_black_font_underline, clear_colour, blue_bg_black_font_underline, clear_colour, purple_bg_black_font_underline, clear_colour, purple_bg_black_font_underline, clear_colour, blue_bg_black_font_underline, clear_colour, cyan_bg_black_font_underline, clear_colour, cyan_bg_black_font_underline, clear_colour, blue_bg_black_font_underline, clear_colour);
    printf("|%s Kr %s|%sRb  %s|%sSr  %s|%sY   %s|%sZr  %s|%sNb  %s|%sMo  %s|%sTc  %s|%s   Ru  |   Rh  |  Pd  %s|\n", purple_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, cyan_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, blue_bg_black_font, clear_colour);
    printf("|%s    %s|%s  Ag%s|%s  Cd%s|%s  In%s|%s  Sn%s|%s  Sb%s|%s  Te%s|%s   I%s|%s       |       |      %s|\n", purple_bg_black_font_underline, clear_colour, blue_bg_black_font_underline, clear_colour, blue_bg_black_font_underline, clear_colour, blue_bg_black_font_underline, clear_colour, blue_bg_black_font_underline, clear_colour, blue_bg_black_font_underline, clear_colour, cyan_bg_black_font_underline, clear_colour, cyan_bg_black_font_underline, clear_colour, blue_bg_black_font_underline, clear_colour);
    printf("|%s X  %s|%sCs  %s|%sBa  %s|%sLa  %s|%sHf  %s|%sTa  %s|%sW   %s|%sRe  %s|%s   Os  |   Ir  |  Pt  %s|\n", purple_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, cyan_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, blue_bg_black_font, clear_colour, purple_bg_black_font, clear_colour, blue_bg_black_font, clear_colour);
    printf("|%s    %s|%s  Au%s|%s  Hg%s|%s  Ti%s|%s  Pb%s|%s  Bi%s|%s  Po%s|%s  At%s|%s       |       |      %s|\n", purple_bg_black_font_underline, clear_colour, blue_bg_black_font_underline, clear_colour, blue_bg_black_font_underline, clear_colour, blue_bg_black_font_underline, clear_colour, blue_bg_black_font_underline, clear_colour, blue_bg_black_font_underline, clear_colour, purple_bg_black_font_underline, clear_colour, purple_bg_black_font_underline, clear_colour, blue_bg_black_font_underline, clear_colour);
    printf("|%s Rn %s|%sFr  %s|%sRa  %s|%sAc  %s|%sTh  %s|%sPa  %s|%sU   %s|\n", purple_bg_black_font_underline, clear_colour, purple_bg_black_font_underline, clear_colour, purple_bg_black_font_underline, clear_colour, purple_bg_black_font_underline, clear_colour, blue_bg_black_font_underline, clear_colour, purple_bg_black_font_underline, clear_colour, blue_bg_black_font_underline, clear_colour);
    printf("\n\n");
    printf("%s  %s %sKnown to Mendeleev%s\n", blue_bg_black_font, clear_colour, blue_bold, clear_colour);
    printf("%s  %s %sDobereiner's Triads%s\n", cyan_bg_black_font, clear_colour, cyan_bold, clear_colour);
    printf("%s  %s %sUnknown to Mendeleev%s\n\n", purple_bg_black_font, clear_colour, purple_bold, clear_colour);

    again_mainmenu();
}

void search_by_name()
{
    HomeScreenwithnum();
    char element_name[20];
    bool find = false;
    printf("%sEnter the Element's Name : %s", red_bold, clear_colour);
    scanf("%s", element_name);
    element_name[0] = toupper(element_name[0]);
    for (i = 1; element_name[i] != '\0'; i++)
    {
        element_name[i] = tolower(element_name[i]);
    }
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
        printf("%sWrong Entry%s\n", red_bold, clear_colour);
    }
    again();
}

void search_by_symbol()
{
    HomeScreenwithnum();
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
        printf("%sWrong Entry%s\n", red_bold, clear_colour);
    }
    again();
}

void search_by_atomicnum()
{
    HomeScreenwithnum();
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
        printf("%sWrong Entry%s\n", red_bold, clear_colour);
    }
    again();
}

void search_by_atomicweight()
{
    HomeScreenwithnum();
    float atomic_weight;
    bool find = false;
    printf("%sEnter the Element's Atomic Weight : %s", red_bold, clear_colour);
    scanf("%f", &atomic_weight);
    for (i = 0; i < 118; i++)
    {
        if ((atom[i].atomicwt == atomic_weight) || (round(atom[i].atomicwt) == round(atomic_weight)))
        {
            find = true;
            Result(i);
            break;
        }
    }
    if (find == false)
    {
        printf("%sWrong Entry%s\n", red_bold, clear_colour);
    }
    again();
}

void search_by_periodandgroup()
{
    HomeScreenwithnum();
    char element_group[5];
    int element_period;
    bool find = false;
    printf("\n%sEnter the Period No. : %s", red_bold, clear_colour);
    scanf("%d", &element_period);
    printf("%sEnter the Group No. (e.g. IB/11): %s", red_bold, clear_colour);
    scanf("%s", element_group);
    for (i = 0; element_group[i] != '\0'; i++)
    {
        element_group[i] = toupper(element_group[i]);
    }
    for (i = 0; i < 118; i++)
    {
        if ((strcmp(atom[i].intgroup, element_group) == 0) || (strcmp(atom[i].group, element_group) == 0))
        {
            if (atom[i].period == element_period)
            {
                find = true;
                Result(i);
                break;
            }
        }
    }
    if (find == false)
    {
        printf("%sWrong Entry%s\n", red_bold, clear_colour);
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
    printf("%s   < 4 > Atomic Weight%s\n", blue_bold, clear_colour);
    printf("%s   < 5 > Period & Group No.%s\n\n", blue_bold, clear_colour);
    printf("%sPress < 0 > to return back to main menu.%s\n\n", red_bold, clear_colour);
    printf("%sYour Choice : %s", yellow_bold, clear_colour);
    char response_Search;
    fflush(stdin);
    scanf("%c", &response_Search);

    switch (response_Search)
    {
    case '0':
        main();
        break;
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
    case '5':
        search_by_periodandgroup();
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
    printf("    %s< 1 > Search Element%s\n", blue_bold, clear_colour);
    printf("    %s< 2 > Mendeleev Periodic Table%s\n", blue_bold, clear_colour);
    printf("    %s< 3 > Modern Periodic Table%s\n", blue_bold, clear_colour);
    printf("    %s< 4 > Quit%s\n\n", blue_bold, clear_colour);
    printf("%sYour Choice : %s", yellow_bold, clear_colour);
    char response_HomeScreen;
    fflush(stdin);
    scanf("%c", &response_HomeScreen);

    table();
    switch (response_HomeScreen)
    {
    case '1':
        search();
        break;
    case '2':
        Mendeleev_Periodic_Table();
        break;
    case '3':
        Modern_periodic_table();
        break;
    case '4':
        quit();
        break;
    default:
        main();
        break;
    }
    return 0;
}
