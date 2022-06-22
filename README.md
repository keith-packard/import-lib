# Import Library

The GNU toolchain can create an *import library* using the
`--out-implib` linker flag. This library contains all of the exported
symbols from a shared library created in the same linking step. It can
be used in place of the full shared library when building
applications, allowing the distribution of just the import library
instead of the full suite of shared libraries needed to run the
application.
