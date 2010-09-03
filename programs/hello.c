/**
***	hello.c			Program to output "hello <something>" dependent on configuration
***
***	(usage)% hello
***
***	Inputs:			none
***
***	Outputs:		some strings to STDOUT
***
***	David Wuertele		Tue Aug 31 11:38:51 2010
***
***	Steal This Program!!!
**/

#include <jupcommon.h>

int
main (int argc, char * argv[])
{
  print_routine (argv[0]);

  return 0;
}
