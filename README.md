# Wireworld-Simulation
This program simulates the cellular automaton proposed by Brian Silverman in C. The program is intended to run on a UNIX OS.

You can read more here:
https://en.wikipedia.org/wiki/Wireworld

There are 4 types of cells within the simulation:
- Empty
- Electron Head
- Electron Tail
- Conductor

There are 4 criteria that the simulation must obey:
- Empty -> Empty
- Electron Head -> Electron Tail
- Electron Tail -> Conductor
- Conductor -> Electron Head*

*Only if there are 1 or 2 Electron Heads Orthogonally or Diagonally

Note:
  Some files were provided by the University and as such, were not created by me.
  Them being:
- OR.txt
- REFLECTOR.txt
- XOR_NOT.txt
- color.c
- color.h
- map2.txt
- newSleep.c
- newSleep.h
