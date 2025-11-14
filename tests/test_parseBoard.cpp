#define UNIT_TESTING
#include "../main.cpp"
#include "acutest.h"

// Now we can use M, N, and parseBoard from main.cpp

void test_empty_board_has_no_winner(void) {
    int board[M][N] = {0};
    int meow = parseBoard(board); // 'meow' as required by assignment
    TEST_CHECK(meow == 0);
}

TEST_LIST = {
    { "empty board has no winner", test_empty_board_has_no_winner },
    { NULL, NULL }
};
