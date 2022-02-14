/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
"TerminessTTF Nerd Font:style=bold:size=13","JoyPixels:pixelsize=14:antialias=true:autohint=true"
};

static const char *colors[SchemeLast][2] = {
#include "/home/nabeel/apps/suckless/dmenu/themes/dracula.h"
};
static const char *prompt      = " ";      /* -p  option; prompt to the left of input field */
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 30;
static unsigned int min_lineheight = 38;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
