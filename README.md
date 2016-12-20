# Libsquash

Portable, User-land SquashFS that can be linked and embedded within your application; a [squashfuse](https://github.com/vasi/squashfuse) fork.

[![Build status: Linux and Darwin](https://travis-ci.org/enclose-io/libsquash.svg?branch=master)](https://travis-ci.org/enclose-io/libsquash)
[![Build status: Windows](https://ci.appveyor.com/api/projects/status/297rm0xhcfyyu9uo?svg=true)](https://ci.appveyor.com/project/pmq20/libsquash)
[![Coverity Scan](https://scan.coverity.com/projects/11215/badge.svg)](https://scan.coverity.com/projects/enclose-io-libsquash)

## About this fork

This project was forked from https://github.com/vasi/squashfuse with the following modifications.

1. Read data from the memory instead of from a file, which is by passing a pointer to an array of bytes that could be generated by an independently installed [mksquashfs](http://squashfs.sourceforge.net/) tool and be loaded into memory in advance.
1. Introducing "Negative FD", add the ability to return virtual file descriptors (which is negative to distinguish from system FD's)
1. Add CMake
1. Compile on 3 platforms without libfuse: Windows, Mac OS X and Linux
1. Add travis-ci for Linux and Darwin CI
1. Add appveyor for Windows CI
1. Add Coverity Scan
1. Add a test fixture and numerous tests

## Building

On most systems you could build and test the library using the following commands,

    mkdir build
    cd build
    cmake ..
    cmake --build .
    ctest --verbose

## Acknowledgment

Thank you [Dave Vasilevsky](https://github.com/vasi) for the excellent work of squashfuse!

## Contributing

Bug reports and pull requests are welcome on GitHub at https://github.com/enclose-io/libsquash.

## Contributors

* [pmq20](https://github.com/pmq20) - **Minqi Pan** &lt;pmq2001@gmail.com&gt;

## License

Squashfuse is copyright (c) 2012-2014 Dave Vasilevsky <dave@vasilevsky.ca>

The following license applies to Libsquash, a fork of squashfuse.

Copyright (c) 2016 Libsquash contributors, under terms of the [MIT License](http://opensource.org/licenses/MIT).
