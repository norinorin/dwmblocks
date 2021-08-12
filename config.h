//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
	// These 2 require nerd fonts
	{"", "sb-spotify", 5, 11},
	{"", "sb-memory", 10, 12},
	// {"", "sb-cputemp", 10, 0},
	{"", "sb-checkupdates", 60, 9}, // this one requires joy pixels
	{"", "sb-internet", 5, 22},
	{"", "sb-clock", 5, 21},
};

// The one that will be added between commands and before the next command sigchar
static char *lsep = " ";
// The one that will be added between commands and after the current command sigchar
static char *rsep = "";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
