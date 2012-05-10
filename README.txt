= GRASP - ontology/RDF editor =

Copyright (C) 2011-2012 Jiří Procházka; unless specified otherwise
ojirio@gmail.com

For license information see LICENSE.txt


== Build instructions ==

Use `make build` to build, `make` to build and run.
First build will probably require to be run two times.

`make debug` to run in GDB.

`make doc` to generate API docs.


== Dependencies ==

Raptor git://github.com/dajobe/raptor.git rev. e90515929b8ffed8a9daf67e26bb1d9a090e1971
  - or release after 2.0.7 (not yet released)
Redland with Berkley DB support (tested 1.0.13)
Rasqal (tested 0.9.25)
Qt with QtSvg (tested 4.7)

