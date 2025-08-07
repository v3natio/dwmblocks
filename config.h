#ifndef CONFIG_H
#define CONFIG_H

#define DELIMITER "  " // delimiter between blocks

#define MAX_BLOCK_OUTPUT_LENGTH 45 // max unicode characters in a block

#define CLICKABLE_BLOCKS 0 // clickable blocks

#define LEADING_DELIMITER 0 // prepend leading delimiters

#define TRAILING_DELIMITER 0 // append trailing delimiters

/* blocks: X(icon, cmd, interval, signal) */
#define BLOCKS(X) \
  X("", "sb-record", 0, 9) \
  X("", "sb-music", 0, 2) \
  X("", "sb-torrent", 20, 7) \
  X("", "sb-cpu", 5, 18) \
  X("", "sb-vpn", 0, 6) \
  X("", "sb-network", 5, 4) \
	X("", "sb-volume", 0, 10) \
  X("", "sb-performance", 5, 3) \
	X("", "sb-battery", 5, 3) \
	X("", "sb-time", 1, 1) \
	X("", "sb-date", 1, 1)

#endif
