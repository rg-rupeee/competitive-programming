// C++ program to check whether a given tic tac toe
// board is valid or not
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define fast_io                     \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)

#define MAX_N 1e5 + 1
#define INF 1e9
#define MOD 1e9 + 7
#define LINF 1e18

#define rep(i, n) for (i = 0; i < n; ++i)
#define REP(i, a, n) for (i = a; i <= n; ++i)
#define REPR(i, n, a) for (i = n; i >= a; --i)

// This matrix is used to find indexes to check all
// possible wining triplets in board[0..8]
int win[8][3] = {{0, 1, 2},  // Check first row.
                 {3, 4, 5},  // Check second Row
                 {6, 7, 8},  // Check third Row
                 {0, 3, 6},  // Check first column
                 {1, 4, 7},  // Check second Column
                 {2, 5, 8},  // Check third Column
                 {0, 4, 8},  // Check first Diagonal
                 {2, 4, 6}}; // Check second Diagonal

// Returns true if character 'c' wins. c can be either
// 'X' or 'O'
bool isCWin(char *board, char c)
{
  // Check all possible winning combinations
  for (int i = 0; i < 8; i++)
    if (board[win[i][0]] == c &&
        board[win[i][1]] == c &&
        board[win[i][2]] == c)
      return true;
  return false;
}

// Returns true if given board is valid, else returns false
bool isValid(char board[9])
{
  // Count number of 'X' and 'O' in the given board
  int xCount = 0, oCount = 0;
  for (int i = 0; i < 9; i++)
  {
    if (board[i] == 'X')
      xCount++;
    if (board[i] == 'O')
      oCount++;
  }

  // Board can be valid only if either xCount and oCount
  // is same or xount is one more than oCount
  if (xCount == oCount || xCount == oCount + 1)
  {
    // Check if 'O' is winner
    if (isCWin(board, 'O'))
    {
      // Check if 'X' is also winner, then
      // return false
      if (isCWin(board, 'X'))
        return false;

      // Else return true xCount and yCount are same
      return (xCount == oCount);
    }

    // If 'X' wins, then count of X must be greater
    if (isCWin(board, 'X') && xCount != oCount + 1)
      return false;

    // If 'O' is not winner, then return true
    return true;
  }
  return false;
}

// Driver program
int main()
{
  fast_io;
  ull t;
  cin>>t;
  while (t--)
  {
    char board[9];
    int i;
    rep(i, 9){
      cin>>board[i];
    }

    if(isValid(board)){

      // check if X or O win
      if(isCWin(board, 'X') || isCWin(board, 'O')){
        cout<<1<<'\n';
      }
      else{
        // check if atleast one move available
        bool flag = true;
        for(int i=0; i<9; i++){
          if(board[i] == '_'){
            cout<<2<<'\n';
            flag = false;
            break;
          }
        }

        if(flag){
          cout<<1<<'\n';
        }
      }
    }
    else{
      cout<<3<<'\n';
    }
  
  }
  

  return 0;
}
