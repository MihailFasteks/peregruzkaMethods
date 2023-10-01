#pragma once
#include "Перегрузка.hpp"

int main()
{
    DynamicArray a(5); // constructor 1 param
    a.Input();
    a.Output();
    DynamicArray b = a; // copy constructor
    b.Output();

    /*
    ÂËÎËÁÓ‚‡Ú¸ ÒÎÂ‰Û˛˘ËÂ ÔÂÂ„ÛÁÍË:

    DynamicArray rez = a+10 ; // Û‚ÂÎË˜Ë‚‡ÂÏ ÍÓÎ-‚Ó ˝ÎÂÏÂÌÚÓ‚ Ì‡ 10
     rez = a-2; // Û‰‡ÎˇÂÏ ÔÓÒÎÂ‰ÌËÂ 2 ˝ÎÂÏÂÌÚ‡, ÂÒÎË ‡ÁÏÂ >2
     rez = a*2;// ÁÌ‡˜ÂÌËÂ Í‡Ê‰Ó„Ó ˝ÎÂÏÂÌÚ‡ Ï‡ÒÒË‚‡ ÛÏÌÓÊ‡ÂÏ Ì‡ 2, ‚ÓÁ‚‡˘‡ÂÏ ÌÓ‚˚È Ï‡ÒÒË‚!

     rez = a-b; // ‡ÁÌÓÒÚ¸ Ï‡ÒÒË‚Ó‚
     rez=a+b;  // ÍÓÌÍ‡ÚÂÌ‡ˆËˇ Ï‡ÒÒË‚Ó‚
     ++rez;  // Û‚ÂÎË˜Ë‚‡ÂÏ ÍÓÎË˜ÂÒÚ‚Ó ˝ÎÂÏÂÌÚÓ‚ Ì‡ 1(ÁÌ‡˜ÂÌËÂ 0).
     --rez;  // ÛÏ. ÍÓÎË˜ÂÒÚ‚Ó ˝ÎÂÏÂÌÚÓ‚ Ì‡ 1, Û‰‡ÎˇÂÏ ÔÓÒÎÂ‰ÌËÈ ˝ÎÂÏÂÌÚ
    */

    DynamicArray rez = a + 10;
        
        rez.Input();
        rez.Output();

        DynamicArray rez1 = a - 2;
        rez1.Output();

        
        DynamicArray rez2 = a*2;
        rez2.Output();

        
        DynamicArray rez3 = a - b;
        rez3.Output();

        DynamicArray rez4 = a + b;
        rez4.Output();

        DynamicArray rez5(6);
        rez5.Input();
        rez5.Output();
        ++rez5;
        rez5.Output();

        DynamicArray rez6(6);
        rez6.Input();
        rez6.Output();
        --rez6;
        rez6.Output();

    return 0;
}
