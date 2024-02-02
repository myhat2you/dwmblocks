//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*icon  command         interval  signal  kill -45 $(pidof dwmblocks)*/
	{"",    "sb-clock",     60,       11},    // 45
	{"",    "sb-music",     0,        10},    // 44
	{"",    "sb-volume",    0,        9},     // 43
	{"",    "sb-record",    0,        8},     // 42
	{"",    "sb-memory",    30,       7},     // 41
	{"",    "sb-cpu",       10,       6},     // 40
	{"",    "sb-disk",      30,       5},     // 39
	{"",    "sb-mailbox",   3600,     4},     // 38
	{"",    "sb-updates",   3600,     3},     // 37
	{"",    "sb-internet",  10,       2},     // 36
	{"",    "sb-battery",   30,       1},     // 35
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;

//auto recompile and run with this command in vimrc/init.vim
//autocmd BufWritePost ~/.local/src/blocks.def.h !cd ~/.local/src/dwmblocks/; sudo make install && killall -q dwmblocks;setsid dwmblocks &

/* Scripts that refresh commands signals
   // sb-update: aliasrc
   // sb-record: dmenurecord
   // sb-music:  sb-mpdup
   // sb-music:  dwm/config.def.h
   // sb-volume: dwm/config.def.h
*/
