kyfd
===

- description
  - this is an alternative of [kyfd](https://github.com/neubig/kyfd)
    - forked from [kyfd last commit](https://github.com/neubig/kyfd/commit/db6e29e6f2bbc229a08fc902cd1435333f56bc81)
	  - same version as [kyfd-0.0.5](http://www.phontron.com/kyfd/download/kyfd-0.0.5.tar.gz)
    - changed default installed directory
	  - installation files will not be located in `/usr/local` but in `pwd`/install
	- changed include directory structure
	  - `include/fyfd/*` -> `include/*`
    - changed ostream to ostringstream for decode(in, out)
	  - on going
  - created c and python interface
    - https://github.com/dsindex/ckyfd

- prerequisite
  - aclocal, automake, libtoolize, autoheader, autoconf
  ```
  aclocal (GNU automake) 1.11.1
  automake (GNU automake) 1.11.1
  libtoolize (GNU libtool) 2.2.6b 
  autoheader (GNU Autoconf) 2.63
  autoconf (GNU Autoconf) 2.63
  ```
  - [xerces-c](http://xerces.apache.org/xerces-c/download.cgi)
  ```
  $ cd xerces-c-3.1.4
  $ ./configure ; make ; sudo make install
  ```
  - [openfst](http://www.openfst.org/twiki/bin/view/FST/WebHome)
  ```
  # you should download 'openfst-1.3.2' 
  $ openfst-1.3.2
  $ ./configure ; make ; sudo make install
  ```

- how to compile
```
$ pwd
$ /home
$ git clone https://github.com/dsindex/kyfd
$ cd kyfd
$ ./buildconf
$ ./configure ; make ; make install
$ ls install
bin include lib
```
