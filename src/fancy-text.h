/*
 * Copyright (C) 2023 TheRealOne78 <bajcsielias78@gmail.com>
 *
 * This file was part of the XAWP project and is used for this project under the
 * terms of the GNU General Public License version 3 or (at your opinion)
 * later, as published by the Free Software Foundation.
 *
 * See the comment below for the original copyright statement.
 */

/*
 * Copyright (C) 2023 TheRealOne78 <bajcsielias78@gmail.com>
 *
 * This file is part of the XAWP project
 *
 * XAWP is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * XAWP is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with XAWP. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __FANCY_TEXT_H__
#define __FANCY_TEXT_H__

# ifndef _COLORS_
  #define _COLORS_

  /* FOREGROUND */
  #define RST "\x1B[0m"

  /* Normal colors */
  #define KBLK  "\x1B[30m" //black
  #define KRED  "\x1B[31m" //red
  #define KGRN  "\x1B[32m" //green
  #define KYEL  "\x1B[33m" //yellow
  #define KBLU  "\x1B[34m" //blue
  #define KMAG  "\x1B[35m" //magenta
  #define KCYN  "\x1B[36m" //cyan
  #define KWHT  "\x1B[37m" //white

  /* Bright colors */
  #define KBBLK "\x1B[90m" //bright black(gray)
  #define KBRED "\x1B[91m" //bright red
  #define KBGRN "\x1B[92m" //bright green
  #define KBYEL "\x1B[93m" //bright yellow
  #define KBBLU "\x1B[94m" //bright blue
  #define KBMAG "\x1B[95m" //bright magenta
  #define KBCYN "\x1B[96m" //bright cyan
  #define KBWHT "\x1B[97m" //bright white

  /* misc */
  #define BOLD  "\x1B[1m"  //bold
  #define UNDL  "\x1B[4m"  //underline

# endif  /* _COLORS_ */

/* colored status macros */
#define DEBUG_TEXT_PUTS  KBLU "DEBUG" RST
#define INFO_TEXT_PUTS   RST "[" KBLU "i" RST "] " RST // [i]
#define WARN_TEXT_PUTS   RST "[" KYEL "w" RST "] " RST // [w]
#define ERR_TEXT_PUTS    RST "[" KRED "e" RST "] " RST // [e]

#define INFO_TEXT_PUTS_CAST(text)  INFO_TEXT_PUTS text
#define WARN_TEXT_PUTS_CAST(text)  WARN_TEXT_PUTS text
#define ERR_TEXT_PUTS_CAST(text)   ERR_TEXT_PUTS text

void puts_logo();
void clear_term(void);

#endif
