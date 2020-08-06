/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
  /* 8 normal colors */
  "#161821", /* black   */
  "#e27878", /* red     */
  "#b4be82", /* green   */
  "#e2a478", /* yellow  */
  "#84a0c6", /* blue    */
  "#a093c7", /* magenta */
  "#89b8c2", /* cyan    */
  "#c6c8d1", /* white   */

  /* 8 bright colors */
  "#6b7089", /* black   */
  "#e98989", /* red     */
  "#c0ca8e", /* green   */
  "#e9b189", /* yellow  */
  "#91acd1", /* blue    */
  "#ada0d3", /* magenta */
  "#95c4ce", /* cyan    */
  "#d2d4de", /* white   */
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 7;
unsigned int defaultbg = 0;
static unsigned int defaultcs = 13;
static unsigned int defaultrcs = 0;


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

