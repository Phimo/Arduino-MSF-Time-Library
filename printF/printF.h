/*****************
 A printf FACILITY
*****************/

#ifndef PRINTF_H
#define PRINTF_H

#ifndef Arduino_h
#include <Arduino.h>
#endif

// printf method modified from the Serialprint method from http://www.utopiamechanicus.com	
#define printf(format, ...) StreamPrint_progmem(Serial,PSTR(format),##__VA_ARGS__)
// stprintf (Stream Print Formatted) method modified from the Streamprint method from http://www.utopiamechanicus.com	
#define stprintf(stream,format, ...) StreamPrint_progmem(stream,PSTR(format),##__VA_ARGS__)
#define strprintf(stream,format, ...) StreamPrint_progmem(stream,PSTR(format),##__VA_ARGS__)

	void StreamPrint_progmem(Print &out,PGM_P format,...)
{
  // program memory version of printf - copy of format string and result share a buffer
  // so as to avoid too much memory use
  // http://www.utopiamechanicus.com
  char formatString[128], *ptr;
  strncpy_P( formatString, format, sizeof(formatString) ); // copy in from program mem
  // null terminate - leave last char since we might need it in worst case for result's \0
  formatString[ sizeof(formatString)-2 ]='\0'; 
  ptr=&formatString[ strlen(formatString)+1 ]; // our result buffer...
  va_list args;
  va_start (args,format);
  vsnprintf(ptr, sizeof(formatString)-1-strlen(formatString), formatString, args );
  va_end (args);
  formatString[ sizeof(formatString)-1 ]='\0'; 
  out.print(ptr);
}

#endif
