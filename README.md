# Circling

## Authors

| Username | Name |
|----------|------|
| hpdz47   | Peerapat Preechasiriratna (Benz) |

## Game Description

Circuit Conquest is a multi-player, grid-based strategy game played on an \(M \times N\) board, where \(3 \le M, N \le 129\). Players take turns placing their marker on empty cells while attempting to complete a closed loop using only their own pieces. All players follow identical rules and win conditions.

## Rules of Play

- The board is an \(M \times N\) discrete grid.
- Each turn, a player selects an empty cell and places their mark there.
- Adjacent cells use **4-neighbour connectivity** (cells sharing an edge; diagonals do not count).

## Win Condition: Forming a Circuit

### Paths

A *path* for player \(p\) is a sequence of distinct cells \((c_1, c_2, \ldots, c_k)\) such that:

- Every cell contains player \(p\)’s mark.
- Consecutive cells are edge-adjacent.

### Circuit (Closed Loop)

A player forms a *circuit* if:

- The path length satisfies \(k = 4\);
- All cells in the path are distinct;
- The structure forms a **\(2 \times 2\)** square on the grid.

### Winning Rule

- After placing a piece, if a player creates a circuit composed entirely of their own cells, that player **wins immediately**.
- If the board fills and no player has formed a circuit, the game ends in a **draw**.

---

## Build Instructions

### Prerequisites

- A C++17 compiler (e.g., `g++`, `clang++`)
- `make` (default on Linux/macOS; available via MinGW or WSL on Windows)

### Build the game

```bash
make
./cybergame

```md
### Run tests

```bash
make test






