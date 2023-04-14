# dwmblocks
Modular status bar for dwm written in c.

# Modifying blocks
The statusbar is made from text output from commandline programs.
Blocks are added and removed by editing the config.h file.

# Signaling changes
Most statusbars constantly rerun every script every several seconds to update.
This is an option here, but a superior choice is giving your module a signal that you 
can signal to it to update on a relevant event, rather than having it rerun idly.

For example, the audio module has the update signal 7.
Thus, running `pkill -RTMIN+10 dwmblocks` will update it.

You can also run `kill -44 $(pidof dwmblocks)` which will have the same effect,
but is faster. Just add 34 to your typical signal number.

My volume module *never* updates on its own, instead I have this command run
along side my volume shortcuts in dwm to only update it when relevant.

Note that all modules must have different signal numbers.

# Clickable modules
The [statuscmd](https://dwm.suckless.org/patches/statuscmd/) patch adds the ability to 
signal to dwmblocks the location and button when clicking on the status bar.
See the above linked scripts for examples of this using the `$BLOCK_BUTTON` variable.

This patch version is compatible with the status2d dwm patch.
For this feature to work, you need the appropriate patch in dwm as well.
Credit for those patches goes to Daniel Bylinka (daniel.bylinka@gmail.com).
