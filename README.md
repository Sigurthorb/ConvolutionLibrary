### Convolution Library

Current state of the library is focued on image convolutions which is the reason
for the use of channels and unsigned char as input/output.

This library will be updated in the future for use in Convolutional Networks where channels will most likely be removed and input/output will be changed to float.

To use this library, compile the archive:

`$ make archive`

include the .h file in your C file

`#include "path/to/src/libConv.h"`

and finally compile with the following flags:

`-Lpath/to/bin/include -lConv -lm -fopenmp`