# `'x'` (exclusive) mode for MinGW's `_wfopen()`

The purpose of this "project" is to provide a means of augmenting MinGW's
`_wfopen()` function (which uses the Windows system `msvcrt.dll`'s version of
the function) to handle calls that use the `'x'` character (for e**x**clusively
opening a new file for writing) in the mode string.
