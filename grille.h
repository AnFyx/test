// grille.h
#ifndef GRILLE_H
#define GRILLE_H

#define MAX_SIZE 100

void afficheGrille(int difficulte, structTab *t);
int getCol(int x);
int getRow(int y);
int getValTab(structTab t, int x, int y);

#endif