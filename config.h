//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/ /*Icon color*/ /*Command*/ /*Command color/* /*Color end*/ /*Update Interval*/ /*Update Signal*/
	// These 2 require nerd fonts
	{"  ", "^c#191414^^b#1db954^", "sb-spotify", "^c#191414^^b#1ed960^", "^d^", 5, 11},
	{" ", "^c#bf616a^", "sb-memory", "^c#bf616a^", "", 10, 12},
	// {"", "sb-cputemp", 10, 0},
	{" ", "^c#94af7d^", "sb-checkupdates", "^c#94af7d^", "", 60, 9}, // this one requires joy pixels
	{"", "", "sb-internet", "", "", 5, 22},
	{"", "", "sb-clock", "", "", 5, 21},
};

// The one that will be added between commands and before the next command sigchar
static char *lsep = " ";
// The one that will be added between commands and after the current command sigchar
static char *rsep = "";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
