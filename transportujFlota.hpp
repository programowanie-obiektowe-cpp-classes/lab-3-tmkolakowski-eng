#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    if (towar==0)
        return 0;
    Stocznia stocznia{};
    unsigned int l_trans = 0;    
    unsigned int l_zaglowcow = 0;
    while (l_trans < towar) {
        Statek* statek = stocznia();
        if (Zaglowiec* zaglowiec = dynamic_cast< Zaglowiec* >(statek)) {
            l_zaglowcow++;
        }
        l_trans += statek->transportuj();
        delete statek;
    }
    return l_zaglowcow;
}