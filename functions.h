#include <vector>
#ifndef _func
#define _func
void printBoard(std::vector<std::vector<int>> &board);
bool isValid(std::vector<std::vector<int>> &board, int row, int col);
bool solveNQueen(std::vector<std::vector<int>> &board, int col);
bool checkSolution(int x);
#endif
