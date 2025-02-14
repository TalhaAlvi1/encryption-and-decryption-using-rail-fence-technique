# Objective:

The objective of the Rail Fence Cipher program is to convert a given plain text into cipher text using the Rail Fence technique. This technique arranges the characters of the plain text in a zigzag pattern across multiple rails (rows), and then reads the characters sequentially from each rail to form the cipher text. The program simulates this zigzag pattern and outputs the corresponding encrypted message.

# Algorithm

**Input:**

A plain text string (plain_text).

The number of rails (num_rails), which determines how many rows the zigzag pattern will have.

**Initialization:**

Create a list of strings, rails[], where each element corresponds to a rail (row). Initialize the list with empty strings for each rail.

Set the initial position to the first rail (row = 0).

Define a direction variable that determines the movement between rails (1 for moving down and -1 for moving up).

**Traverse the Plain Text:**

For each character in the plain text:

Append the character to the current rail (rails[row]).

Update the row based on the current direction:

If the current row is 0, change the direction to move down (set direction = 1).

If the current row is the last rail (num_rails - 1), change the direction to move up (set direction = -1).

Move to the next rail by updating row based on the direction value (row += direction).

Construct the Cipher Text:

After all characters are placed in their respective rails, concatenate the strings in rails[] to form the final cipher text.

**Output:**

Print or return the cipher text as the encrypted message.

# Explanation:

The Rail Fence Cipher arranges text in a zigzag pattern across a specified number of rails (in this case, 2). Characters are placed alternately between two rows, then the rows are read sequentially to produce the cipher text.

**1.Input:** The plain text "MEETMEAFTERTHEPARTY".

**2.Rails:** Two strings (rail1 and rail2) represent the two rows (rails).

**3.Zigzag Placement:** Characters are alternated between the two rails:

1.Characters go into rail1 when moving down.

2.Characters go into rail2 when moving up.

**4.Direction Control:** A variable direction ensures characters are placed correctly in a zigzag.

**5.Cipher Text:** The cipher text is created by concatenating rail1 and rail2, producing "MEMATRHPRYETEFETEAT".
