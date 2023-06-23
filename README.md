# Wireworld-Simulation
University Project Simulating a Wire World

This program simulates the cellular automaton proposed by Brian Silverman.

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
