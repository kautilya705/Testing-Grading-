//courseid:9017873
//studentid:111404089
//assignmentid:44952907
#include <iostream>
#include <vector>

using namespace std;

// Function to print the tic-tac-toe board
void printBoard(const vector<vector<char>>& board) {
    cout << "  1 2 3\n";
    for (int i = 0; i < 3; ++i) {
        cout << i + 1 << " ";
        for (int j = 0; j < 3; ++j) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to check if there is a winner
char checkWinner(const vector<vector<char>>& board) {
    // Check rows and columns
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            return board[i][0];
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
            return board[0][i];
    }
    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
        return board[0][0];
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
        return board[0][2];
    return ' '; // No winner yet
}

int main() {
    vector<vector<char>> board(3, vector<char>(3, ' ')); // Initialize empty board
    int row, col;
    char currentPlayer = 'X';
    bool gameFinished = false;

    cout << "Welcome to Tic-Tac-Toe!\n";
    cout << "Player 1: X, Player 2: O\n";

    while (!gameFinished) {
        printBoard(board);
        cout << "Player " << currentPlayer << ", enter your move (row column): ";
        cin >> row >> col;

        if (row < 1 || row > 3 || col < 1 || col > 3 || board[row - 1][col - 1] != ' ') {
            cout << "Invalid move. Try again.\n";
            continue;
        }

        board[row - 1][col - 1] = currentPlayer;
        char winner = checkWinner(board);
        if (winner != ' ') {
            printBoard(board);
            cout << "Player " << winner << " wins!\n";
            gameFinished = true;
        } else if (board[0][0] != ' ' && board[0][1] != ' ' && board[0][2] != ' ' &&
                   board[1][0] != ' ' && board[1][1] != ' ' && board[1][2] != ' ' &&
                   board[2][0] != ' ' && board[2][1] != ' ' && board[2][2] != ' ') {
            printBoard(board);
            cout << "It's a draw!\n";
            gameFinished = true;
        } else {
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        }
    }

    return 0;
}
