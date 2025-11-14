#include <bits/stdc++.h>
#include <cstdio>
#include <cstdlib>

const int M = 1 + std::pow(2, 7);  // You can change this for your specific game!
const int N = 1 + std::pow(2, 3);  // You can change this for your specific game!

void initBoard(int board[M][N], int M, int N) {
  for (int m = 0; m < M; m++) {
    for (int n = 0; n < N; n++) {
      board[m][n] = 0;
    }
  }
}

int parseBoard(int board[M][N]) {
    // Check every top-left corner of a possible 2x2 square
    for (int i = 0; i < M - 1; ++i) {
        for (int j = 0; j < N - 1; ++j) {
            int p = board[i][j];
            if (p != 0 &&
                board[i+1][j]   == p &&
                board[i][j+1]   == p &&
                board[i+1][j+1] == p) {
                return p; // player p wins
            }
        }
    }
    return 0; // no winner
}

void gameLoop(int board[M][N], bool cont, int players, int M, int N) {
  int winner;
  int m, n;
  do {
    for (int p = 1; p <= players; ++p) {
      std::cout << "Player " << p << " place: ";
      std::cin >> m >> n;

      if (board[m][n] == 0) {
        std::cout << p << " at (" << m << ", " << n << ")." << std::endl;
        board[m][n] = p;
      } else {
        std::cout << "Illegal move!" << std::endl;
      }
    }

    winner = parseBoard(board);
    if (winner != 0) {
      std::cout << "Player " << winner << " has won!" << std::endl;
      cont = false;
    }
  } while (cont);
}

#ifndef UNIT_TESTING
int main() {
  int P;
  bool cont = true;

  std::cout << "Initialising game... How many players? ";
  std::cin >> P;

  int board[M][N];
  initBoard(board, M, N);
  gameLoop(board, cont, P, M, N);

  return EXIT_SUCCESS;
}
#endif
