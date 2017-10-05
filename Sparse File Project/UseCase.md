# UseCase
Files with holes are usually referred to as sparse files.

They are useful when a program need to access a wide range of addresses (offset) but is unlikely to touch all of the potential blocks. This is commonly used by virtualization products to store virtual disks. Let's say you configure a virtual machine with a 20 GB disk but it won't be full of data quickly. It is much faster to create a sparse file of 20 GB that will only use a couple of disk blocks at the beginning and then have the VM creating a file system and storing files at a low pace.

Sparse files are the opposite of preallocation, they are what is called thin provisioning or might also be called disk overcommitment. This allows creating more "virtual disk space" than the actual hardware support and add more disk to grow the file system only when necessary.
