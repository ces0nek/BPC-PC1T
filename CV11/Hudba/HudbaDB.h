#pragma once

#define INTERPRET_SIZE 21
#define NAZEV_SIZE 21

struct t_album
{
    char  interpret[INTERPRET_SIZE];
    char  nazev[NAZEV_SIZE];
    int   rok;
    struct t_album* dalsi;
};

void add(char* interpret, char* nazev, int rok, struct t_album** uk_prvni);
void del(char* nazev, struct t_album** uk_prvni);
