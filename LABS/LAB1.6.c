
//  main.c
//  LR_1.6
//
//  Created by Michael Chirozidi on 17.11.2021.
//
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
int main(){
    int ROWS = 23; // 0 до 24 - 1 => 1 до 25 - 1
    int COLUMNS = 79; // 0 - 79 => 1 до 80
    int xLineLength = COLUMNS - ROWS; //длина линии по х
    int yLineLength = 1; //длина линии по у

    initscr();
    getmaxyx(stdscr, ROWS, COLUMNS);
    int pos_x = (COLUMNS - xLineLength + 1) / 2;
    int pox_y = 12;

    while (1) {
        for (int i = 0; i < xLineLength; i++) {
            mvaddch(pox_y, pos_x, '*');
            pos_x++;
            refresh();
            napms(30);
        }
        mvaddch(pox_y, pos_x, '*');
        
        for (int i = 0; i < yLineLength; i++) {
            mvaddch(pox_y, pos_x, '*');
            pox_y--;
            refresh();
            napms(30);
        }

        xLineLength++;
        yLineLength++;

        for (int i = 0; i < xLineLength; i++) {
            mvaddch(pox_y, pos_x, '*');
            pos_x--;
            refresh();
            napms(30);
        }
        mvaddch(pox_y, pos_x, '*');
        
        for (int i = 0; i < yLineLength; i++) {
            mvaddch(pox_y, pos_x, '*');
            pox_y++;
            refresh();
            napms(30);
        }
        xLineLength++;
        yLineLength++;
        
        if (pox_y > ROWS) break;
    }
    getch();
    endwin();
}
