# Output with O_SYNC flag set:
+ Compilation Time:
  + time gcc with_sync.c -o with_sync.out
    + real    0m0.971s
    + user    0m0.052s
    + sys     0m0.016s


+ Runtime:
  + time ./with_sync.out
    + real    0m0.961s
    + user    0m0.008s
    + sys     0m0.952s
   
# Output with O_SYNC flag not set:
+ Compilation time:
  + time gcc without_sync.c -o without_sync.out
    + real    0m0.077s
    + user    0m0.048s
    + sys     0m0.020s
    
 + Runtime: 
  + time ./without_sync.out
    + real    0m0.973s
    + user    0m0.012s
    + sys     0m0.960s


