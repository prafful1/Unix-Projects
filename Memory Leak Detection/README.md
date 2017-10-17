# Description:
  + This project displays a basic program to detect memory leak.
  + In the following program, we have mapped "malloc" to "xmalloc", "calloc" to "xcalloc" and "free" to "xfree" functions.
  
# Approach:
  + The program uses Linked List as its primary data structure to store all nodes.
  + Whenever "malloc" or "calloc" functions are called, a node is created and added to a linked list.
  + Whenever "free" function is called, a pointer locates the required node from the lined list and removes it.
  + At the end of the program, all nodes that remain in the linked list does memory leak.
  + In test.c file, "atexit" function registers "report_mem_leak" function from "leak_detector_c.c". "report_mem_leak" function will be called by "exit" method at the end of the program.
