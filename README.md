# Arduino-MSF-Time-Library

The msfTime library provides all the necessary decoding routines to fully decode the MSF time signal from Anthorn, Cumbria, United Kingdom.

A simple buffer array is provided which contains the decoded Year, Month, Date, Day, Hour, Minute and Second data in BCD format so that the data can be copied quickly to a RTC (Real Time Clock) module such as the DS3231.

The library also provides a time_t compatible value representing the seconds that have passed since 00:00:00 01 Jan 1970 for direct use in setting the Time library.

Various flags and values are provided to indicate BST, BST imminent, Leap Second and UT1 vs UTC difference known as DUT1.

A simple example sketch is provided to demonstrate the basic use of the library and a MSF Simulator is also provided for development purposes. 

The "printF" folder contains a template/library which provides the basic printf functions as well as the facility to send output to a stream such as a LCD or TFT display for example. The "printF" folder should be installed into the user's "libraries" folder in the Arduino environment. printf syntax and parameters are as normal and the alternative strprinf function just requires the stream to be specified before the parameters e.g. "strprintf(lcd,"parameters",data);".
