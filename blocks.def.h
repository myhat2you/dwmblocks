static const Block blocks[] = {
	/*icon  command         interval  signal  // pid */
	{"",    "sb-clock",     60,       12},    // 46
	{"",    "sb-music",     0,        11},    // 45
	{"",    "sb-volume",    0,        10},    // 44
	{"",    "sb-record",    0,        9},     // 43
	{"",    "sb-memory",    30,       8},     // 42
	{"",    "sb-cpu",       10,       7},     // 41
	{"",    "sb-disk",      30,       6},     // 40
	{"",    "sb-news",      1500,     5},     // 39
	{"",    "sb-mailbox",   1800,     4},     // 38
	{"",    "sb-updates",   30,       3},     // 37
	{"",    "sb-internet",  10,       2},     // 36
	{"",    "sb-battery",   30,       1},     // 35
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;

/* Commands to refresh blocks
 * both of these commands would refrash sb-battery
 * `kill -35 $(pidof dwmblocks)`
 * `pkill -RTMIN+1 $(pidof dwmblocks)`
*/

/* Scripts that refresh commands signals
 * FILE             BLOCK    COMMAND
 * aliasrc          updates  kill -37
 * pacupgrade       updates  kill -37
 * dmenurecord      record   kill -43
 * sb-volume        volume   kill -44
 * sb-music         music    kill -45
 * mpdup            volume   kill -45
 * checkup          updates  RTMIN+3
 * newsup           news     RTMIN+5
 * ncmpcpp/config   music    RTMIN+11
*/
