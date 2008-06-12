/* Extended string routines
 *
 * Copyright notice for this file:
 *  Copyright (C) 2004 Jason Oster (Parasyte)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */
#include <string>
#include <string.h>
#include <stdlib.h>
#include <vector>
#include <iostream>

#include "../types.h"

//definitions for str_strip() flags
#define STRIP_SP	0x01 // space 
#define STRIP_TAB	0x02 // tab 
#define STRIP_CR	0x04 // carriage return 
#define STRIP_LF	0x08 // line feed 


int str_ucase(char *str);
int str_lcase(char *str);
int str_ltrim(char *str, int flags);
int str_rtrim(char *str, int flags);
int str_strip(char *str, int flags);
int chr_replace(char *str, char search, char replace);
int str_replace(char *str, char *search, char *replace);

int HexStringToBytesLength(std::string& str);
std::string BytesToString(void* data, int len);
bool StringToBytes(std::string& str, void* data, int len);

std::vector<std::string> tokenize_str(const std::string & str,const std::string & delims);
void splitpath(const char* path, char* drv, char* dir, char* name, char* ext);

uint16 FastStrToU16(char* s, bool& valid);
char *U16ToDecStr(uint16 a);
char *U32ToDecStr(uint32 a);
char *U32ToDecStr(char* buf, uint32 a);
char *U8ToDecStr(uint8 a);
char *U8ToHexStr(uint8 a);
char *U16ToHexStr(uint16 a);

//extracts a decimal uint from an istream
unsigned int uintDecFromIstream(std::istream* is);