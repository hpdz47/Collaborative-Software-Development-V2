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

- The path length satisfies $k = 4$,
- All cells in the path are distinct,
- The structure forms a **$2 \times 2$ square,** on the grids.

### Winning Rule

- After placing a piece, if a player has created a circuit composed entirely of their own cells, **that player wins immediately**.
- If all cells are filled and **no** player has formed a circuit, the game ends in a **draw**.



## Build Instructions

### Prerequisites

- A C++17 compiler (e.g. g++, clang++)
- make (available by default on Linux/macOS; on Windows via MinGW or WSL)

### Build the game

```bash
make
./cybergame

```md
### Run tests

```bash
make test






