
/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
  /* 8 normal colors */
  [0] = "#000000", /* black   */
  [1] = "#ff5555", /* red     */
  [2] = "#50fa7b", /* green   */
  [3] = "#f1fa8c", /* yellow  */
  [4] = "#bd93f9", /* blue    */
  [5] = "#ff79c6", /* magenta */
  [6] = "#8be9fd", /* cyan    */
  [7] = "#bbbbbb", /* white   */

  /* 8 bright colors */
  [8]  = "#44475a", /* black   */
  [9]  = "#ff5555", /* red     */
  [10] = "#50fa7b", /* green   */
  [11] = "#f1fa8c", /* yellow  */
  [12] = "#bd93f9", /* blue    */
  [13] = "#ff79c6", /* magenta */
  [14] = "#8be9fd", /* cyan    */
  [15] = "#ffffff", /* white   */

  /* special colors */
  [256] = "#282a36", /* background */
  [257] = "#f8f8f2", /* foreground */
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 257;
unsigned int defaultbg = 256;
static unsigned int defaultcs = 257;
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

