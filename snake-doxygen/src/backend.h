 /** @file backend.h
  *
 * Documentation that will occur on another page. MainSohaib :)
 * Documentation that will occur on another page. MainSohaib :)
  */
#include <stdbool.h>


/*! \def MAX(a,b)
    \brief A macro that returns the maximum of \a a and \a b.

    Details.
*/
#define MAX(a,b) (((a)>(b))?(a):(b))

/*! \var int love
    \brief look how to document global vars.

    \Using Doxygen commands!
*/
int love;

enum Direction {
   UP, /**< enum up value bla bla */
   DOWN,  /**< enum DOWN value bla bla */
   LEFT,  /**< enum LEFT value bla bla */
   RIGHT  /**< enum RIGHT value bla bla */
};
enum Status { SUCCESS, FAILURE };
struct PointList {
  int x;
  int y;
  struct PointList* next;
};

/*! \var typedef struct PointList PointList
   \brief A type definition for a .

   Details.
*/
typedef struct PointList PointList;

typedef struct {
  PointList* snake; /*!< snake is represents bla bla.. etc*/
  PointList* foods; /*!< foods is represents bla bla.. etc*/
  int xmax;         /*!< xmax is represents bla bla.. etc*/
  int ymax;         /*!< ymax is represents bla bla.. etc*/
} Board;


/**
 * \brief A brief history of JavaDoc-style (C-style) comments.
 *
 * This is the typical JavaDoc-style C-style comment. It starts with two
 * asterisks.
 *
 * @param cell1 Even if there is only one possible unified theory. it is just a
 *               set of rules and equations.
 * @param cell2 Even if there is only one possible unified theory. it is just a
 *               set of rules and equations.
 * @return truth value because of this and that...
 * @sa move_snake(), next_move(), create_random_cell(), create_cell()
 */
bool is_same_place(PointList* cell1, PointList* cell2);

/**
 * \brief A brief history of JavaDoc-style (C-style) comments.
 *
 * Detailed description starts here.
 * @see move_snake()
 * @see next_move()
 * @see create_random_cell()
 * @see create_cell()
 */
enum Status move_snake(Board* board, enum Direction dir);

/**
 * \brief A brief history of JavaDoc-style (C-style) comments.
 *
 * Detailed description starts here.
 */
PointList* next_move(Board* board, enum Direction dir);

/**
 * Auto brief history of JavaDoc-style (C-style) comments.
 *
 * Detailed description starts here.
 */
PointList* create_cell(int x, int y);

/**
 * Auto brief history. detailed start after the first dot of JavaDoc-style (C-style) comments.
 *
 */
PointList* create_random_cell(int xmax, int ymax);

/**
 * Auto brief history of JavaDoc-style (C-style) comments.
 */
PointList* create_snake();

/**
 * \brief A brief history of JavaDoc-style (C-style) comments.
 *
 * Detailed description starts here.
 */
Board* create_board(PointList* foods, PointList* snake, int xmax, int ymax);
/**
 * \brief A brief history of JavaDoc-style (C-style) comments.
 *
 * Detailed description starts here.
 */
bool list_contains(PointList* cell, PointList* list);
bool remove_from_list(PointList* elt, PointList** list);
void add_new_food(Board* board);
