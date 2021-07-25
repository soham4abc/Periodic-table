#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct element
{
    char name[20];
    char symbol[3];

    int atomicnum;
    float atomicwt;

    char configuration[85];
    float density;

    char colourbox[200];

    char group[5];
    char intgroup[2];
    int period;
    int atomicradius;
    float electronegativity;
    float electronaffinity;

} atom[118];

extern void table()
{
    strcpy(atom[0].name, "Hydrogen");
    strcpy(atom[0].symbol, "H");
    atom[0].atomicnum = 1;
    atom[0].atomicwt = 1.00784;
    strcpy(atom[0].configuration, "1s1");
    atom[0].density = 0.0000899;
    strcpy(atom[0].colourbox, "\033[0;30;43m1      1.008\033[0m\n\033[0;30;43m     H      \033[0m\n\033[0;30;43mHydrogen    \033[0m\n");
    strcpy(atom[0].group, "IA");
    strcpy(atom[0].intgroup, "1");
    atom[0].period = 1;

    strcpy(atom[1].name, "Helium");
    strcpy(atom[1].symbol, "He");
    atom[1].atomicnum = 2;
    atom[1].atomicwt = 4.0026;
    strcpy(atom[1].configuration, "1s2");
    atom[1].density = 0.00017846;
    strcpy(atom[1].colourbox, "\033[0;30;46m2      4.002\033[0m\n\033[0;30;46m     He     \033[0m\n\033[0;30;46mHelium      \033[0m\n");
    strcpy(atom[1].group, "VIIIA");
    strcpy(atom[1].intgroup, "18");
    atom[1].period = 1;

    strcpy(atom[2].name, "Lithium");
    strcpy(atom[2].symbol, "Li");
    atom[2].atomicnum = 3;
    atom[2].atomicwt = 6.941;
    strcpy(atom[2].configuration, "1s2 2s1");
    atom[2].density = 0.534;
    strcpy(atom[2].colourbox, "\033[0;30;41m3      6.941\033[0m\n\033[0;30;41m     Li     \033[0m\n\033[0;30;41mLithium     \033[0m\n");
    strcpy(atom[2].group, "IA");
    strcpy(atom[2].intgroup, "1");
    atom[2].period = 2;

    strcpy(atom[3].name, "Beryllium");
    strcpy(atom[3].symbol, "Be");
    atom[3].atomicnum = 4;
    atom[3].atomicwt = 9.0121;
    strcpy(atom[3].configuration, "1s2 2s2");
    atom[3].density = 1.848;
    strcpy(atom[3].colourbox, "\033[0;30;44m4      9.012\033[0m\n\033[0;30;44m     Be     \033[0m\n\033[0;30;44mBeryllium   \033[0m\n");
    strcpy(atom[3].group, "IIA");
    strcpy(atom[3].intgroup, "2");
    atom[3].period = 2;

    strcpy(atom[4].name, "Boron");
    strcpy(atom[4].symbol, "B");
    atom[4].atomicnum = 5;
    atom[4].atomicwt = 10.811;
    strcpy(atom[4].configuration, "1s2 2s2 2p1");
    atom[4].density = 2.34;
    strcpy(atom[4].colourbox, "\033[0;30;41m5     10.811\033[0m\n\033[0;30;41m     B      \033[0m\n\033[0;30;41mBoron       \033[0m\n");
    strcpy(atom[4].group, "IIIA");
    strcpy(atom[4].intgroup, "13");
    atom[4].period = 2;

    strcpy(atom[5].name, "Carbon");
    strcpy(atom[5].symbol, "C");
    atom[5].atomicnum = 6;
    atom[5].atomicwt = 12.0107;
    strcpy(atom[5].configuration, "1s2 2s2 2p2");
    atom[5].density = 2.26;
    strcpy(atom[5].colourbox, "\033[0;30;43m6     12.011\033[0m\n\033[0;30;43m     C      \033[0m\n\033[0;30;43mCarbon      \033[0m\n");
    strcpy(atom[5].group, "IVA");
    strcpy(atom[5].intgroup, "14");
    atom[5].period = 2;

    strcpy(atom[6].name, "Nitrogen");
    strcpy(atom[6].symbol, "N");
    atom[6].atomicnum = 7;
    atom[6].atomicwt = 14.0067;
    strcpy(atom[6].configuration, "1s2 2s2 2p3");
    atom[6].density = 0.001251;
    strcpy(atom[6].colourbox, "\033[0;30;43m7     14.007\033[0m\n\033[0;30;43m     N      \033[0m\n\033[0;30;43mNitrogen    \033[0m\n");
    strcpy(atom[6].group, "VA");
    strcpy(atom[6].intgroup, "15");
    atom[6].period = 2;

    strcpy(atom[7].name, "Oxygen");
    strcpy(atom[7].symbol, "O");
    atom[7].atomicnum = 8;
    atom[7].atomicwt = 15.9994;
    strcpy(atom[7].configuration, "1s2 2s2 2p4");
    atom[7].density = 0.00142897;
    strcpy(atom[7].colourbox, "\033[0;30;43m8     15.999\033[0m\n\033[0;30;43m     O      \033[0m\n\033[0;30;43mOxygen      \033[0m\n");
    strcpy(atom[7].group, "VIA");
    strcpy(atom[7].intgroup, "16");
    atom[7].period = 2;

    strcpy(atom[8].name, "Fluorine");
    strcpy(atom[8].symbol, "F");
    atom[8].atomicnum = 9;
    atom[8].atomicwt = 18.9984;
    strcpy(atom[8].configuration, "1s2 2s2 2p5");
    atom[8].density = 0.001696;
    strcpy(atom[8].colourbox, "\033[0;30;42m9     18.998\033[0m\n\033[0;30;42m     F      \033[0m\n\033[0;30;42mFluorine    \033[0m\n");
    strcpy(atom[8].group, "VIIA");
    strcpy(atom[8].intgroup, "17");
    atom[8].period = 2;

    strcpy(atom[9].name, "Neon");
    strcpy(atom[9].symbol, "Ne");
    atom[9].atomicnum = 10;
    atom[9].atomicwt = 20.1797;
    strcpy(atom[9].configuration, "1s2 2s2 2p6");
    atom[9].density = 0.0009002;
    strcpy(atom[9].colourbox, "\033[0;30;46m10    20.180\033[0m\n\033[0;30;46m     Ne     \033[0m\n\033[0;30;46mNeon        \033[0m\n");
    strcpy(atom[9].group, "VIIIA");
    strcpy(atom[9].intgroup, "18");
    atom[9].period = 2;

    strcpy(atom[10].name, "Sodium");
    strcpy(atom[10].symbol, "Na");
    atom[10].atomicnum = 11;
    atom[10].atomicwt = 22.9897;
    strcpy(atom[10].configuration, "1s2 2s2 2p6 3s1");
    atom[10].density = 0.0971;
    strcpy(atom[10].colourbox, "\033[0;30;41m11    22.989\033[0m\n\033[0;30;41m     Na     \033[0m\n\033[0;30;41mSodium      \033[0m\n");
    strcpy(atom[10].group, "IA");
    strcpy(atom[10].intgroup, "1");
    atom[10].period = 3;

    strcpy(atom[11].name, "Magnesium");
    strcpy(atom[11].symbol, "Mg");
    atom[11].atomicnum = 12;
    atom[11].atomicwt = 24.3050;
    strcpy(atom[11].configuration, "1s2 2s2 2p6 3s2");
    atom[11].density = 1.738;
    strcpy(atom[11].colourbox, "\033[0;30;44m12    24.305\033[0m\n\033[0;30;44m     Mg     \033[0m\n\033[0;30;44mMagnesium   \033[0m\n");
    strcpy(atom[11].group, "IIA");
    strcpy(atom[11].intgroup, "2");
    atom[11].period = 3;

    strcpy(atom[12].name, "Aluminium");
    strcpy(atom[12].symbol, "Al");
    atom[12].atomicnum = 13;
    atom[12].atomicwt = 26.9815;
    strcpy(atom[12].configuration, "1s2 2s2 2p6 3s2 3p1");
    atom[12].density = 2.6989;
    strcpy(atom[12].colourbox, "\033[0;30;44m13    26.982\033[0m\n\033[0;30;44m     Al     \033[0m\n\033[0;30;44mAluminium   \033[0m\n");
    strcpy(atom[12].group, "IIIA");
    strcpy(atom[12].intgroup, "13");
    atom[12].period = 3;

    strcpy(atom[13].name, "Silicon");
    strcpy(atom[13].symbol, "Si");
    atom[13].atomicnum = 14;
    atom[13].atomicwt = 28.0855;
    strcpy(atom[13].configuration, "1s2 2s2 2p6 3s2 3p2");
    atom[13].density = 2.33;
    strcpy(atom[13].colourbox, "\033[0;30;41m14    28.085\033[0m\n\033[0;30;41m     Si     \033[0m\n\033[0;30;41mSilicon     \033[0m\n");
    strcpy(atom[13].group, "IVA");
    strcpy(atom[13].intgroup, "14");
    atom[13].period = 3;

    strcpy(atom[14].name, "Phosphorus");
    strcpy(atom[14].symbol, "P");
    atom[14].atomicnum = 15;
    atom[14].atomicwt = 30.9737;
    strcpy(atom[14].configuration, "1s2 2s2 2p6 3s2 3p3");
    atom[14].density = 2.82;
    strcpy(atom[14].colourbox, "\033[0;30;43m15    30.974\033[0m\n\033[0;30;43m     P      \033[0m\n\033[0;30;43mPhosphorus  \033[0m\n");
    strcpy(atom[14].group, "VA");
    strcpy(atom[14].intgroup, "15");
    atom[14].period = 3;

    strcpy(atom[15].name, "Sulphur");
    strcpy(atom[15].symbol, "S");
    atom[15].atomicnum = 16;
    atom[15].atomicwt = 32.065;
    strcpy(atom[15].configuration, "1s2 2s2 2p6 3s2 3p4");
    atom[15].density = 2.070;
    strcpy(atom[15].colourbox, "\033[0;30;43m16      2.58\033[0m\n\033[0;30;43m     S      \033[0m\n\033[0;30;43mSulphur     \033[0m\n");
    strcpy(atom[15].group, "VIA");
    strcpy(atom[15].intgroup, "16");
    atom[15].period = 3;

    strcpy(atom[16].name, "Chlorine");
    strcpy(atom[16].symbol, "Cl");
    atom[16].atomicnum = 17;
    atom[16].atomicwt = 35.453;
    strcpy(atom[16].configuration, "1s2 2s2 2p6 3s2 3p5");
    atom[16].density = 0.003214;
    strcpy(atom[16].colourbox, "\033[0;30;42m17    35.453\033[0m\n\033[0;30;42m     Cl     \033[0m\n\033[0;30;42mChlorine    \033[0m\n");
    strcpy(atom[16].group, "VIIA");
    strcpy(atom[16].intgroup, "17");
    atom[16].period = 3;

    strcpy(atom[17].name, "Argon");
    strcpy(atom[17].symbol, "Ar");
    atom[17].atomicnum = 18;
    atom[17].atomicwt = 39.948;
    strcpy(atom[17].configuration, "1s2 2s2 2p6 3s2 3p6");
    atom[17].density = 0.001784;
    strcpy(atom[17].colourbox, "\033[0;30;46m18    39.948\033[0m\n\033[0;30;46m     Ar     \033[0m\n\033[0;30;46mArgon       \033[0m\n");
    strcpy(atom[17].group, "VIIIA");
    strcpy(atom[17].intgroup, "18");
    atom[17].period = 3;

    strcpy(atom[18].name, "Potassium");
    strcpy(atom[18].symbol, "K");
    atom[18].atomicnum = 19;
    atom[18].atomicwt = 39.0983;
    strcpy(atom[18].configuration, "1s2 2s2 2p6 3s2 3p6 4s1");
    atom[18].density = 0.856;
    strcpy(atom[18].colourbox, "\033[0;30;41m19    39.098\033[0m\n\033[0;30;41m     K      \033[0m\n\033[0;30;41mPotassium   \033[0m\n");
    strcpy(atom[18].group, "IA");
    strcpy(atom[18].intgroup, "1");
    atom[18].period = 4;

    strcpy(atom[19].name, "Calcium");
    strcpy(atom[19].symbol, "Ca");
    atom[19].atomicnum = 20;
    atom[19].atomicwt = 40.078;
    strcpy(atom[19].configuration, "1s2 2s2 2p6 3s2 3p6 4s2");
    atom[19].density = 1.55;
    strcpy(atom[19].colourbox, "\033[0;30;44m20    40.078\033[0m\n\033[0;30;44m     Ca     \033[0m\n\033[0;30;44mCalcium     \033[0m\n");
    strcpy(atom[19].group, "IIA");
    strcpy(atom[19].intgroup, "2");
    atom[19].period = 4;

    strcpy(atom[20].name, "Scandium");
    strcpy(atom[20].symbol, "Sc");
    atom[20].atomicnum = 21;
    atom[20].atomicwt = 44.9559;
    strcpy(atom[20].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d1");
    atom[20].density = 2.99;
    strcpy(atom[20].colourbox, "\033[0;30;45m21     44.95\033[0m\n\033[0;30;45m     Sc     \033[0m\n\033[0;30;45mScandium    \033[0m\n");
    strcpy(atom[20].group, "IIIB");
    strcpy(atom[20].intgroup, "3");
    atom[20].period = 4;

    strcpy(atom[21].name, "Titanium");
    strcpy(atom[21].symbol, "Ti");
    atom[21].atomicnum = 22;
    atom[21].atomicwt = 47.867;
    strcpy(atom[21].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d2");
    atom[21].density = 4.54;
    strcpy(atom[21].colourbox, "\033[0;30;45m22    44.867\033[0m\n\033[0;30;45m     Ti     \033[0m\n\033[0;30;45mTitanium    \033[0m\n");
    strcpy(atom[21].group, "IVB");
    strcpy(atom[21].intgroup, "4");
    atom[21].period = 4;

    strcpy(atom[22].name, "Vanadium");
    strcpy(atom[22].symbol, "V");
    atom[22].atomicnum = 23;
    atom[22].atomicwt = 50.9415;
    strcpy(atom[22].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d3");
    atom[22].density = 6.11;
    strcpy(atom[22].colourbox, "\033[0;30;45m23    50.942\033[0m\n\033[0;30;45m     V      \033[0m\n\033[0;30;45mVanadium    \033[0m\n");
    strcpy(atom[22].group, "VB");
    strcpy(atom[22].intgroup, "5");
    atom[22].period = 4;

    strcpy(atom[23].name, "Chromium");
    strcpy(atom[23].symbol, "Cr");
    atom[23].atomicnum = 24;
    atom[23].atomicwt = 51.9961;
    strcpy(atom[23].configuration, "1s2 2s2 2p6 3s2 3p6 4s1 3d5");
    atom[23].density = 7.19;
    strcpy(atom[23].colourbox, "\033[0;30;45m24    51.996\033[0m\n\033[0;30;45m     Cr     \033[0m\n\033[0;30;45mChromium    \033[0m\n");
    strcpy(atom[23].group, "VIB");
    strcpy(atom[23].intgroup, "6");
    atom[23].period = 4;

    strcpy(atom[24].name, "Manganese");
    strcpy(atom[24].symbol, "Mg");
    atom[24].atomicnum = 25;
    atom[24].atomicwt = 54.9380;
    strcpy(atom[24].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d5");
    atom[24].density = 7.21;
    strcpy(atom[24].colourbox, "\033[0;30;45m25    54.938\033[0m\n\033[0;30;45m     Mn     \033[0m\n\033[0;30;45mManganese   \033[0m\n");
    strcpy(atom[24].group, "VIIB");
    strcpy(atom[24].intgroup, "7");
    atom[24].period = 4;

    strcpy(atom[25].name, "Iron");
    strcpy(atom[25].symbol, "Fe");
    atom[25].atomicnum = 26;
    atom[25].atomicwt = 55.845;
    strcpy(atom[25].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d6");
    atom[25].density = 7.874;
    strcpy(atom[25].colourbox, "\033[0;30;45m26    55.845\033[0m\n\033[0;30;45m     Fe     \033[0m\n\033[0;30;45mIron        \033[0m\n");
    strcpy(atom[25].group, "VIIIB");
    strcpy(atom[25].intgroup, "8");
    atom[25].period = 4;

    strcpy(atom[26].name, "Cobalt");
    strcpy(atom[26].symbol, "Co");
    atom[26].atomicnum = 27;
    atom[26].atomicwt = 58.9331;
    strcpy(atom[26].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d7");
    atom[26].density = 8.9;
    strcpy(atom[26].colourbox, "\033[0;30;45m27    58.933\033[0m\n\033[0;30;45m     Co     \033[0m\n\033[0;30;45mCobalt      \033[0m\n");
    strcpy(atom[26].group, "VIIIB");
    strcpy(atom[26].intgroup, "9");
    atom[26].period = 4;

    strcpy(atom[27].name, "Nickel");
    strcpy(atom[27].symbol, "Ni");
    atom[27].atomicnum = 28;
    atom[27].atomicwt = 58.6934;
    strcpy(atom[27].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d8");
    atom[27].density = 8.902;
    strcpy(atom[27].colourbox, "\033[0;30;45m28    58.693\033[0m\n\033[0;30;45m     Ni     \033[0m\n\033[0;30;45mNickel      \033[0m\n");
    strcpy(atom[27].group, "VIIIB");
    strcpy(atom[27].intgroup, "10");
    atom[27].period = 4;

    strcpy(atom[28].name, "Copper");
    strcpy(atom[28].symbol, "Cu");
    atom[28].atomicnum = 29;
    atom[28].atomicwt = 63.546;
    strcpy(atom[28].configuration, "1s2 2s2 2p6 3s2 3p6 4s1 3d10");
    atom[28].density = 8.92;
    strcpy(atom[28].colourbox, "\033[0;30;45m29    63.546\033[0m\n\033[0;30;45m     Cu     \033[0m\n\033[0;30;45mCopper      \033[0m\n");
    strcpy(atom[28].group, "IB");
    strcpy(atom[28].intgroup, "11");
    atom[28].period = 4;

    strcpy(atom[29].name, "Zinc");
    strcpy(atom[29].symbol, "Zn");
    atom[29].atomicnum = 30;
    atom[29].atomicwt = 65.38;
    strcpy(atom[29].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10");
    atom[29].density = 7.133;
    strcpy(atom[29].colourbox, "\033[0;30;45m30     65.39\033[0m\n\033[0;30;45m     Zn     \033[0m\n\033[0;30;45mZinc        \033[0m\n");
    strcpy(atom[29].group, "IIB");
    strcpy(atom[29].intgroup, "12");
    atom[29].period = 4;

    strcpy(atom[30].name, "Gallium");
    strcpy(atom[30].symbol, "Ga");
    atom[30].atomicnum = 31;
    atom[30].atomicwt = 69.723;
    strcpy(atom[30].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p1");
    atom[30].density = 5.91;
    strcpy(atom[30].colourbox, "\033[0;30;44m31    69.723\033[0m\n\033[0;30;44m     Ga     \033[0m\n\033[0;30;44mGallium     \033[0m\n");
    strcpy(atom[30].group, "IIIA");
    strcpy(atom[30].intgroup, "13");
    atom[30].period = 4;

    strcpy(atom[31].name, "Germanium");
    strcpy(atom[31].symbol, "Ge");
    atom[31].atomicnum = 32;
    atom[31].atomicwt = 72.64;
    strcpy(atom[31].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p2");
    atom[31].density = 5.323;
    strcpy(atom[31].colourbox, "\033[0;30;41m32     72.61\033[0m\n\033[0;30;41m     Ge     \033[0m\n\033[0;30;41mGermanium   \033[0m\n");
    strcpy(atom[31].group, "IVA");
    strcpy(atom[31].intgroup, "14");
    atom[31].period = 4;

    strcpy(atom[32].name, "Arsenic");
    strcpy(atom[32].symbol, "As");
    atom[32].atomicnum = 33;
    atom[32].atomicwt = 74.9216;
    strcpy(atom[32].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p3");
    atom[32].density = 5.72;
    strcpy(atom[32].colourbox, "\033[0;30;41m33    74.922\033[0m\n\033[0;30;41m     As     \033[0m\n\033[0;30;41mArsenic     \033[0m\n");
    strcpy(atom[32].group, "VA");
    strcpy(atom[32].intgroup, "15");
    atom[32].period = 4;

    strcpy(atom[33].name, "Selenium");
    strcpy(atom[33].symbol, "Se");
    atom[33].atomicnum = 34;
    atom[33].atomicwt = 78.96;
    strcpy(atom[33].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p4");
    atom[33].density = 4.79;
    strcpy(atom[33].colourbox, "\033[0;30;43m34     78.96\033[0m\n\033[0;30;43m     Se     \033[0m\n\033[0;30;43mSelenium    \033[0m\n");
    strcpy(atom[33].group, "VIA");
    strcpy(atom[33].intgroup, "16");
    atom[33].period = 4;

    strcpy(atom[34].name, "Bromine");
    strcpy(atom[34].symbol, "Br");
    atom[34].atomicnum = 35;
    atom[34].atomicwt = 79.904;
    strcpy(atom[34].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p5");
    atom[34].density = 3.14;
    strcpy(atom[34].colourbox, "\033[0;30;42m35    79.904\033[0m\n\033[0;30;42m     Br     \033[0m\n\033[0;30;42mBromine     \033[0m\n");
    strcpy(atom[34].group, "VIIA");
    strcpy(atom[34].intgroup, "17");
    atom[34].period = 4;

    strcpy(atom[35].name, "Krypton");
    strcpy(atom[35].symbol, "Kr");
    atom[35].atomicnum = 36;
    atom[35].atomicwt = 83.798;
    strcpy(atom[35].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6");
    atom[35].density = 0.003749;
    strcpy(atom[35].colourbox, "\033[0;30;46m36      83.8\033[0m\n\033[0;30;46m     Kr     \033[0m\n\033[0;30;46mKrypton     \033[0m\n");
    strcpy(atom[35].group, "VIIIA");
    strcpy(atom[35].intgroup, "18");
    atom[35].period = 4;

    strcpy(atom[36].name, "Rubidium");
    strcpy(atom[36].symbol, "Rb");
    atom[36].atomicnum = 37;
    atom[36].atomicwt = 85.467;
    strcpy(atom[36].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s1");
    atom[36].density = 1.53;
    strcpy(atom[36].colourbox, "\033[0;30;41m37    85.468\033[0m\n\033[0;30;41m     Rb     \033[0m\n\033[0;30;41mRubidium    \033[0m\n");
    strcpy(atom[36].group, "IA");
    strcpy(atom[36].intgroup, "1");
    atom[36].period = 5;

    strcpy(atom[37].name, "Strontium");
    strcpy(atom[37].symbol, "Sr");
    atom[37].atomicnum = 38;
    atom[37].atomicwt = 87.62;
    strcpy(atom[37].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2");
    atom[37].density = 2.54;
    strcpy(atom[37].colourbox, "\033[0;30;44m38     87.62\033[0m\n\033[0;30;44m     Sr     \033[0m\n\033[0;30;44mStrontium   \033[0m\n");
    strcpy(atom[37].group, "IIA");
    strcpy(atom[37].intgroup, "2");
    atom[37].period = 5;

    strcpy(atom[38].name, "Yttrium");
    strcpy(atom[38].symbol, "Y");
    atom[38].atomicnum = 39;
    atom[38].atomicwt = 88.905;
    strcpy(atom[38].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d1");
    atom[38].density = 4.47;
    strcpy(atom[38].colourbox, "\033[0;30;45m39    88.906\033[0m\n\033[0;30;45m     Y      \033[0m\n\033[0;30;45mYttrium     \033[0m\n");
    strcpy(atom[38].group, "IIIB");
    strcpy(atom[38].intgroup, "3");
    atom[38].period = 5;

    strcpy(atom[39].name, "Zirconium");
    strcpy(atom[39].symbol, "Zr");
    atom[39].atomicnum = 40;
    atom[39].atomicwt = 91.224;
    strcpy(atom[39].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d2");
    atom[39].density = 6.51;
    strcpy(atom[39].colourbox, "\033[0;30;45m40    91.224\033[0m\n\033[0;30;45m     Zr     \033[0m\n\033[0;30;45mZirconium   \033[0m\n");
    strcpy(atom[39].group, "IVB");
    strcpy(atom[39].intgroup, "4");
    atom[39].period = 5;

    strcpy(atom[40].name, "Niobium");
    strcpy(atom[40].symbol, "Nb");
    atom[40].atomicnum = 41;
    atom[40].atomicwt = 92.906;
    strcpy(atom[40].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s1 4d4");
    atom[40].density = 8.58;
    strcpy(atom[40].colourbox, "\033[0;30;45m41    92.906\033[0m\n\033[0;30;45m     Nb     \033[0m\n\033[0;30;45mNiobium     \033[0m\n");
    strcpy(atom[40].group, "VB");
    strcpy(atom[40].intgroup, "5");
    atom[40].period = 5;

    strcpy(atom[41].name, "Molybdenum");
    strcpy(atom[41].symbol, "Mo");
    atom[41].atomicnum = 42;
    atom[41].atomicwt = 95.94;
    strcpy(atom[41].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s1 4d5");
    atom[41].density = 10.22;
    strcpy(atom[41].colourbox, "\033[0;30;45m42     95.94\033[0m\n\033[0;30;45m     Mo     \033[0m\n\033[0;30;45mMolybdenum  \033[0m\n");
    strcpy(atom[41].group, "VIB");
    strcpy(atom[41].intgroup, "6");
    atom[41].period = 5;

    strcpy(atom[42].name, "Technetium");
    strcpy(atom[42].symbol, "Tc");
    atom[42].atomicnum = 43;
    atom[42].atomicwt = 98.906;
    strcpy(atom[42].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d5");
    atom[42].density = 11.49;
    strcpy(atom[42].colourbox, "\033[0;30;45m43      98.0\033[0m\n\033[0;30;45m     Tc     \033[0m\n\033[0;30;45mTechnetium  \033[0m\n");
    strcpy(atom[42].group, "VIIB");
    strcpy(atom[42].intgroup, "7");
    atom[42].period = 5;

    strcpy(atom[43].name, "Ruthenium");
    strcpy(atom[43].symbol, "Ru");
    atom[43].atomicnum = 44;
    atom[43].atomicwt = 101.07;
    strcpy(atom[43].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s1 4d7");
    atom[43].density = 12.41;
    strcpy(atom[43].colourbox, "\033[0;30;45m44    101.07\033[0m\n\033[0;30;45m     Ru     \033[0m\n\033[0;30;45mRuthenium   \033[0m\n");
    strcpy(atom[43].group, "VIIIB");
    strcpy(atom[43].intgroup, "8");
    atom[43].period = 5;

    strcpy(atom[44].name, "Rhodium");
    strcpy(atom[44].symbol, "Rh");
    atom[44].atomicnum = 45;
    atom[44].atomicwt = 102.90;
    strcpy(atom[44].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s1 4d8");
    atom[44].density = 12.41;
    strcpy(atom[44].colourbox, "\033[0;30;45m45   102.905\033[0m\n\033[0;30;45m     Rh     \033[0m\n\033[0;30;45mRhodium     \033[0m\n");
    strcpy(atom[44].group, "VIIIB");
    strcpy(atom[44].intgroup, "9");
    atom[44].period = 5;

    strcpy(atom[45].name, "Palladium");
    strcpy(atom[45].symbol, "Pd");
    atom[45].atomicnum = 46;
    atom[45].atomicwt = 106.42;
    strcpy(atom[45].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 4d10");
    atom[45].density = 12.02;
    strcpy(atom[45].colourbox, "\033[0;30;45m46    106.42\033[0m\n\033[0;30;45m     Pd     \033[0m\n\033[0;30;45mPalladium   \033[0m\n");
    strcpy(atom[45].group, "VIIIB");
    strcpy(atom[45].intgroup, "10");
    atom[45].period = 5;

    strcpy(atom[46].name, "Silver");
    strcpy(atom[46].symbol, "Ag");
    atom[46].atomicnum = 47;
    atom[46].atomicwt = 107.868;
    strcpy(atom[46].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s1 4d10");
    atom[46].density = 10.49;
    strcpy(atom[46].colourbox, "\033[0;30;45m47   101.868\033[0m\n\033[0;30;45m     Ag     \033[0m\n\033[0;30;45mSilver      \033[0m\n");
    strcpy(atom[46].group, "IB");
    strcpy(atom[46].intgroup, "11");
    atom[46].period = 5;

    strcpy(atom[47].name, "Cadmium");
    strcpy(atom[47].symbol, "Cd");
    atom[47].atomicnum = 48;
    atom[47].atomicwt = 112.411;
    strcpy(atom[47].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10");
    atom[47].density = 8.64;
    strcpy(atom[47].colourbox, "\033[0;30;45m48   112.411\033[0m\n\033[0;30;45m     Cd     \033[0m\n\033[0;30;45mCadmium     \033[0m\n");
    strcpy(atom[47].group, "IIB");
    strcpy(atom[47].intgroup, "12");
    atom[47].period = 5;

    strcpy(atom[48].name, "Indium");
    strcpy(atom[48].symbol, "In");
    atom[48].atomicnum = 49;
    atom[48].atomicwt = 114.818;
    strcpy(atom[48].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p1");
    atom[48].density = 7.31;
    strcpy(atom[48].colourbox, "\033[0;30;44m49   114.818\033[0m\n\033[0;30;44m     In     \033[0m\n\033[0;30;44mIndium      \033[0m\n");
    strcpy(atom[48].group, "IIIA");
    strcpy(atom[48].intgroup, "13");
    atom[48].period = 5;

    strcpy(atom[49].name, "Tin");
    strcpy(atom[49].symbol, "Sn");
    atom[49].atomicnum = 50;
    atom[49].atomicwt = 118.710;
    strcpy(atom[49].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p2");
    atom[49].density = 7.29;
    strcpy(atom[49].colourbox, "\033[0;30;44m50    118.71\033[0m\n\033[0;30;44m     Sn     \033[0m\n\033[0;30;44m Tin        \033[0m\n");
    strcpy(atom[49].group, "IVA");
    strcpy(atom[49].intgroup, "14");
    atom[49].period = 5;

    strcpy(atom[50].name, "Antimony");
    strcpy(atom[50].symbol, "Sb");
    atom[50].atomicnum = 51;
    atom[50].atomicwt = 121.76;
    strcpy(atom[50].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p3");
    atom[50].density = 6.69;
    strcpy(atom[50].colourbox, "\033[0;30;41m51    121.76\033[0m\n\033[0;30;41m     Sb     \033[0m\n\033[0;30;41mAntimony    \033[0m\n");
    strcpy(atom[50].group, "VA");
    strcpy(atom[50].intgroup, "15");
    atom[50].period = 5;

    strcpy(atom[51].name, "Tellurium");
    strcpy(atom[51].symbol, "Te");
    atom[51].atomicnum = 52;
    atom[51].atomicwt = 127.60;
    strcpy(atom[51].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p4");
    atom[51].density = 6.25;
    strcpy(atom[51].colourbox, "\033[0;30;41m52     127.6\033[0m\n\033[0;30;41m     Te     \033[0m\n\033[0;30;41mTellurium   \033[0m\n");
    strcpy(atom[51].group, "VIA");
    strcpy(atom[51].intgroup, "16");
    atom[51].period = 5;

    strcpy(atom[52].name, "Iodine");
    strcpy(atom[52].symbol, "I");
    atom[52].atomicnum = 53;
    atom[52].atomicwt = 126.904;
    strcpy(atom[52].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p5");
    atom[52].density = 4.94;
    strcpy(atom[52].colourbox, "\033[0;30;42m53   126.905\033[0m\n\033[0;30;42m     I      \033[0m\n\033[0;30;42mIodine      \033[0m\n");
    strcpy(atom[52].group, "VIIA");
    strcpy(atom[52].intgroup, "17");
    atom[52].period = 5;

    strcpy(atom[53].name, "Xenon");
    strcpy(atom[53].symbol, "Xe");
    atom[53].atomicnum = 54;
    atom[53].atomicwt = 131.293;
    strcpy(atom[53].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6");
    atom[53].density = 0.005894;
    strcpy(atom[53].colourbox, "\033[0;30;46m54    131.29\033[0m\n\033[0;30;46m     Xe     \033[0m\n\033[0;30;46mXenon       \033[0m\n");
    strcpy(atom[53].group, "VIIIA");
    strcpy(atom[53].intgroup, "18");
    atom[53].period = 5;

    strcpy(atom[54].name, "Caesium");
    strcpy(atom[54].symbol, "Cs");
    atom[54].atomicnum = 55;
    atom[54].atomicwt = 132.905;
    strcpy(atom[54].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s1");
    atom[54].density = 1.9;
    strcpy(atom[54].colourbox, "\033[0;30;41m55   132.906\033[0m\n\033[0;30;41m     Cs     \033[0m\n\033[0;30;41mCaesium     \033[0m\n");
    strcpy(atom[54].group, "IA");
    strcpy(atom[54].intgroup, "1");
    atom[54].period = 6;

    strcpy(atom[55].name, "Barium");
    strcpy(atom[55].symbol, "Ba");
    atom[55].atomicnum = 56;
    atom[55].atomicwt = 137.327;
    strcpy(atom[55].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2");
    atom[55].density = 3.5;
    strcpy(atom[55].colourbox, "\033[0;30;44m56   137.327\033[0m\n\033[0;30;44m     Ba     \033[0m\n\033[0;30;44mBarium      \033[0m\n");
    strcpy(atom[55].group, "IIA");
    strcpy(atom[55].intgroup, "2");
    atom[55].period = 6;

    strcpy(atom[56].name, "Lanthanum");
    strcpy(atom[56].symbol, "La");
    atom[56].atomicnum = 57;
    atom[56].atomicwt = 138.905;
    strcpy(atom[56].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f0 5d1");
    atom[56].density = 6.16;
    strcpy(atom[56].colourbox, "\033[031;103m57   138.906\033[0m\n\033[031;103m     La     \033[0m\n\033[031;103mLanthanum   \033[0m\n");
    strcpy(atom[56].group, "IIIB");
    strcpy(atom[56].intgroup, "3");
    atom[56].period = 6;

    strcpy(atom[57].name, "Cerium");
    strcpy(atom[57].symbol, "Ce");
    atom[57].atomicnum = 58;
    atom[57].atomicwt = 140.116;
    strcpy(atom[57].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f1 5d1");
    atom[57].density = 6.77;
    strcpy(atom[57].colourbox, "\033[031;103m58   140.116\033[0m\n\033[031;103m     Ce     \033[0m\n\033[031;103mCerium      \033[0m\n");
    strcpy(atom[57].group, "-");
    strcpy(atom[57].intgroup, "-");
    atom[57].period = 6;

    strcpy(atom[58].name, "Praseodymium");
    strcpy(atom[58].symbol, "Pr");
    atom[58].atomicnum = 59;
    atom[58].atomicwt = 140.904;
    strcpy(atom[58].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f3");
    atom[58].density = 6.773;
    strcpy(atom[58].colourbox, "\033[031;103m59   140.904\033[0m\n\033[031;103m     Pr     \033[0m\n\033[031;103mPraseodymium\033[0m\n");
    strcpy(atom[58].group, "-");
    strcpy(atom[58].intgroup, "-");
    atom[58].period = 6;

    strcpy(atom[59].name, "Neodumium");
    strcpy(atom[59].symbol, "Nd");
    atom[59].atomicnum = 60;
    atom[59].atomicwt = 144.242;
    strcpy(atom[59].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f4");
    atom[59].density = 7;
    strcpy(atom[59].colourbox, "\033[031;103m60   144.242\033[0m\n\033[031;103m     Nd     \033[0m\n\033[031;103mNeodymium   \033[0m\n");
    strcpy(atom[59].group, "-");
    strcpy(atom[59].intgroup, "-");
    atom[59].period = 6;

    strcpy(atom[60].name, "Promethium");
    strcpy(atom[60].symbol, "Pm");
    atom[60].atomicnum = 61;
    atom[60].atomicwt = 144.912;
    strcpy(atom[60].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f5");
    atom[60].density = 7.2;
    strcpy(atom[60].colourbox, "\033[031;103m61   144.912\033[0m\n\033[031;103m     Pm     \033[0m\n\033[031;103mPromethium  \033[0m\n");
    strcpy(atom[60].group, "-");
    strcpy(atom[60].intgroup, "-");
    atom[60].period = 6;

    strcpy(atom[61].name, "Samarium");
    strcpy(atom[61].symbol, "Sm");
    atom[61].atomicnum = 62;
    atom[61].atomicwt = 150.36;
    strcpy(atom[61].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f6");
    atom[61].density = 7.54;
    strcpy(atom[61].colourbox, "\033[031;103m62    150.36\033[0m\n\033[031;103m     Sm     \033[0m\n\033[031;103mSamarium    \033[0m\n");
    strcpy(atom[61].group, "-");
    strcpy(atom[61].intgroup, "-");
    atom[61].period = 6;

    strcpy(atom[62].name, "Europium");
    strcpy(atom[62].symbol, "Eu");
    atom[62].atomicnum = 63;
    atom[62].atomicwt = 151.964;
    strcpy(atom[62].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f7");
    atom[62].density = 5.25;
    strcpy(atom[62].colourbox, "\033[031;103m63   151.964\033[0m\n\033[031;103m     Eu     \033[0m\n\033[031;103mEuropium    \033[0m\n");
    strcpy(atom[62].group, "-");
    strcpy(atom[62].intgroup, "-");
    atom[62].period = 6;

    strcpy(atom[63].name, "Gadolinium");
    strcpy(atom[63].symbol, "Gd");
    atom[63].atomicnum = 64;
    atom[63].atomicwt = 157.25;
    strcpy(atom[63].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f7 5d1");
    atom[63].density = 7.89;
    strcpy(atom[63].colourbox, "\033[031;103m64    157.25\033[0m\n\033[031;103m     Gd     \033[0m\n\033[031;103mGadolinium  \033[0m\n");
    strcpy(atom[63].group, "-");
    strcpy(atom[63].intgroup, "-");
    atom[63].period = 6;

    strcpy(atom[64].name, "Terbium");
    strcpy(atom[64].symbol, "Tb");
    atom[64].atomicnum = 65;
    atom[64].atomicwt = 158.925;
    strcpy(atom[64].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f9");
    atom[64].density = 8.25;
    strcpy(atom[64].colourbox, "\033[031;103m65   158.925\033[0m\n\033[031;103m     Tb     \033[0m\n\033[031;103mTerbium     \033[0m\n");
    strcpy(atom[64].group, "-");
    strcpy(atom[64].intgroup, "-");
    atom[64].period = 6;

    strcpy(atom[65].name, "Dysprosium");
    strcpy(atom[65].symbol, "Dy");
    atom[65].atomicnum = 66;
    atom[65].atomicwt = 162.50;
    strcpy(atom[65].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f10");
    atom[65].density = 8.56;
    strcpy(atom[65].colourbox, "\033[031;103m66     162.5\033[0m\n\033[031;103m     Dy     \033[0m\n\033[031;103mDysprosium  \033[0m\n");
    strcpy(atom[65].group, "-");
    strcpy(atom[65].intgroup, "-");
    atom[65].period = 6;

    strcpy(atom[66].name, "Holmium");
    strcpy(atom[66].symbol, "Ho");
    atom[66].atomicnum = 67;
    atom[66].atomicwt = 164.93;
    strcpy(atom[66].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f11");
    atom[66].density = 8.78;
    strcpy(atom[66].colourbox, "\033[031;103m67    164.93\033[0m\n\033[031;103m     Ho     \033[0m\n\033[031;103mHolmium     \033[0m\n");
    strcpy(atom[66].group, "-");
    strcpy(atom[66].intgroup, "-");
    atom[66].period = 6;

    strcpy(atom[67].name, "Erbium");
    strcpy(atom[67].symbol, "Er");
    atom[67].atomicnum = 68;
    atom[67].atomicwt = 167.259;
    strcpy(atom[67].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f12");
    atom[67].density = 9.05;
    strcpy(atom[67].colourbox, "\033[031;103m68   167.259\033[0m\n\033[031;103m     Er     \033[0m\n\033[031;103mErbium      \033[0m\n");
    strcpy(atom[67].group, "-");
    strcpy(atom[67].intgroup, "-");
    atom[67].period = 6;

    strcpy(atom[68].name, "Thulium");
    strcpy(atom[68].symbol, "Tm");
    atom[68].atomicnum = 69;
    atom[68].atomicwt = 168.934;
    strcpy(atom[68].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f13");
    atom[68].density = 9.32;
    strcpy(atom[68].colourbox, "\033[031;103m69   168.934\033[0m\n\033[031;103m     Tm     \033[0m\n\033[031;103mThulium     \033[0m\n");
    strcpy(atom[68].group, "-");
    strcpy(atom[68].intgroup, "-");
    atom[68].period = 6;

    strcpy(atom[69].name, "Ytterbium");
    strcpy(atom[69].symbol, "Yb");
    atom[69].atomicnum = 70;
    atom[69].atomicwt = 173.04;
    strcpy(atom[69].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14");
    atom[69].density = 9.97;
    strcpy(atom[69].colourbox, "\033[031;103m70    173.04\033[0m\n\033[031;103m     Yb     \033[0m\n\033[031;103mYtterbium   \033[0m\n");
    strcpy(atom[69].group, "-");
    strcpy(atom[69].intgroup, "-");
    atom[69].period = 6;

    strcpy(atom[70].name, "Lutetium");
    strcpy(atom[70].symbol, "Lu");
    atom[70].atomicnum = 71;
    atom[70].atomicwt = 174.967;
    strcpy(atom[70].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d1");
    atom[70].density = 9.84;
    strcpy(atom[70].colourbox, "\033[031;103m71   174.967\033[0m\n\033[031;103m     Lu     \033[0m\n\033[031;103mLutetium    \033[0m\n");
    strcpy(atom[70].group, "-");
    strcpy(atom[70].intgroup, "-");
    atom[70].period = 6;

    strcpy(atom[71].name, "Hafnium");
    strcpy(atom[71].symbol, "Hf");
    atom[71].atomicnum = 72;
    atom[71].atomicwt = 178.49;
    strcpy(atom[71].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d2");
    atom[71].density = 13.31;
    strcpy(atom[71].colourbox, "\033[0;30;45m72    178.49\033[0m\n\033[0;30;45m     Hf     \033[0m\n\033[0;30;45mHafnium     \033[0m\n");
    strcpy(atom[71].group, "IVB");
    strcpy(atom[71].intgroup, "4");
    atom[71].period = 6;

    strcpy(atom[72].name, "Tantalum");
    strcpy(atom[72].symbol, "Ta");
    atom[72].atomicnum = 73;
    atom[72].atomicwt = 180.947;
    strcpy(atom[72].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d3");
    atom[72].density = 16.68;
    strcpy(atom[72].colourbox, "\033[0;30;45m73   180.948\033[0m\n\033[0;30;45m     Ta     \033[0m\n\033[0;30;45mTantalum    \033[0m\n");
    strcpy(atom[72].group, "VB");
    strcpy(atom[72].intgroup, "5");
    atom[72].period = 6;

    strcpy(atom[73].name, "Tungsten");
    strcpy(atom[73].symbol, "W");
    atom[73].atomicnum = 74;
    atom[73].atomicwt = 183.84;
    strcpy(atom[73].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d4");
    atom[73].density = 19.26;
    strcpy(atom[73].colourbox, "\033[0;30;45m74    183.84\033[0m\n\033[0;30;45m     W      \033[0m\n\033[0;30;45mTungsten    \033[0m\n");
    strcpy(atom[73].group, "VIB");
    strcpy(atom[73].intgroup, "6");
    atom[73].period = 6;

    strcpy(atom[74].name, "Rhenium");
    strcpy(atom[74].symbol, "Re");
    atom[74].atomicnum = 75;
    atom[74].atomicwt = 186.207;
    strcpy(atom[74].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d5");
    atom[74].density = 21.03;
    strcpy(atom[74].colourbox, "\033[0;30;45m75   186.207\033[0m\n\033[0;30;45m     Re     \033[0m\n\033[0;30;45mRhenium     \033[0m\n");
    strcpy(atom[74].group, "VIIB");
    strcpy(atom[74].intgroup, "7");
    atom[74].period = 6;

    strcpy(atom[75].name, "Osmium");
    strcpy(atom[75].symbol, "Os");
    atom[75].atomicnum = 76;
    atom[75].atomicwt = 190.23;
    strcpy(atom[75].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d6");
    atom[75].density = 22.587;
    strcpy(atom[75].colourbox, "\033[0;30;45m76    190.23\033[0m\n\033[0;30;45m     Os     \033[0m\n\033[0;30;45mOsmium      \033[0m\n");
    strcpy(atom[75].group, "VIIIB");
    strcpy(atom[75].intgroup, "8");
    atom[75].period = 6;

    strcpy(atom[76].name, "Iridium");
    strcpy(atom[76].symbol, "Ir");
    atom[76].atomicnum = 77;
    atom[76].atomicwt = 192.217;
    strcpy(atom[76].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d7");
    atom[76].density = 22.562;
    strcpy(atom[76].colourbox, "\033[0;30;45m77   192.217\033[0m\n\033[0;30;45m     Ir     \033[0m\n\033[0;30;45mIridium     \033[0m\n");
    strcpy(atom[76].group, "VIIIB");
    strcpy(atom[76].intgroup, "9");
    atom[76].period = 6;

    strcpy(atom[77].name, "Platinum");
    strcpy(atom[77].symbol, "Pt");
    atom[77].atomicnum = 78;
    atom[77].atomicwt = 195.084;
    strcpy(atom[77].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 4f14 5d9 6s1");
    atom[77].density = 21.45;
    strcpy(atom[77].colourbox, "\033[0;30;45m78   195.078\033[0m\n\033[0;30;45m     Pt     \033[0m\n\033[0;30;45mPlatinum    \033[0m\n");
    strcpy(atom[77].group, "VIIIB");
    strcpy(atom[77].intgroup, "10");
    atom[77].period = 6;

    strcpy(atom[78].name, "Gold");
    strcpy(atom[78].symbol, "Au");
    atom[78].atomicnum = 79;
    atom[78].atomicwt = 196.966;
    strcpy(atom[78].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 4f14 5d10 6s1");
    atom[78].density = 19.3;
    strcpy(atom[78].colourbox, "\033[0;30;45m79   196.267\033[0m\n\033[0;30;45m     Au     \033[0m\n\033[0;30;45mGold        \033[0m\n");
    strcpy(atom[78].group, "IB");
    strcpy(atom[78].intgroup, "11");
    atom[78].period = 6;

    strcpy(atom[79].name, "Mercury");
    strcpy(atom[79].symbol, "Hg");
    atom[79].atomicnum = 80;
    atom[79].atomicwt = 200.59;
    strcpy(atom[79].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 4f14 5d10 6s2");
    atom[79].density = 13.55;
    strcpy(atom[79].colourbox, "\033[0;30;45m80    200.59\033[0m\n\033[0;30;45m     Hg     \033[0m\n\033[0;30;45mMercury     \033[0m\n");
    strcpy(atom[79].group, "IIB");
    strcpy(atom[79].intgroup, "12");
    atom[79].period = 6;

    strcpy(atom[80].name, "Thallium");
    strcpy(atom[80].symbol, "Tl");
    atom[80].atomicnum = 81;
    atom[80].atomicwt = 204.383;
    strcpy(atom[80].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p1");
    atom[80].density = 11.85;
    strcpy(atom[80].colourbox, "\033[0;30;44m81   204.383\033[0m\n\033[0;30;44m     Ti     \033[0m\n\033[0;30;44mThallium    \033[0m\n");
    strcpy(atom[80].group, "IIIA");
    strcpy(atom[80].intgroup, "13");
    atom[80].period = 6;

    strcpy(atom[81].name, "Lead");
    strcpy(atom[81].symbol, "Pb");
    atom[81].atomicnum = 82;
    atom[81].atomicwt = 207.20;
    strcpy(atom[81].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p2");
    atom[81].density = 11.34;
    strcpy(atom[81].colourbox, "\033[0;30;44m82     207.2\033[0m\n\033[0;30;44m     Pb     \033[0m\n\033[0;30;44mLead        \033[0m\n");
    strcpy(atom[81].group, "IVA");
    strcpy(atom[81].intgroup, "14");
    atom[81].period = 6;

    strcpy(atom[82].name, "Bismuth");
    strcpy(atom[82].symbol, "Bi");
    atom[82].atomicnum = 83;
    atom[82].atomicwt = 208.9804;
    strcpy(atom[82].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p3");
    atom[82].density = 9.8;
    strcpy(atom[82].colourbox, "\033[0;30;44m83    208.98\033[0m\n\033[0;30;44m     Bi     \033[0m\n\033[0;30;44mBismuth     \033[0m\n");
    strcpy(atom[82].group, "VA");
    strcpy(atom[82].intgroup, "15");
    atom[82].period = 6;

    strcpy(atom[83].name, "Polonium");
    strcpy(atom[83].symbol, "Po");
    atom[83].atomicnum = 84;
    atom[83].atomicwt = 208.9824;
    strcpy(atom[83].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p4");
    atom[83].density = 9.2;
    strcpy(atom[83].colourbox, "\033[0;30;41m84       209\033[0m\n\033[0;30;41m     Po     \033[0m\n\033[0;30;41mPolonium    \033[0m\n");
    strcpy(atom[83].group, "VIA");
    strcpy(atom[83].intgroup, "16");
    atom[83].period = 6;

    strcpy(atom[84].name, "Astatine");
    strcpy(atom[84].symbol, "At");
    atom[84].atomicnum = 85;
    atom[84].atomicwt = 209.9871;
    strcpy(atom[84].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p5");
    atom[84].density = 6.4;
    strcpy(atom[84].colourbox, "\033[0;30;42m85     210.0\033[0m\n\033[0;30;42m     At     \033[0m\n\033[0;30;42mAstatine    \033[0m\n");
    strcpy(atom[84].group, "VIIA");
    strcpy(atom[84].intgroup, "17");
    atom[84].period = 6;

    strcpy(atom[85].name, "Radon");
    strcpy(atom[85].symbol, "Rn");
    atom[85].atomicnum = 86;
    atom[85].atomicwt = 222.0176;
    strcpy(atom[85].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6");
    atom[85].density = 0.0098;
    strcpy(atom[85].colourbox, "\033[0;30;46m86     222.0\033[0m\n\033[0;30;46m     Rn     \033[0m\n\033[0;30;46mRadon       \033[0m\n");
    strcpy(atom[85].group, "VIIIA");
    strcpy(atom[85].intgroup, "18");
    atom[85].period = 6;

    strcpy(atom[86].name, "Francium");
    strcpy(atom[86].symbol, "Fr");
    atom[86].atomicnum = 87;
    atom[86].atomicwt = 223.0197;
    strcpy(atom[86].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 7s1");
    atom[86].density = 2.48;
    strcpy(atom[86].colourbox, "\033[0;30;41m87   223.018\033[0m\n\033[0;30;41m     Fr     \033[0m\n\033[0;30;41mFrancium    \033[0m\n");
    strcpy(atom[86].group, "IA");
    strcpy(atom[86].intgroup, "1");
    atom[86].period = 7;

    strcpy(atom[87].name, "Radium");
    strcpy(atom[87].symbol, "Ra");
    atom[87].atomicnum = 88;
    atom[87].atomicwt = 226.0254;
    strcpy(atom[87].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 7s2");
    atom[87].density = 5.5;
    strcpy(atom[87].colourbox, "\033[0;30;44m88   226.025\033[0m\n\033[0;30;44m     Ra     \033[0m\n\033[0;30;44mRadium      \033[0m\n");
    strcpy(atom[87].group, "IIA");
    strcpy(atom[87].intgroup, "2");
    atom[87].period = 7;

    strcpy(atom[88].name, "Actinium");
    strcpy(atom[88].symbol, "Ac");
    atom[88].atomicnum = 89;
    atom[88].atomicwt = 227.0278;
    strcpy(atom[88].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 6d1 7s2");
    atom[88].density = 10.07;
    strcpy(atom[88].colourbox, "\033[031;106m89   227.028\033[0m\n\033[031;106m     Ac     \033[0m\n\033[031;106mActinium    \033[0m\n");
    strcpy(atom[88].group, "IIIB");
    strcpy(atom[88].intgroup, "3");
    atom[88].period = 7;

    strcpy(atom[89].name, "Thorium");
    strcpy(atom[89].symbol, "Th");
    atom[89].atomicnum = 90;
    atom[89].atomicwt = 232.0380;
    strcpy(atom[89].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 6d2 7s2");
    atom[89].density = 11.72;
    strcpy(atom[89].colourbox, "\033[030;106m90   232.038\033[0m\n\033[030;106m     Th     \033[0m\n\033[030;106mThorium     \033[0m\n");
    strcpy(atom[89].group, "-");
    strcpy(atom[89].intgroup, "-");
    atom[89].period = 7;

    strcpy(atom[90].name, "Protactinium");
    strcpy(atom[90].symbol, "Pa");
    atom[90].atomicnum = 91;
    atom[90].atomicwt = 231.0358;
    strcpy(atom[90].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f2 6d1 7s2");
    atom[90].density = 15.37;
    strcpy(atom[90].colourbox, "\033[030;106m91   231.036\033[0m\n\033[030;106m     Pa     \033[0m\n\033[030;106mProtactinium\033[0m\n");
    strcpy(atom[90].group, "-");
    strcpy(atom[90].intgroup, "-");
    atom[90].period = 7;

    strcpy(atom[91].name, "Uranium");
    strcpy(atom[91].symbol, "U");
    atom[91].atomicnum = 92;
    atom[91].atomicwt = 238.0289;
    strcpy(atom[91].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f3 6d1 7s2");
    atom[91].density = 19.05;
    strcpy(atom[91].colourbox, "\033[030;106m92   238.029\033[0m\n\033[030;106m     U      \033[0m\n\033[030;106mUranium     \033[0m\n");
    strcpy(atom[91].group, "-");
    strcpy(atom[91].intgroup, "-");
    atom[91].period = 7;

    strcpy(atom[92].name, "Neptunium");
    strcpy(atom[92].symbol, "Np");
    atom[92].atomicnum = 93;
    atom[92].atomicwt = 237.0482;
    strcpy(atom[92].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f4 6d1 7s2");
    atom[92].density = 20.48;
    strcpy(atom[92].colourbox, "\033[030;106m93   237.048\033[0m\n\033[030;106m     Np     \033[0m\n\033[030;106mNeptunium   \033[0m\n");
    strcpy(atom[92].group, "-");
    strcpy(atom[92].intgroup, "-");
    atom[92].period = 7;

    strcpy(atom[93].name, "Plutonium");
    strcpy(atom[93].symbol, "Pu");
    atom[93].atomicnum = 94;
    atom[93].atomicwt = 244.0642;
    strcpy(atom[93].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f6 7s2");
    atom[93].density = 19.74;
    strcpy(atom[93].colourbox, "\033[030;106m94   244.064\033[0m\n\033[030;106m     Pu     \033[0m\n\033[030;106mPlutonium   \033[0m\n");
    strcpy(atom[93].group, "-");
    strcpy(atom[93].intgroup, "-");
    atom[93].period = 7;

    strcpy(atom[94].name, "Americium");
    strcpy(atom[94].symbol, "Am");
    atom[94].atomicnum = 95;
    atom[94].atomicwt = 243.0614;
    strcpy(atom[94].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f7 7s2");
    atom[94].density = 13.67;
    strcpy(atom[94].colourbox, "\033[030;106m95   243.061\033[0m\n\033[030;106m     Am     \033[0m\n\033[030;106mAmericium   \033[0m\n");
    strcpy(atom[94].group, "-");
    strcpy(atom[94].intgroup, "-");
    atom[94].period = 7;

    strcpy(atom[95].name, "Curium");
    strcpy(atom[95].symbol, "Cm");
    atom[95].atomicnum = 96;
    atom[95].atomicwt = 247.0703;
    strcpy(atom[95].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f7 6d1 7s2");
    atom[95].density = 13.51;
    strcpy(atom[95].colourbox, "\033[030;106m96   247.070\033[0m\n\033[030;106m     Cm     \033[0m\n\033[030;106mCurium      \033[0m\n");
    strcpy(atom[95].group, "-");
    strcpy(atom[95].intgroup, "-");
    atom[95].period = 7;

    strcpy(atom[96].name, "Berkelium");
    strcpy(atom[96].symbol, "Bk");
    atom[96].atomicnum = 97;
    atom[96].atomicwt = 247.0703;
    strcpy(atom[96].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f9 7s2");
    atom[96].density = 13.25;
    strcpy(atom[96].colourbox, "\033[030;106m97   247.070\033[0m\n\033[030;106m     Bk     \033[0m\n\033[030;106mBerkelium   \033[0m\n");
    strcpy(atom[96].group, "-");
    strcpy(atom[96].intgroup, "-");
    atom[96].period = 7;

    strcpy(atom[97].name, "Californium");
    strcpy(atom[97].symbol, "Cf");
    atom[97].atomicnum = 98;
    atom[97].atomicwt = 251.0796;
    strcpy(atom[97].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f10 7s2");
    atom[97].density = 15.1;
    strcpy(atom[97].colourbox, "\033[030;106m98   251.079\033[0m\n\033[030;106m     Cf     \033[0m\n\033[030;106mCalifornium \033[0m\n");
    strcpy(atom[97].group, "-");
    strcpy(atom[97].intgroup, "-");
    atom[97].period = 7;

    strcpy(atom[98].name, "Einsteinium");
    strcpy(atom[98].symbol, "Es");
    atom[98].atomicnum = 99;
    atom[98].atomicwt = 252.0829;
    strcpy(atom[98].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f11 7s2");
    atom[98].density = 13.5;
    strcpy(atom[98].colourbox, "\033[030;106m99   252.083\033[0m\n\033[030;106m     Es     \033[0m\n\033[030;106mEinsteinium \033[0m\n");
    strcpy(atom[98].group, "-");
    strcpy(atom[98].intgroup, "-");
    atom[98].period = 7;

    strcpy(atom[99].name, "Fermium");
    strcpy(atom[99].symbol, "Fm");
    atom[99].atomicnum = 100;
    atom[99].atomicwt = 257.0951;
    strcpy(atom[99].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f12 7s2");
    atom[99].density = 19.050;
    strcpy(atom[99].colourbox, "\033[030;106m100  257.095\033[0m\n\033[030;106m     Fm     \033[0m\n\033[030;106mFermium     \033[0m\n");
    strcpy(atom[99].group, "-");
    strcpy(atom[99].intgroup, "-");
    atom[99].period = 7;

    strcpy(atom[100].name, "Mendelevium");
    strcpy(atom[100].symbol, "Md");
    atom[100].atomicnum = 101;
    atom[100].atomicwt = 258.00;
    strcpy(atom[100].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f13 7s2");
    atom[100].density = 0;
    strcpy(atom[100].colourbox, "\033[030;106m101  258.095\033[0m\n\033[030;106m     Md     \033[0m\n\033[030;106mMendelevium \033[0m\n");
    strcpy(atom[100].group, "-");
    strcpy(atom[100].intgroup, "-");
    atom[100].period = 7;

    strcpy(atom[101].name, "Nobelium");
    strcpy(atom[101].symbol, "No");
    atom[101].atomicnum = 102;
    atom[101].atomicwt = 259.1009;
    strcpy(atom[101].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f14 7s2");
    atom[101].density = 0;
    strcpy(atom[101].colourbox, "\033[030;106m111  259.101\033[0m\n\033[030;106m     No     \033[0m\n\033[030;106mNobelium    \033[0m\n");
    strcpy(atom[101].group, "-");
    strcpy(atom[101].intgroup, "-");
    atom[101].period = 7;

    strcpy(atom[102].name, "Lawrencium");
    strcpy(atom[102].symbol, "Lr");
    atom[102].atomicnum = 103;
    atom[102].atomicwt = 266.1193;
    strcpy(atom[102].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f14 7s2 7p1");
    atom[102].density = 0;
    strcpy(atom[102].colourbox, "\033[030;106m112  266.119\033[0m\n\033[030;106m     Lr     \033[0m\n\033[030;106mLawrencium  \033[0m\n");
    strcpy(atom[102].group, "-");
    strcpy(atom[102].intgroup, "-");
    atom[102].period = 7;

    strcpy(atom[103].name, "Rutherfordium");
    strcpy(atom[103].symbol, "Rf");
    atom[103].atomicnum = 104;
    atom[103].atomicwt = 261.1087;
    strcpy(atom[103].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f14 6d2 7s2");
    atom[103].density = 23;
    strcpy(atom[103].colourbox, "\033[0;30;45m104  261.1087\033[0m\n\033[0;30;45m     Rf      \033[0m\n\033[0;30;45mRutherfordium\033[0m\n");
    strcpy(atom[103].group, "IVB");
    strcpy(atom[103].intgroup, "4");
    atom[103].period = 7;

    strcpy(atom[104].name, "Dubnium");
    strcpy(atom[104].symbol, "Db");
    atom[104].atomicnum = 105;
    atom[104].atomicwt = 262.1138;
    strcpy(atom[104].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f14 6d3 7s2");
    atom[104].density = 29;
    strcpy(atom[104].colourbox, "\033[0;30;45m105  262.114\033[0m\n\033[0;30;45m     Db     \033[0m\n\033[0;30;45mDubnium     \033[0m\n");
    strcpy(atom[104].group, "VB");
    strcpy(atom[104].intgroup, "5");
    atom[104].period = 7;

    strcpy(atom[105].name, "Seaborgium");
    strcpy(atom[105].symbol, "Sg");
    atom[105].atomicnum = 106;
    atom[105].atomicwt = 263.1182;
    strcpy(atom[105].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f14 6d4 7s2");
    atom[105].density = 35;
    strcpy(atom[105].colourbox, "\033[0;30;45m106  263.118\033[0m\n\033[0;30;45m     Sg     \033[0m\n\033[0;30;45mSeaborgium  \033[0m\n");
    strcpy(atom[105].group, "VIB");
    strcpy(atom[105].intgroup, "6");
    atom[105].period = 7;

    strcpy(atom[106].name, "Bohrium");
    strcpy(atom[106].symbol, "Bh");
    atom[106].atomicnum = 107;
    atom[106].atomicwt = 262.1229;
    strcpy(atom[106].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f14 6d5 7s2");
    atom[106].density = 37;
    strcpy(atom[106].colourbox, "\033[0;30;45m107  262.123\033[0m\n\033[0;30;45m     Bh     \033[0m\n\033[0;30;45mBohrium     \033[0m\n");
    strcpy(atom[106].group, "VIIB");
    strcpy(atom[106].intgroup, "7");
    atom[106].period = 7;

    strcpy(atom[107].name, "Hassium");
    strcpy(atom[107].symbol, "Hs");
    atom[107].atomicnum = 108;
    atom[107].atomicwt = 269;
    strcpy(atom[107].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f14 6d6 7s2");
    atom[107].density = 0;
    strcpy(atom[107].colourbox, "\033[0;30;45m108      269\033[0m\n\033[0;30;45m     Hs     \033[0m\n\033[0;30;45mHassium     \033[0m\n");
    strcpy(atom[107].group, "VIIIB");
    strcpy(atom[107].intgroup, "8");
    atom[107].period = 7;

    strcpy(atom[108].name, "Meinerium");
    strcpy(atom[108].symbol, "Mt");
    atom[108].atomicnum = 109;
    atom[108].atomicwt = 278;
    strcpy(atom[108].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f14 6d7 7s2");
    atom[108].density = 37.4;
    strcpy(atom[108].colourbox, "\033[0;30;45m109      278\033[0m\n\033[0;30;45m     Mt     \033[0m\n\033[0;30;45mMeitnerium  \033[0m\n");
    strcpy(atom[108].group, "VIIIB");
    strcpy(atom[108].intgroup, "9");
    atom[108].period = 7;

    strcpy(atom[109].name, "Darmstadtium");
    strcpy(atom[109].symbol, "Ds");
    atom[109].atomicnum = 110;
    atom[109].atomicwt = 281.1620;
    strcpy(atom[109].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f14 6d8 7s2");
    atom[109].density = 34.8;
    strcpy(atom[109].colourbox, "\033[0;30;45m110  281.162\033[0m\n\033[0;30;45m     Ds     \033[0m\n\033[0;30;45mDarmstadtium\033[0m\n");
    strcpy(atom[109].group, "VIIIB");
    strcpy(atom[109].intgroup, "10");
    atom[109].period = 7;

    strcpy(atom[110].name, "Roentgenium");
    strcpy(atom[109].symbol, "Rg");
    atom[110].atomicnum = 111;
    atom[110].atomicwt = 281.1684;
    strcpy(atom[110].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f14 6d9 7s2");
    atom[110].density = 0;
    strcpy(atom[110].colourbox, "\033[0;30;45m111  281.168\033[0m\n\033[0;30;45m     Rg     \033[0m\n\033[0;30;45mRoentgenium \033[0m\n");
    strcpy(atom[110].group, "IB");
    strcpy(atom[110].intgroup, "11");
    atom[110].period = 7;

    strcpy(atom[111].name, "Copernicium");
    strcpy(atom[111].symbol, "Cn");
    atom[111].atomicnum = 112;
    atom[111].atomicwt = 285.1744;
    strcpy(atom[111].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f14 6d10 7s2");
    atom[111].density = 20;
    strcpy(atom[111].colourbox, "\033[0;30;45m112  285.174\033[0m\n\033[0;30;45m     Cn     \033[0m\n\033[0;30;45mCopernicium \033[0m\n");
    strcpy(atom[111].group, "IIB");
    strcpy(atom[111].intgroup, "12");
    atom[111].period = 7;

    strcpy(atom[112].name, "Nihonium");
    strcpy(atom[112].symbol, "Nh");
    atom[112].atomicnum = 113;
    atom[112].atomicwt = 286.1810;
    strcpy(atom[112].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f14 6d10 7s2 7p1");
    atom[112].density = 16;
    strcpy(atom[112].colourbox, "\033[0;30;44m113  286.181\033[0m\n\033[0;30;44m     Nh     \033[0m\n\033[0;30;44mNihonium    \033[0m\n");
    strcpy(atom[112].group, "IIIA");
    strcpy(atom[112].intgroup, "13");
    atom[112].period = 7;

    strcpy(atom[113].name, "Flerovium");
    strcpy(atom[113].symbol, "Fl");
    atom[113].atomicnum = 114;
    atom[113].atomicwt = 287.1904;
    strcpy(atom[113].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f14 6d10 7s2 7p2");
    atom[113].density = 14;
    strcpy(atom[113].colourbox, "\033[0;30;44m114  287.190\033[0m\n\033[0;30;44m     Fl     \033[0m\n\033[0;30;44mFlerovium   \033[0m\n");
    strcpy(atom[113].group, "IVA");
    strcpy(atom[113].intgroup, "14");
    atom[113].period = 7;

    strcpy(atom[114].name, "Moscovium");
    strcpy(atom[114].symbol, "Mc");
    atom[114].atomicnum = 115;
    atom[114].atomicwt = 288.1943;
    strcpy(atom[114].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f14 6d10 7s2 7p3");
    atom[114].density = 13.5;
    strcpy(atom[114].colourbox, "\033[0;30;44m115  288.194\033[0m\n\033[0;30;44m     Mc     \033[0m\n\033[0;30;44mMoscovium   \033[0m\n");
    strcpy(atom[114].group, "VA");
    strcpy(atom[114].intgroup, "15");
    atom[114].period = 7;

    strcpy(atom[115].name, "Livermorium");
    strcpy(atom[115].symbol, "Lv");
    atom[115].atomicnum = 116;
    atom[115].atomicwt = 291.2045;
    strcpy(atom[115].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f14 6d10 7s2 7p4");
    atom[115].density = 0;
    strcpy(atom[115].colourbox, "\033[0;30;44m116  291.205\033[0m\n\033[0;30;44m     Lv     \033[0m\n\033[0;30;44mLivermorium \033[0m\n");
    strcpy(atom[115].group, "VIA");
    strcpy(atom[115].intgroup, "16");
    atom[115].period = 7;

    strcpy(atom[116].name, "Tennessine");
    strcpy(atom[116].symbol, "Ts");
    atom[116].atomicnum = 117;
    atom[116].atomicwt = 294.2104;
    strcpy(atom[116].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f14 6d10 7s2 7p5");
    atom[116].density = 0;
    strcpy(atom[116].colourbox, "\033[0;30;42m117  294.210\033[0m\n\033[0;30;42m     Ts     \033[0m\n\033[0;30;42mTennessine  \033[0m\n");
    strcpy(atom[116].group, "VIIA");
    strcpy(atom[116].intgroup, "17");
    atom[116].period = 7;

    strcpy(atom[117].name, "Oganesson");
    strcpy(atom[117].symbol, "Og");
    atom[117].atomicnum = 118;
    atom[117].atomicwt = 294.2139;
    strcpy(atom[117].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f14 6d10 7s2 7p6");
    atom[117].density = 5;
    strcpy(atom[117].colourbox, "\033[0;30;46m118  294.214\033[0m\n\033[0;30;46m     Og     \033[0m\n\033[0;30;46mOganesson   \033[0m\n");
    strcpy(atom[117].group, "VIIIA");
    strcpy(atom[117].intgroup, "18");
    atom[117].period = 7;
}
