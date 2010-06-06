#include <stdint.h>
#include <string>
using std::string;

class TicTacToe
{
  public:
    TicTacToe();
    ~TicTacToe();

    // Sets the board to an initial condition
    void clearBoard();

    // Returns the current player
    char getCurrentPlayer();
    // Returns the game winner, or 0 if there is none.
    char getWinner();
    // Executes a move by the current player
    // Increments the move counter for the current game
    bool move(uint8_t x, uint8_t y);
    // Changes the current player to the other player
    void changePlayer();
    // Checks to see if the game is in a finished state (win/tie)
    // Returns true when game is over, sets winner, sets finished flag.
    // Returns false if game needs to continue.
    bool finished();
    // Prints the result of a finished game.
    void printResult();
    // Prints the current state of the board
    void printBoard();
    // Returns a string containing the board for testing.
    const string getBoard();

  private:
    char board[3][3];
    char current_player;
    char winner;
    uint8_t moves;
    bool finflag;
};