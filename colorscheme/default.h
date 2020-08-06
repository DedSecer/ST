
/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* 8 normal colors */
	[0] = "black", /* black   */
	[1] = "red3", /* red     */
	[2] = "green3", /* green   */
	[3] = "yellow3", /* yellow  */
	[4] = "blue2", /* blue    */
	[5] = "magenta3", /* magenta */
	[6] = "cyan3", /* cyan    */
	[7] = "gray90", /* white   */

	/* 8 bright colors */
	[8]  = "gray50", /* black   */
	[9]  = "red", /* red     */
	[10] = "green", /* green   */
	[11] = "yellow", /* yellow  */
	[12] = "#5c5cff", /* blue    */
	[13] = "magenta", /* magenta */
	[14] = "cyan", /* cyan    */
	[15] = "white", /* white   */

	/* special colors */
	[256] = "#cccccc",
	[257] = "#555555",
	[258] = "black",
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 7;
unsigned int defaultbg = 258;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;


/*
 * Default colour and shape of the mouse cursor
 */
static unsigned int mouseshape = XC_xterm;
static unsigned int mousefg = 7;
static unsigned int mousebg = 0;

/*
 * Color used to display font attributes when fontconfig selected a font which
 * doesn't match the ones requested.
 */
static unsigned int defaultattr = 11;
/// Colors for the entities that are 'highlighted' in normal mode (search
/// results currently on screen) [Vim Browse].
static unsigned int highlightBg = 160;
static unsigned int highlightFg = 15;
/// Colors for highlighting the current cursor position (row + col) in normal
/// mode [Vim Browse].
static unsigned int currentBg = 8;
static unsigned int currentFg = 15;

