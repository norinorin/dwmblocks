//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
	{"", "sb-spotify", 5, 11},
	{"Mem: ", "sb-memory", 10, 12},
	// {"", "sb-cputemp", 10, 0},
	{"⬇: ", "sb-checkupdates", 60, 9},
	{"", "sb-clock", 5, 21},
	{"", "sb-internet", 5, 22},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *sep = "|";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
