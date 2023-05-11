//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*icon		command		interval	signal*/
	{"",            "sb-clock",     60,             8},
	{"",            "sb-volume",    0,              7},
	{"",            "sb-memory",    30,             6},
	{"",            "sb-cpu",       10,             5},
	{"",            "sb-disk",      30,             4},
	{"",            "sb-updates",   3600,           3},
	{"",            "sb-internet",  10,             2},
	{"",            "sb-battery",   30,             1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;

//auto recompile and run with this command in vimrc/init.vim
//autocmd BufWritePost ~/.local/src/blocks.def.h !cd ~/.local/src/dwmblocks/; sudo make install && killall -q dwmblocks;setsid dwmblocks &
