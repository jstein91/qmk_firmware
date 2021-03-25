## Layers

### Typing Layer

![Typing Layer](https://imgur.com/QUIU2SL.png)

### Function Layer

![Function Layer](https://imgur.com/4q4ld4X.png)

### Mouse Layer

![Mouse Layer](https://imgur.com/xXVFyEE.png)

### Git Layer

![Git Layer](https://imgur.com/WMMM0zz.png)

## Features

These are the features currently supported by this keymap:

### RGB Time Out

This allows setting a dynamic timeout for RGB to turn off. The following is supported:

1. Restores on the first click of any key.
2. Restores to its previous state before timeout. i.e. if it was edge only before timeout it will restore to edge only, same for all modes.
3. Doesn't interfere with RGB modes. You can set keyboard to All, Edge Only or Off and timeout will not interfere with these modes.
4. The time before RGB is turned off is dynamically adjustable using keycodes ROUT_VI to increase, ROUT_VD to decrease. They have a 10 second steps by default. Minimum value 10 seconds by default and maximum is 10 minutes.
5. Can be toggled on or off dyncamically with the ROUT_TG keycode.
6. Can be put in fast mode using ROUT_FM, for movie watching purposes. Default value is 3 seconds. Note that fast mode disabled ROUT_VD and ROUT_VI so to use them again you have to toggle fast mode off with ROUT_FM. It doesn't impact ROUT_TG and ROUT_TG will remember if fast mode was enabled when toggled back on, so it doesn't disable fast mode on its own, only ROUT_FM can disable or enable fast mode.

### Tapdance Keys

Not really a feature. I just want to document what tapdance keys this keymap has because there will be many of them.

1. LGUI is used for both LGUI and toggle mouse layer for double tap.
2. LCTRL sends LCTRL for single tap and LCTRL+LALT+T for double tap, which opens terminal in most environments.

## Credits

RGB timeout functionality was originally inspired by the code in this [gist](https://gist.github.com/algernon/9182469e21894192017f2bb5d478c7df).
LED config code was mostly transferred from [matthewrobo keymap](https://github.com/qmk/qmk_firmware/tree/master/keyboards/massdrop/ctrl/keymaps/matthewrobo).

Rest of the information about RGB matrix, scan matrix, and whatever information I have used was made publicly available by many other awesome members of the community.
