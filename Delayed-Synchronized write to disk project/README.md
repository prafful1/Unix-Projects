# Description:
+ The two programs describe Delayed and Synchronized writes to Disk. "with_sync.c" program makes use of O_SYNC flag to make sure that the program counter returns only after writing data to disk. "without_sync.c" program writes data to buffer and returns. It does not wait for the data to be writtien to the disk.
