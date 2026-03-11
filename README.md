# Connect-4-game
The input will consist of seven lines of text. The first character of the first line denotes the player to move, either X or O. This will be followed by a space and then a single integer between 0 and 6 denoting the column chosen by the player. For example, the line "X 4" denotes that player X plays their piece in column 4.

The next six lines will contain the current state of the gameboard from top to bottom. Each cell of the gameboard will be represented by a single character, either 'X', 'O', or '.', denoting if the cell is taken by player X, player O, or is empty.

The output of your program must consist of a single string (ending with a newline) that denotes what happens after the move given on the first line is played. There are five possible output strings:

"X wins" if player X has placed 4 pieces in a straight line.
"O wins" if player O has placed 4 pieces in a straight line.
"Tie game" if after the move has been played the gameboard is full and neither player has won.
"Ongoing game" if neither player wins after the move has been played.
"Illegal move" if the player tried to place a piece in a column that is already full.
