/*
  Functions used inside the liflines module
  requiring screen.h declarations (eg, UIWIN).
*/

#ifndef screeni_h_included
#define screeni_h_included

/* interact.c */
INT interact_choice_string(UIWINDOW uiwin, STRING str);
INT interact_screen_menu(UIWINDOW uiwin, INT screen);

#endif /* screeni_h_included */
