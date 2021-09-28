/**
 * @mainpage Drawing Shapes
 * Documentation that will occur on another page. MainSohaib :)
 */

 /** @file main.c
 *
 * file specific comment
 *
 * Documentation that will occur on another page. MainSohaib :)
 * Documentation that will occur on another page. MainSohaib :)
 *

 * *single asterisks*

 * _single underscores_

 * **double asterisks**

 * __double underscores__
 *
 *
 *  ~~double tilde~~
 *
 * [link name]: http://www.example.com "Optional title"

 *
 * First Header  | Second Header
 * ------------- | -------------
 * Content Cell  | Content Cell
 * Content Cell  | Content Cell
 *
 * hi
 *
 * | Right | Center | Left  |
 * | ----: | :----: | :---- |
 * | 10    | 10     | 10    |
 * | ^     | 1000   | 1000  |
 *
 *
 * ~~~~~~~~~~~~~~~{.c}
 * int func(int a,int b) { return a*b; }
 * ~~~~~~~~~~~~~~~
 *
 *
 * Text before the list
 * - list item 1
 *   - sub item 1
 *     - sub sub item 1
 *     - sub sub item 2
 *     .
 *     The dot above ends the sub sub item list.
 *
 *     More text for the first sub item
 *   .
 *   The dot above ends the first sub item.
 *
 *   More text for the first list item
 *   - sub item 2
 *   - sub item 3
 * - list item 2
 * .
 * More text in the same paragraph.
 *
 * More text in a new paragraph.
 */

#include "backend.h"
#include "frontend.h"
#include <ncurses.h>

/*!
 * Main function
 *
 * Lorem Ipsum is simply dummy text of the printing and typesetting industry.
 * Lorem Ipsum has been the industry's standard dummy text ever since the 1500s,
 * when an unknown printer took a galley of type and scrambled it to make a type
 * specimen book. It has survived not only five centuries, but also the leap into
 * electronic typesetting, remaining essentially unchanged. It was popularised in
 * the 1960s with the release of Letraset sheets containing Lorem Ipsum passages,
 * and more recently with desktop publishing software like Aldus PageMaker
 * including versions of Lorem Ipsum.
 */
int main() {
   initscr();
   cbreak();
   noecho();
   keypad(stdscr, TRUE); // make keys work
   curs_set(0); // hide cursor
   timeout(100);

   int xmax;
   int ymax;
   getmaxyx(stdscr, ymax, xmax);
   enum Direction dir = RIGHT;

   Board* board = create_board(create_snake(), NULL, xmax, ymax);
   int i;
   for (i = 0; i < 6; i++) {
      add_new_food(board);
   }

   /**
    * while loop bla bla
    */
   while(true) {
      clear();
      display_points(board->snake, ACS_BLOCK);
      display_points(board->foods, ACS_DIAMOND);
      refresh();
      dir = get_next_move(dir);
      enum Status status = move_snake(board, dir);
      if (status == FAILURE) break;
   }
   endwin();

   return 0;
}


/*!
 * Test function
 *
 * Lorem Ipsum is simply dummy text of the printing and typesetting industry.
 * Lorem Ipsum has been the industry's standard dummy text ever since the 1500s,
 * when an unknown printer took a galley of type and scrambled it to make a type
 * specimen book. It has survived not only five centuries, but also the leap into
 * electronic typesetting, remaining essentially unchanged. It was popularised in
 * the 1960s with the release of Letraset sheets containing Lorem Ipsum passages,
 * and more recently with desktop publishing software like Aldus PageMaker
 * including versions of Lorem Ipsum.
 *
 * @param x this this x var desc
 * @param y this this x var desc
 * @param z this this x var desc
 */
int myTest(int x, double y, char z) {
   return 0;
}
