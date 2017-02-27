/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(TicTacToeBoardTest, sanityCheck)
{
	ASSERT_TRUE(true);
}

/* Create a TTTB. Place X in center  */
TEST(TicTacToeBoardTest,  create)
{
	TicTacToeBoard tTTboard;
	SetUp();
	ASSERT_TRUE('X' == tTTboard.placePiece(1,1));
	TearDown();
}

/* Make board. Place X in center. Place O in top left corner  */

/* Make board. getWinner() should return blank  */

/* Make board. Place X in 3, 0. Should return invalid  */
