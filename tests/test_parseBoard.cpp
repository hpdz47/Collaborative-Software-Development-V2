#define UNIT_TESTING
#include "../main.cpp"
#include "acutest.h"

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

void test_mixed_2x2_is_not_winner(void) {
    int board[M][N] = {0};
    board[0][0] = 1;
    board[0][1] = 2;
    board[1][0] = 1;
    board[1][1] = 1;
    int meow = parseBoard(board);
    TEST_CHECK(meow == 0);
}

TEST_LIST = {
    { "empty board has no winner",    test_empty_board_has_no_winner },
    { "player 1 wins with 2x2",       test_player1_wins_with_2x2 },
    { "player 2 wins with 2x2",       test_player2_wins_with_2x2 },
    { "mixed 2x2 is not winner",      test_mixed_2x2_is_not_winner },
    { NULL, NULL }
};
