
/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* 8 normal colors */
	[0] = "#3b4252", /* black   */
	[1] = "#bf616a", /* red     */
	[2] = "#a3be8c", /* green   */
	[3] = "#ebcb8b", /* yellow  */
	[4] = "#81a1c1", /* blue    */
	[5] = "#b48ead", /* magenta */
	[6] = "#88c0d0", /* cyan    */
	[7] = "#e5e9f0", /* white   */

	/* 8 bright colors */
	[8]  = "#4c566a", /* black   */
	[9]  = "#bf616a", /* red     */
	[10] = "#a3be8c", /* green   */
	[11] = "#ebcb8b", /* yellow  */
	[12] = "#81a1c1", /* blue    */
	[13] = "#b48ead", /* magenta */
	[14] = "#8fbcbb", /* cyan    */
	[15] = "#eceff4", /* white   */

	/* special colors */
	[256] = "#2e3440", //background
	[257] = "#d8dee9", //foreground
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 257;
unsigned int defaultbg = 256;
static unsigned int defaultcs = 257;
static unsigned int defaultrcs = 256;


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

