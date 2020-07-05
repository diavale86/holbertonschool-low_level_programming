0x09. C - Static libraries

The basic tool used to create static libraries is a program called 'ar', for 'archiver'. This program can be used to create static libraries (which are actually archive files), modify object files in the static library, list the names of object files in the library, and so on. In order to create a static library, we can use a command like this:

ar rc libutil.a util_file.o util_net.o util_math.o
