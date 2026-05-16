#include <ncurses.h>
#include <string.h>

int main(void) {

  size_t width, height;
  char *text = "Hello world";
  size_t len = strlen(text);

  initscr(); // initialize the ncurses window

  getmaxyx(stdscr, height, width);
  move(height / 2, width / 2 - (len / 2));
  addstr(text);
  refresh();
  getch();

  endwin();
  return 0;
}
