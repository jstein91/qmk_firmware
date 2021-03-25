#include QMK_KEYBOARD_H

#include <print.h>
#include <string.h>
// HID has not yet been implemented for this keyboard
// #include "raw_hid.h"

#define MILLISECONDS_IN_SECOND 1000

// These are just to make it neater to use builtin HSV values in the keymap
#define RED {HSV_RED}
#define CORAL {HSV_CORAL}
#define ORANGE {HSV_ORANGE}
#define GOLDEN {HSV_GOLDENROD}
#define GOLD {HSV_GOLD}
#define YELLOW {HSV_YELLOW}
#define CHART {HSV_CHARTREUSE}
#define GREEN {HSV_GREEN}
#define SPRING {HSV_SPRINGGREEN}
#define TURQ {HSV_TURQUOISE}
#define TEAL {HSV_TEAL}
#define CYAN {HSV_CYAN}
#define AZURE {HSV_AZURE}
#define BLUE {HSV_BLUE}
#define PURPLE {HSV_PURPLE}
#define MAGENT {HSV_MAGENTA}
#define PINK {HSV_PINK}



enum ctrl_keycodes {
    U_T_AUTO = SAFE_RANGE, // USB Extra Port Toggle Auto Detect / Always Active
    U_T_AGCR,              // USB Toggle Automatic GCR control
    DBG_TOG,               // DEBUG Toggle On / Off
    DBG_MTRX,              // DEBUG Toggle Matrix Prints
    DBG_KBD,               // DEBUG Toggle Keyboard Prints
    DBG_MOU,               // DEBUG Toggle Mouse Prints
    MD_BOOT,               // Restart into bootloader after hold timeout
    SEL_CPY,               // Select Copy. Select the word cursor is pointed at and copy, using double mouse click and ctrl+c
    ROUT_TG,               // Timeout Toggle. Toggle idle LED time out on or off
    ROUT_VI,               // Timeout Value Increase. Increase idle time out before LED disabled
    ROUT_VD,               // Timeout Value Decrease. Decrease idle time out before LED disabled
    ROUT_FM,               // RGB timeout fast mode toggle
    COPY_ALL,              // Copy all text using ctrl(a+c)
    TERMINAL,              // CTRL+ALT+T
};

