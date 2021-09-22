/* It's all about ELF!!
 * Static libraries and how to make your own
 * Dynamic libraries
 *
 * Read these man pages:
 * readelf(1)
 * objdump(1)
 * */

/*
 *
relocatable object files, make your own
executable object files, make your own
static libraries, make your own
and shared object files make your own
Application Binary Interface (ABI)
 */

/*
 * The System V ABI is the most widely used ABI standard among Unix-like
operating systems like Linux and the BSD systems. Executable and Linking
Format (ELF) is the standard object file format used in the System V ABI.

Note: FIXME important
The following link is the System V ABI for AMD 64-
bit architecture: https://www.uclibc.org/docs/psABI-x86_64.pdf . You can go through the list of contents
and see the areas it covers.
*/

/*
 * Object file formats:
 * • ELF       used by Linux and many other Unix-like operating systems
 * • Mach-O    used in OS X (macOS and iOS) systems
 * • PE        used in Microsoft Windows

 * a.out    stands for  assembler output
 * COFF or the Common Object File Format

Note:
A deeper history of object file formats can be found here:
https://en.wikipedia.org/wiki/COFF#History.
Knowing about the history of a specific topic will help you to
get a better understanding of its evolution path and current
and past characteristics
 */

/* FIXME important
 * Tools for extracting info from ELF
 * $ readelf(1)
 * $ objdump(1)
 */

/* ar(1)
Note that a static library itself is not considered as an object file, rather it is a
container for them. In other words, static libraries are not ELF files in Linux
systems, nor are they Mach-O files in macOS systems. They are simply archived
files that have been created by the Unix ar utility
*/
