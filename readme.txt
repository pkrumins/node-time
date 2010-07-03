Oops!!! I forgot about Date() object in JavaScript. So this module is quite
useless now. :)

This is a node.js module, writen in C++, that implements some missing time
functions, such as getting timeval struct and getting unix time.

It was written by Peteris Krumins (peter@catonmat.net).
His blog is at http://www.catonmat.net  --  good coders code, great reuse.

------------------------------------------------------------------------------

The module exports three functions:

    * getUnixTime - returns seconds since 1970, Jan 1 (+/- timezone offset)
    * getTimeval - returns timeval struct as object with .sec and .usec props
    * getMilliseconds - returns milliseconds since 1970, Jan 1 (+/- tz offset)

See examples/ dir for working examples.


How to compile?
---------------

As usual,

    node-waf configure build

The module will be called `time.node`. To use it, make sure it's in NODE_PATH.


Extra info
----------

This library was written for my and SubStack's StackVM startup:

    http://github.com/pkrumins/stackvm
    http://github.com/substack/stackvm


------------------------------------------------------------------------------

Have fun with time!


Sincerely,
Peteris Krumins
http://www.catonmat.net

