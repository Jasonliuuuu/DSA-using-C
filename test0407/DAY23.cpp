//--------------------Problem-----------------
//This problem was asked by Google.

//You are given an M by N matrix consisting of booleans that represents a board. Each True boolean represents a wall. Each False boolean represents a tile you can walk on.

//Given this matrix, a start coordinate, and an end coordinate, return the minimum number of steps required to reach the end coordinate from the start. If there is no possible path, then return null. You can move up, left, down, and right. You cannot move through walls. You cannot wrap around the edges of the board.

//For example, given the following board:

// [f, f, f, f],
// [t, t, f, t],
// [f, f, f, f],
// [f, f, f, f]]
// and start = (3, 0) (bottom left) and end = (0, 0) (top left), the minimum number of steps required to reach the end is 7, since we would need to go through (1, 2) because there is a wall everywhere else on the second row.

//---------------Solution--------------------
#include <iostream>
#include <vector>
#include <queue>
#include <set>

using namespace std;


bool walkable(const vector<vector<bool>>& board, int row, int col) {
    if (row < 0 || row >= board.size()) {
        return false;
    }
    if (col < 0 || col >= board[0].size()) {
        return false;
    }
    return !board[row][col];
}

vector<pair<int, int>> get_walkable_neighbours(const vector<vector<bool>>& board, int row, int col) {
    vector<pair<int, int>> neighbours;
    vector<pair<int, int>> potential_moves = {{row, col - 1}, {row - 1, col}, {row + 1, col}, {row, col + 1}};
    for (const auto& move : potential_moves) {
        if (walkable(board, move.first, move.second)) {
            neighbours.push_back(move);
        }
    }
    return neighbours;
}

int shortest_path(const vector<vector<bool>>& board, pair<int, int> start, pair<int, int> end) {
    set<pair<int, int>> seen;
    queue<pair<pair<int, int>, int>> q;
    q.push({start, 0});
    
    while (!q.empty()) {
        auto [coords, count] = q.front();
        q.pop();
        
        if (coords == end) {
            return count;
        }
        
        seen.insert(coords);
        vector<pair<int, int>> neighbours = get_walkable_neighbours(board, coords.first, coords.second);
        
        for (const auto& neighbour : neighbours) {
            if (seen.find(neighbour) == seen.end()) {
                q.push({neighbour, count + 1});
            }
        }
    }
    
    return -1; // If no path is found, return -1 (equivalent to null in Python).
}

int main() {
    vector<vector<bool>> board = {
        {false, false, false, false},
        {true, true, false, true},
        {false, false, false, false},
        {false, false, false, false}
    };

    pair<int, int> start = {3, 0};
    pair<int, int> end = {0, 0};

    int result = shortest_path(board, start, end);
    if (result == -1) {
        cout << "No path found" << endl;
    } else {
        cout << "Shortest path length: " << result << endl;
    }

    return 0;
}
