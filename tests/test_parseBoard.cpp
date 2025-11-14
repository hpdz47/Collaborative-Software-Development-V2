#define UNIT_TESTING
#include "../main.cpp"

#if __has_include("acutest.h")
#include "acutest.h"
#elif __has_include("tests/acutest.h")
#include "tests/acutest.h"
#else
#error "Unable to locate acutest.h for the unit tests"
#endif

void test_empty_board_has_no_winner(void) {
    int board[M][N] = {0};
    int meow = parseBoard(board);
    TEST_CHECK(meow == 0);
}

void test_player1_wins_with_2x2(void) {
    int board[M][N] = {0};
    board[0][0] = 1;
    board[0][1] = 1;
    board[1][0] = 1;
    board[1][1] = 1;
    int meow = parseBoard(board);
    TEST_CHECK(meow == 1);
}

void test_player2_wins_with_2x2(void) {
    int board[M][N] = {0};
    board[3][4] = 2;
    board[3][5] = 2;
    board[4][4] = 2;
    board[4][5] = 2;
    int meow = parseBoard(board);
    TEST_CHECK(meow == 2);
}
