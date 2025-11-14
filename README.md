# Circling

## Authors:
| Username | Name |
|----------|------|
| hpdz47 | Peerapat Preechasiriratna (Benz) |

## Game Description:
- Circuit Conquest is a multi-player, grid-based strategy game played on an  
$M \times N$ board, where $3 \le M, N \le 129$.

- There are $P$ players, indexed $p \in \{1, 2, \ldots, P\}$.

- Each player takes turns placing their mark on an empty grid cell.

- A player's goal is to create a closed loop (a *circuit*) using only their own pieces.

- All players follow the same rules and win conditions.

## Rules: 
- The board is an $M \times N$ discrete grid.
- Each turn, a player selects an empty cell and places their mark.
- Adjacent cells are defined using **4-neighbour connectivity**  
  (cells sharing an edge; diagonals do not count).
  
## Win Condition: Forming a Circuit

### Paths

A *path* for player $p$ is a sequence of distinct cells  
$(c_1, c_2, \ldots, c_k)$ such that:

- Each cell contains player $p$’s mark.
- Consecutive cells are edge-adjacent.

### Circuit (Closed Loop)

A player forms a *circuit* if:

- The path length satisfies $k \ge 4$,
- All cells in the path are distinct,
- The final cell $c_k$ is adjacent to the first cell $c_1$,
- The structure forms a **simple cycle** on the grid with no self-intersections.

Examples include:

- A $2 \times 2$ square,
- A rectangular ring,
- Any other closed polygon made of contiguous player-owned cells.

### Winning Rule

- After placing a piece, if a player has created a circuit composed entirely of their own cells, **that player wins immediately**.
- If all cells are filled and **no** player has formed a circuit, the game ends in a **draw**.



## Build Instructions:

### Prerequisites

- C++17 compiler (e.g. g++, clang++, MSVC)
- CMake (3.10+ recommended)

### Getting the Source Code

The source code is in main.cpp of this repo




