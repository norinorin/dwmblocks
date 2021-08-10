//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
	{"", "sb-spotify", 5, 0},
	{"Mem: ", "sb-memory", 10, 0},
	// {"", "sb-cputemp", 10, 0},
	{"⬇: ", "sb-checkupdates", 5, 0},
	{"", "sb-clock", 5, 0},
	{"", "sb-internet", 5, 0},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *sep = "|";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
