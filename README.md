# Arduino-MSF-Time-Library

The msfTime library provides all the necessary decoding routines to fully decode the MSF time signal from Anthorn, Cumbria, United Kingdom.

A simple buffer array is provided which contains the decoded Year, Month, Date, Day, Hour, Minute and Second data in BCD format so that the data can be copied quickly to a RTC (Real Time Clock) module such as the DS3231.

The library also provides a time_t compatible value representing the seconds that have passed since 00:00:00 01 Jan 1970 for direct use in setting the Time library.

Various flags and values are provided to indicate BST, BST imminent, Leap Second and UT1 vs UTC difference known as DUT1.

A simple example sketch is provided to demomstrate the basic use of the library and a MSF Simulator is also provided for development purposes. 

Inspired by Richard Jarkman's original MSFTime library but with a different approach.

Under construction...
