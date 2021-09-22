/*
 * Process memory layout
 *
 * Tools:   FIXME important
 * • size(1)
 * • objdump(1)
 * • readelf(1)
 * • hexdump(1)
 * • procfs(1)       => inspect all info of any runing processes
 * • gdb(1)          => if you need to see the content of stack and heap at runtime

*/


/*
More
information about the Linux memory allocator can be found
here: https://www.kernel.org/doc/gorman/html/understand/understand009.html
*/

/*
stack is smaller than heap !
____________________________
the Stack segment is usually limited in size, and it is not
a good place to store big objects. If the Stack segment is full, the process cannot
make any further function calls since the function call mechanism relies heavily
on the functionality of the Stack segment.

If the Stack segment of a process becomes full, the process gets terminated by
the operating system. Stack overflow is a famous error that happens when the
Stack segment becomes full.

The Heap segment can grow to sizes far greater than 132 KB, even to tens of
gigabytes, and usually it is used for permanent, global, and very big objects such
as arrays and bit streams.

Allocation from the Stack segment is fast, and it doesn't need any special function call. More than that, the
deallocation and all memory management tasks happen automatically. All these
facts are all very tempting and encourage you to overuse the Stack.
You should be careful about this. Using the Stack segment brings its own
complications. The stack is not very big, therefore you cannot store large objects
in it. In addition, incorrect use of the Stack content can halt the execution and
result in a crash.

Links:
   https://stackoverflow.com/q/10482974/5688267
*/
