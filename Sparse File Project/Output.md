# Steps to run this program (Using gcc compiler):
+ gcc holes.c -o holes.out
+ This generates two extra files in current repo: "file.hole,holes.out"
+ "File.hole" contains the output.

# Output:
+ od -c file.hole
+ 0000000   a   b   c   d   e   f   g   h   i   j  \0  \0  \0  \0  \0  \0
+ 0000020  \0  \0  \0  \0  \0  \0  \0  \0  \0  \0  \0  \0  \0  \0  \0  \0
+ *
+ 0040000   A   B   C   D   E   F   G   H   I   J
+ 0040012

+ ls -lsh file.hole
8.0K -rw-r--r-- 1 agarwp7 users 17K Oct  4 23:01 file.hole

This shows that this file contains 17k of data but only allocates 8k of disk blocks.
