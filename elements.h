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
} atom[118];

extern void table()
{
    strcpy(atom[0].name, "Hydrogen");
    strcpy(atom[0].symbol, "H");
    atom[0].atomicnum = 1;
    atom[0].atomicwt = 1.00784;
    strcpy(atom[0].configuration, "1s1");
    atom[0].density = 0.0000899;

    strcpy(atom[1].name, "Helium");
    strcpy(atom[1].symbol, "He");
    atom[1].atomicnum = 2;
    atom[1].atomicwt = 4.0026;
    strcpy(atom[1].configuration, "1s2");
    atom[1].density = 0.00017846;

    strcpy(atom[2].name, "Lithium");
    strcpy(atom[2].symbol, "Li");
    atom[2].atomicnum = 3;
    atom[2].atomicwt = 6.941;
    strcpy(atom[2].configuration, "1s2 2s1");
    atom[2].density = 0.534;

    strcpy(atom[3].name, "Beryllium");
    strcpy(atom[3].symbol, "Be");
    atom[3].atomicnum = 4;
    atom[3].atomicwt = 9.0121;
    strcpy(atom[3].configuration, "1s2 2s2");
    atom[3].density = 1.848;

    strcpy(atom[4].name, "Boron");
    strcpy(atom[4].symbol, "B");
    atom[4].atomicnum = 5;
    atom[4].atomicwt = 10.811;
    strcpy(atom[4].configuration, "1s2 2s2 2p1");
    atom[4].density = 2.34;

    strcpy(atom[5].name, "Carbon");
    strcpy(atom[5].symbol, "C");
    atom[5].atomicnum = 6;
    atom[5].atomicwt = 12.0107;
    strcpy(atom[5].configuration, "1s2 2s2 2p2");
    atom[5].density = 2.26;

    strcpy(atom[6].name, "Nitrogen");
    strcpy(atom[6].symbol, "N");
    atom[6].atomicnum = 7;
    atom[6].atomicwt = 14.0067;
    strcpy(atom[6].configuration, "1s2 2s2 2p3");
    atom[6].density = 0.001251;

    strcpy(atom[7].name, "Oxygen");
    strcpy(atom[7].symbol, "O");
    atom[7].atomicnum = 8;
    atom[7].atomicwt = 15.9994;
    strcpy(atom[7].configuration, "1s2 2s2 2p4");
    atom[7].density = 0.00142897;

    strcpy(atom[8].name, "Fluorine");
    strcpy(atom[8].symbol, "F");
    atom[8].atomicnum = 9;
    atom[8].atomicwt = 18.9984;
    strcpy(atom[8].configuration, "1s2 2s2 2p5");
    atom[8].density = 0.001696;

    strcpy(atom[9].name, "Neon");
    strcpy(atom[9].symbol, "Ne");
    atom[9].atomicnum = 10;
    atom[9].atomicwt = 20.1797;
    strcpy(atom[9].configuration, "1s2 2s2 2p6");
    atom[9].density = 0.0009002;

    strcpy(atom[10].name, "Sodium");
    strcpy(atom[10].symbol, "Na");
    atom[10].atomicnum = 11;
    atom[10].atomicwt = 22.9897;
    strcpy(atom[10].configuration, "1s2 2s2 2p6 3s1");
    atom[10].density = 0.0971;

    strcpy(atom[11].name, "Magnesium");
    strcpy(atom[11].symbol, "Mg");
    atom[11].atomicnum = 12;
    atom[11].atomicwt = 24.3050;
    strcpy(atom[11].configuration, "1s2 2s2 2p6 3s2");
    atom[11].density = 1.738;

    strcpy(atom[12].name, "Aluminium");
    strcpy(atom[12].symbol, "Al");
    atom[12].atomicnum = 13;
    atom[12].atomicwt = 26.9815;
    strcpy(atom[12].configuration, "1s2 2s2 2p6 3s2 3p1");
    atom[12].density = 2.6989;

    strcpy(atom[13].name, "Silicon");
    strcpy(atom[13].symbol, "Si");
    atom[13].atomicnum = 14;
    atom[13].atomicwt = 28.0855;
    strcpy(atom[13].configuration, "1s2 2s2 2p6 3s2 3p2");
    atom[13].density = 2.33;

    strcpy(atom[14].name, "Phosphorus");
    strcpy(atom[14].symbol, "P");
    atom[14].atomicnum = 15;
    atom[14].atomicwt = 30.9737;
    strcpy(atom[14].configuration, "1s2 2s2 2p6 3s2 3p3");
    atom[14].density = 2.82;

    strcpy(atom[15].name, "Sulphur");
    strcpy(atom[15].symbol, "S");
    atom[15].atomicnum = 16;
    atom[15].atomicwt = 32.065;
    strcpy(atom[15].configuration, "1s2 2s2 2p6 3s2 3p4");
    atom[15].density = 2.070;

    strcpy(atom[16].name, "Chlorine");
    strcpy(atom[16].symbol, "Cl");
    atom[16].atomicnum = 17;
    atom[16].atomicwt = 35.453;
    strcpy(atom[16].configuration, "1s2 2s2 2p6 3s2 3p5");
    atom[16].density = 0.003214;

    strcpy(atom[17].name, "Argon");
    strcpy(atom[17].symbol, "Ar");
    atom[17].atomicnum = 18;
    atom[17].atomicwt = 39.948;
    strcpy(atom[17].configuration, "1s2 2s2 2p6 3s2 3p6");
    atom[17].density = 0.001784;

    strcpy(atom[18].name, "Potassium");
    strcpy(atom[18].symbol, "K");
    atom[18].atomicnum = 19;
    atom[18].atomicwt = 39.0983;
    strcpy(atom[18].configuration, "1s2 2s2 2p6 3s2 3p6 4s1");
    atom[18].density = 0.856;

    strcpy(atom[19].name, "Calcium");
    strcpy(atom[19].symbol, "Ca");
    atom[19].atomicnum = 20;
    atom[19].atomicwt = 40.078;
    strcpy(atom[19].configuration, "1s2 2s2 2p6 3s2 3p6 4s2");
    atom[19].density = 1.55;

    strcpy(atom[20].name, "Scandium");
    strcpy(atom[20].symbol, "Sc");
    atom[20].atomicnum = 21;
    atom[20].atomicwt = 44.9559;
    strcpy(atom[20].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d1");
    atom[20].density = 2.99;

    strcpy(atom[21].name, "Titanium");
    strcpy(atom[21].symbol, "Ti");
    atom[21].atomicnum = 22;
    atom[21].atomicwt = 47.867;
    strcpy(atom[21].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d2");
    atom[21].density = 4.54;

    strcpy(atom[22].name, "Vanadium");
    strcpy(atom[22].symbol, "V");
    atom[22].atomicnum = 23;
    atom[22].atomicwt = 50.9415;
    strcpy(atom[22].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d3");
    atom[22].density = 6.11;

    strcpy(atom[23].name, "Chromium");
    strcpy(atom[23].symbol, "Cr");
    atom[23].atomicnum = 24;
    atom[23].atomicwt = 51.9961;
    strcpy(atom[23].configuration, "1s2 2s2 2p6 3s2 3p6 4s1 3d5");
    atom[23].density = 7.19;

    strcpy(atom[24].name, "Manganese");
    strcpy(atom[24].symbol, "Mg");
    atom[24].atomicnum = 25;
    atom[24].atomicwt = 54.9380;
    strcpy(atom[24].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d5");
    atom[24].density = 7.21;

    strcpy(atom[25].name, "Iron");
    strcpy(atom[25].symbol, "Fe");
    atom[25].atomicnum = 26;
    atom[25].atomicwt = 55.845;
    strcpy(atom[25].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d6");
    atom[25].density = 7.874;

    strcpy(atom[26].name, "Cobalt");
    strcpy(atom[26].symbol, "Co");
    atom[26].atomicnum = 27;
    atom[26].atomicwt = 58.9331;
    strcpy(atom[26].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d7");
    atom[26].density = 8.9;

    strcpy(atom[27].name, "Nickel");
    strcpy(atom[27].symbol, "Ni");
    atom[27].atomicnum = 28;
    atom[27].atomicwt = 58.6934;
    strcpy(atom[27].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d8");
    atom[27].density = 8.902;

    strcpy(atom[28].name, "Copper");
    strcpy(atom[28].symbol, "Cu");
    atom[28].atomicnum = 29;
    atom[28].atomicwt = 63.546;
    strcpy(atom[28].configuration, "1s2 2s2 2p6 3s2 3p6 4s1 3d10");
    atom[28].density = 8.92;

    strcpy(atom[29].name, "Zinc");
    strcpy(atom[29].symbol, "Zn");
    atom[29].atomicnum = 30;
    atom[29].atomicwt = 65.38;
    strcpy(atom[29].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10");
    atom[29].density = 7.133;

    strcpy(atom[30].name, "Gallium");
    strcpy(atom[30].symbol, "Ga");
    atom[30].atomicnum = 31;
    atom[30].atomicwt = 69.723;
    strcpy(atom[30].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p1");
    atom[30].density = 5.91;

    strcpy(atom[31].name, "Germanium");
    strcpy(atom[31].symbol, "Ge");
    atom[31].atomicnum = 32;
    atom[31].atomicwt = 72.64;
    strcpy(atom[31].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p2");
    atom[31].density = 5.323;

    strcpy(atom[32].name, "Arsenic");
    strcpy(atom[32].symbol, "As");
    atom[32].atomicnum = 33;
    atom[32].atomicwt = 74.9216;
    strcpy(atom[32].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p3");
    atom[32].density = 5.72;

    strcpy(atom[33].name, "Selenium");
    strcpy(atom[33].symbol, "Se");
    atom[33].atomicnum = 34;
    atom[33].atomicwt = 78.96;
    strcpy(atom[33].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p4");
    atom[33].density = 4.79;

    strcpy(atom[34].name, "Bromine");
    strcpy(atom[34].symbol, "Br");
    atom[34].atomicnum = 35;
    atom[34].atomicwt = 79.904;
    strcpy(atom[34].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p5");
    atom[34].density = 3.14;

    strcpy(atom[35].name, "Krypton");
    strcpy(atom[35].symbol, "Kr");
    atom[35].atomicnum = 36;
    atom[35].atomicwt = 83.798;
    strcpy(atom[35].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6");
    atom[35].density = 0.003749;

    strcpy(atom[36].name, "Rubidium");
    strcpy(atom[36].symbol, "Rb");
    atom[36].atomicnum = 37;
    atom[36].atomicwt = 85.467;
    strcpy(atom[36].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s1");
    atom[36].density = 1.53;

    strcpy(atom[37].name, "Strontium");
    strcpy(atom[37].symbol, "Sr");
    atom[37].atomicnum = 38;
    atom[37].atomicwt = 87.62;
    strcpy(atom[37].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2");
    atom[37].density = 2.54;

    strcpy(atom[38].name, "Yttrium");
    strcpy(atom[38].symbol, "Y");
    atom[38].atomicnum = 39;
    atom[38].atomicwt = 88.905;
    strcpy(atom[38].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d1");
    atom[38].density = 4.47;

    strcpy(atom[39].name, "Zirconium");
    strcpy(atom[39].symbol, "Zr");
    atom[39].atomicnum = 40;
    atom[39].atomicwt = 91.224;
    strcpy(atom[39].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d2");
    atom[39].density = 6.51;

    strcpy(atom[40].name, "Niobium");
    strcpy(atom[40].symbol, "Nb");
    atom[40].atomicnum = 41;
    atom[40].atomicwt = 92.906;
    strcpy(atom[40].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s1 4d4");
    atom[40].density = 8.58;

    strcpy(atom[41].name, "Molybdenum");
    strcpy(atom[41].symbol, "Mo");
    atom[41].atomicnum = 42;
    atom[41].atomicwt = 95.94;
    strcpy(atom[41].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s1 4d5");
    atom[41].density = 10.22;

    strcpy(atom[42].name, "Technetium");
    strcpy(atom[42].symbol, "Tc");
    atom[42].atomicnum = 43;
    atom[42].atomicwt = 98.906;
    strcpy(atom[42].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d5");
    atom[42].density = 11.49;

    strcpy(atom[43].name, "Ruthenium");
    strcpy(atom[43].symbol, "Ru");
    atom[43].atomicnum = 44;
    atom[43].atomicwt = 101.07;
    strcpy(atom[43].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s1 4d7");
    atom[43].density = 12.41;

    strcpy(atom[44].name, "Rhodium");
    strcpy(atom[44].symbol, "Rh");
    atom[44].atomicnum = 45;
    atom[44].atomicwt = 102.90;
    strcpy(atom[44].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s1 4d8");
    atom[44].density = 12.41;

    strcpy(atom[45].name, "Palladium");
    strcpy(atom[45].symbol, "Pd");
    atom[45].atomicnum = 46;
    atom[45].atomicwt = 106.42;
    strcpy(atom[45].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 4d10");
    atom[45].density = 12.02;

    strcpy(atom[46].name, "Silver");
    strcpy(atom[46].symbol, "Ag");
    atom[46].atomicnum = 47;
    atom[46].atomicwt = 107.868;
    strcpy(atom[46].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s1 4d10");
    atom[46].density = 10.49;

    strcpy(atom[47].name, "Cadmium");
    strcpy(atom[47].symbol, "Cd");
    atom[47].atomicnum = 48;
    atom[47].atomicwt = 112.411;
    strcpy(atom[47].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10");
    atom[47].density = 8.64;

    strcpy(atom[48].name, "Indium");
    strcpy(atom[48].symbol, "In");
    atom[48].atomicnum = 49;
    atom[48].atomicwt = 114.818;
    strcpy(atom[48].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p1");
    atom[48].density = 7.31;

    strcpy(atom[49].name, "Tin");
    strcpy(atom[49].symbol, "Sn");
    atom[49].atomicnum = 50;
    atom[49].atomicwt = 118.710;
    strcpy(atom[49].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p2");
    atom[49].density = 7.29;

    strcpy(atom[50].name, "Antimony");
    strcpy(atom[50].symbol, "Sb");
    atom[50].atomicnum = 51;
    atom[50].atomicwt = 121.76;
    strcpy(atom[50].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p3");
    atom[50].density = 6.69;

    strcpy(atom[51].name, "Tellurium");
    strcpy(atom[51].symbol, "Te");
    atom[51].atomicnum = 52;
    atom[51].atomicwt = 127.60;
    strcpy(atom[51].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p4");
    atom[51].density = 6.25;

    strcpy(atom[52].name, "Iodine");
    strcpy(atom[52].symbol, "I");
    atom[52].atomicnum = 53;
    atom[52].atomicwt = 126.904;
    strcpy(atom[52].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p5");
    atom[52].density = 4.94;

    strcpy(atom[53].name, "Xenon");
    strcpy(atom[53].symbol, "Xe");
    atom[53].atomicnum = 54;
    atom[53].atomicwt = 131.293;
    strcpy(atom[53].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6");
    atom[53].density = 0.005894;

    strcpy(atom[54].name, "Caesium");
    strcpy(atom[54].symbol, "Cs");
    atom[54].atomicnum = 55;
    atom[54].atomicwt = 132.905;
    strcpy(atom[54].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s1");
    atom[54].density = 1.9;

    strcpy(atom[55].name, "Barium");
    strcpy(atom[55].symbol, "Ba");
    atom[55].atomicnum = 56;
    atom[55].atomicwt = 137.327;
    strcpy(atom[55].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2");
    atom[55].density = 3.5;

    strcpy(atom[56].name, "Lanthanum");
    strcpy(atom[56].symbol, "La");
    atom[56].atomicnum = 57;
    atom[56].atomicwt = 138.905;
    strcpy(atom[56].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f0 5d1");
    atom[56].density = 6.16;

    strcpy(atom[57].name, "Cerium");
    strcpy(atom[57].symbol, "Ce");
    atom[57].atomicnum = 58;
    atom[57].atomicwt = 140.116;
    strcpy(atom[57].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f1 5d1");
    atom[57].density = 6.77;

    strcpy(atom[58].name, "Praseodymium");
    strcpy(atom[58].symbol, "Pr");
    atom[58].atomicnum = 59;
    atom[58].atomicwt = 140.904;
    strcpy(atom[58].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f3");
    atom[58].density = 6.773;

    strcpy(atom[59].name, "Neodumium");
    strcpy(atom[59].symbol, "Nd");
    atom[59].atomicnum = 60;
    atom[59].atomicwt = 144.242;
    strcpy(atom[59].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f4");
    atom[59].density = 7;

    strcpy(atom[60].name, "Promethium");
    strcpy(atom[60].symbol, "Pm");
    atom[60].atomicnum = 61;
    atom[60].atomicwt = 144.912;
    strcpy(atom[60].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f5");
    atom[60].density = 7.2;

    strcpy(atom[61].name, "Samarium");
    strcpy(atom[61].symbol, "Sm");
    atom[61].atomicnum = 62;
    atom[61].atomicwt = 150.36;
    strcpy(atom[61].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f6");
    atom[61].density = 7.54;

    strcpy(atom[62].name, "Europium");
    strcpy(atom[62].symbol, "Eu");
    atom[62].atomicnum = 63;
    atom[62].atomicwt = 151.964;
    strcpy(atom[62].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f7");
    atom[62].density = 5.25;

    strcpy(atom[63].name, "Gadolinium");
    strcpy(atom[63].symbol, "Gd");
    atom[63].atomicnum = 64;
    atom[63].atomicwt = 157.25;
    strcpy(atom[63].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f7 5d1");
    atom[63].density = 7.89;

    strcpy(atom[64].name, "Terbium");
    strcpy(atom[64].symbol, "Tb");
    atom[64].atomicnum = 65;
    atom[64].atomicwt = 158.925;
    strcpy(atom[64].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f9");
    atom[64].density = 8.25;

    strcpy(atom[65].name, "Dysprosium");
    strcpy(atom[65].symbol, "Dy");
    atom[65].atomicnum = 66;
    atom[65].atomicwt = 162.50;
    strcpy(atom[65].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f10");
    atom[65].density = 8.56;

    strcpy(atom[66].name, "Holmium");
    strcpy(atom[66].symbol, "Ho");
    atom[66].atomicnum = 67;
    atom[66].atomicwt = 164.93;
    strcpy(atom[66].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f11");
    atom[66].density = 8.78;

    strcpy(atom[67].name, "Erbium");
    strcpy(atom[67].symbol, "Er");
    atom[67].atomicnum = 68;
    atom[67].atomicwt = 167.259;
    strcpy(atom[67].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f12");
    atom[67].density = 9.05;

    strcpy(atom[68].name, "Thulium");
    strcpy(atom[68].symbol, "Tm");
    atom[68].atomicnum = 69;
    atom[68].atomicwt = 168.934;
    strcpy(atom[68].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f13");
    atom[68].density = 9.32;

    strcpy(atom[69].name, "Ytterbium");
    strcpy(atom[69].symbol, "Yb");
    atom[69].atomicnum = 70;
    atom[69].atomicwt = 173.04;
    strcpy(atom[69].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14");
    atom[69].density = 9.97;

    strcpy(atom[70].name, "Lutetium");
    strcpy(atom[70].symbol, "Lu");
    atom[70].atomicnum = 71;
    atom[70].atomicwt = 174.967;
    strcpy(atom[70].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d1");
    atom[70].density = 9.84;

    strcpy(atom[71].name, "Hafnium");
    strcpy(atom[71].symbol, "Hf");
    atom[71].atomicnum = 72;
    atom[71].atomicwt = 178.49;
    strcpy(atom[71].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d2");
    atom[71].density = 13.31;

    strcpy(atom[72].name, "Tantalum");
    strcpy(atom[72].symbol, "Ta");
    atom[72].atomicnum = 73;
    atom[72].atomicwt = 180.947;
    strcpy(atom[72].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d3");
    atom[72].density = 16.68;

    strcpy(atom[73].name, "Tungsten");
    strcpy(atom[73].symbol, "W");
    atom[73].atomicnum = 74;
    atom[73].atomicwt = 183.84;
    strcpy(atom[73].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d4");
    atom[73].density = 19.26;

    strcpy(atom[74].name, "Rhenium");
    strcpy(atom[74].symbol, "Re");
    atom[74].atomicnum = 75;
    atom[74].atomicwt = 186.207;
    strcpy(atom[74].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d5");
    atom[74].density = 21.03;

    strcpy(atom[75].name, "Osmium");
    strcpy(atom[75].symbol, "Os");
    atom[75].atomicnum = 76;
    atom[75].atomicwt = 190.23;
    strcpy(atom[75].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d6");
    atom[75].density = 22.587;

    strcpy(atom[76].name, "Iridium");
    strcpy(atom[76].symbol, "Ir");
    atom[76].atomicnum = 77;
    atom[76].atomicwt = 192.217;
    strcpy(atom[76].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d7");
    atom[76].density = 22.562;

    strcpy(atom[77].name, "Platinum");
    strcpy(atom[77].symbol, "Pt");
    atom[77].atomicnum = 78;
    atom[77].atomicwt = 195.084;
    strcpy(atom[77].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 4f14 5d9 6s1");
    atom[77].density = 21.45;

    strcpy(atom[78].name, "Gold");
    strcpy(atom[78].symbol, "Au");
    atom[78].atomicnum = 79;
    atom[78].atomicwt = 196.966;
    strcpy(atom[78].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 4f14 5d10 6s1");
    atom[78].density = 19.3;

    strcpy(atom[79].name, "Mercury");
    strcpy(atom[79].symbol, "Hg");
    atom[79].atomicnum = 80;
    atom[79].atomicwt = 200.59;
    strcpy(atom[79].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 4f14 5d10 6s2");
    atom[79].density = 13.55;

    strcpy(atom[80].name, "Thallium");
    strcpy(atom[80].symbol, "Tl");
    atom[80].atomicnum = 81;
    atom[80].atomicwt = 204.383;
    strcpy(atom[80].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p1");
    atom[80].density = 11.85;

    strcpy(atom[81].name, "Lead");
    strcpy(atom[81].symbol, "Pb");
    atom[81].atomicnum = 82;
    atom[81].atomicwt = 207.20;
    strcpy(atom[81].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p2");
    atom[81].density = 11.34;

    strcpy(atom[82].name, "Bismuth");
    strcpy(atom[82].symbol, "Bi");
    atom[82].atomicnum = 83;
    atom[82].atomicwt = 208.9804;
    strcpy(atom[82].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p3");
    atom[82].density = 9.8;

    strcpy(atom[83].name, "Polonium");
    strcpy(atom[83].symbol, "Po");
    atom[83].atomicnum = 84;
    atom[83].atomicwt = 208.9824;
    strcpy(atom[83].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p4");
    atom[83].density = 9.2;

    strcpy(atom[84].name, "Astatine");
    strcpy(atom[84].symbol, "At");
    atom[84].atomicnum = 85;
    atom[84].atomicwt = 209.9871;
    strcpy(atom[84].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p5");
    atom[84].density = 6.4;

    strcpy(atom[85].name, "Radon");
    strcpy(atom[85].symbol, "Rn");
    atom[85].atomicnum = 86;
    atom[85].atomicwt = 222.0176;
    strcpy(atom[85].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6");
    atom[85].density = 0.0098;

    strcpy(atom[86].name, "Francium");
    strcpy(atom[86].symbol, "Fr");
    atom[86].atomicnum = 87;
    atom[86].atomicwt = 223.0197;
    strcpy(atom[86].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 7s1");
    atom[86].density = 2.48;

    strcpy(atom[87].name, "Radium");
    strcpy(atom[87].symbol, "Ra");
    atom[87].atomicnum = 88;
    atom[87].atomicwt = 226.0254;
    strcpy(atom[87].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 7s2");
    atom[87].density = 5.5;

    strcpy(atom[88].name, "Actinium");
    strcpy(atom[88].symbol, "Ac");
    atom[88].atomicnum = 89;
    atom[88].atomicwt = 227.0278;
    strcpy(atom[88].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 6d1 7s2");
    atom[88].density = 10.07;

    strcpy(atom[89].name, "Thorium");
    strcpy(atom[89].symbol, "Th");
    atom[89].atomicnum = 90;
    atom[89].atomicwt = 232.0380;
    strcpy(atom[89].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 6d2 7s2");
    atom[89].density = 11.72;

    strcpy(atom[90].name, "Protactinium");
    strcpy(atom[90].symbol, "Pa");
    atom[90].atomicnum = 91;
    atom[90].atomicwt = 231.0358;
    strcpy(atom[90].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f2 6d1 7s2");
    atom[90].density = 15.37;

    strcpy(atom[91].name, "Uranium");
    strcpy(atom[91].symbol, "U");
    atom[91].atomicnum = 92;
    atom[91].atomicwt = 238.0289;
    strcpy(atom[91].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f3 6d1 7s2");
    atom[91].density = 19.05;

    strcpy(atom[92].name, "Neptunium");
    strcpy(atom[92].symbol, "Np");
    atom[92].atomicnum = 93;
    atom[92].atomicwt = 237.0482;
    strcpy(atom[92].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f4 6d1 7s2");
    atom[92].density = 20.48;

    strcpy(atom[93].name, "Plutonium");
    strcpy(atom[93].symbol, "Pu");
    atom[93].atomicnum = 94;
    atom[93].atomicwt = 244.0642;
    strcpy(atom[93].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f6 7s2");
    atom[93].density = 19.74;

    strcpy(atom[94].name, "Americium");
    strcpy(atom[94].symbol, "Am");
    atom[94].atomicnum = 95;
    atom[94].atomicwt = 243.0614;
    strcpy(atom[94].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f7 7s2");
    atom[94].density = 13.67;

    strcpy(atom[95].name, "Curium");
    strcpy(atom[95].symbol, "Cm");
    atom[95].atomicnum = 96;
    atom[95].atomicwt = 247.0703;
    strcpy(atom[95].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f7 6d1 7s2");
    atom[95].density = 13.51;

    strcpy(atom[96].name, "Berkelium");
    strcpy(atom[96].symbol, "Bk");
    atom[96].atomicnum = 97;
    atom[96].atomicwt = 247.0703;
    strcpy(atom[96].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f9 7s2");
    atom[96].density = 13.25;

    strcpy(atom[97].name, "Californium");
    strcpy(atom[97].symbol, "Cf");
    atom[97].atomicnum = 98;
    atom[97].atomicwt = 251.0796;
    strcpy(atom[97].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f10 7s2");
    atom[97].density = 15.1;

    strcpy(atom[98].name, "Einsteinium");
    strcpy(atom[98].symbol, "Es");
    atom[98].atomicnum = 99;
    atom[98].atomicwt = 252.0829;
    strcpy(atom[98].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f11 7s2");
    atom[98].density = 13.5;

    strcpy(atom[99].name, "Fermium");
    strcpy(atom[99].symbol, "Fm");
    atom[99].atomicnum = 100;
    atom[99].atomicwt = 257.0951;
    strcpy(atom[99].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f12 7s2");
    atom[99].density = 19.050;

    strcpy(atom[100].name, "Mendelevium");
    strcpy(atom[100].symbol, "Md");
    atom[100].atomicnum = 101;
    atom[100].atomicwt = 258.00;
    strcpy(atom[100].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f13 7s2");
    atom[100].density = 0;

    strcpy(atom[101].name, "Nobelium");
    strcpy(atom[101].symbol, "Np");
    atom[101].atomicnum = 102;
    atom[101].atomicwt = 259.1009;
    strcpy(atom[101].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f14 7s2");
    atom[101].density = 0;

    strcpy(atom[102].name, "Lawrencium");
    strcpy(atom[102].symbol, "Lr");
    atom[102].atomicnum = 103;
    atom[102].atomicwt = 266.1193;
    strcpy(atom[102].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f14 7s2 7p1");
    atom[102].density = 0;

    strcpy(atom[103].name, "Rutherfordium");
    strcpy(atom[103].symbol, "Rf");
    atom[103].atomicnum = 104;
    atom[103].atomicwt = 261.1087;
    strcpy(atom[103].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f14 6d2 7s2");
    atom[103].density = 23;

    strcpy(atom[104].name, "Dubnium");
    strcpy(atom[104].symbol, "Db");
    atom[104].atomicnum = 105;
    atom[104].atomicwt = 262.1138;
    strcpy(atom[104].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f14 6d3 7s2");
    atom[104].density = 29;

    strcpy(atom[105].name, "Seaborgium");
    strcpy(atom[105].symbol, "Sg");
    atom[105].atomicnum = 106;
    atom[105].atomicwt = 263.1182;
    strcpy(atom[105].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f14 6d4 7s2");
    atom[105].density = 35;

    strcpy(atom[106].name, "Bohrium");
    strcpy(atom[106].symbol, "Bh");
    atom[106].atomicnum = 107;
    atom[106].atomicwt = 262.1229;
    strcpy(atom[106].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f14 6d5 7s2");
    atom[106].density = 37;

    strcpy(atom[107].name, "Hassium");
    strcpy(atom[107].symbol, "Hs");
    atom[107].atomicnum = 108;
    atom[107].atomicwt = 269;
    strcpy(atom[107].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f14 6d6 7s2");
    atom[107].density = 0;

    strcpy(atom[108].name, "Meinerium");
    strcpy(atom[108].symbol, "Mt");
    atom[108].atomicnum = 109;
    atom[108].atomicwt = 278;
    strcpy(atom[108].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f14 6d7 7s2");
    atom[108].density = 37.4;

    strcpy(atom[109].name, "Darmstadtium");
    strcpy(atom[109].symbol, "Ds");
    atom[109].atomicnum = 110;
    atom[109].atomicwt = 281.1620;
    strcpy(atom[109].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f14 6d8 7s2");
    atom[109].density = 34.8;

    strcpy(atom[110].name, "Roentgenium");
    strcpy(atom[109].symbol, "Rg");
    atom[110].atomicnum = 111;
    atom[110].atomicwt = 281.1684;
    strcpy(atom[110].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f14 6d9 7s2");
    atom[110].density = 0;

    strcpy(atom[111].name, "Copernicium");
    strcpy(atom[111].symbol, "Cn");
    atom[111].atomicnum = 112;
    atom[111].atomicwt = 285.1744;
    strcpy(atom[111].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f14 6d10 7s2");
    atom[111].density = 20;

    strcpy(atom[112].name, "Nihonium");
    strcpy(atom[112].symbol, "Nh");
    atom[112].atomicnum = 113;
    atom[112].atomicwt = 286.1810;
    strcpy(atom[112].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f14 6d10 7s2 7p1");
    atom[112].density = 16;

    strcpy(atom[113].name, "Flerovium");
    strcpy(atom[113].symbol, "Fl");
    atom[113].atomicnum = 114;
    atom[113].atomicwt = 287.1904;
    strcpy(atom[113].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f14 6d10 7s2 7p2");
    atom[113].density = 14;

    strcpy(atom[114].name, "Moscovium");
    strcpy(atom[114].symbol, "Mc");
    atom[114].atomicnum = 115;
    atom[114].atomicwt = 288.1943;
    strcpy(atom[114].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f14 6d10 7s2 7p3");
    atom[114].density = 13.5;

    strcpy(atom[115].name, "Livermorium");
    strcpy(atom[115].symbol, "Lv");
    atom[115].atomicnum = 116;
    atom[115].atomicwt = 291.2045;
    strcpy(atom[115].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f14 6d10 7s2 7p4");
    atom[115].density = 0;

    strcpy(atom[116].name, "Tennessine");
    strcpy(atom[116].symbol, "Ts");
    atom[116].atomicnum = 117;
    atom[116].atomicwt = 294.2104;
    strcpy(atom[116].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f14 6d10 7s2 7p5");
    atom[116].density = 0;

    strcpy(atom[117].name, "Oganesson");
    strcpy(atom[117].symbol, "Og");
    atom[117].atomicnum = 118;
    atom[117].atomicwt = 294.2139;
    strcpy(atom[117].configuration, "1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 5f14 6d10 7s2 7p6");
    atom[117].density = 5;
}
