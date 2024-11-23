#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Point {
    int x, y;
};

struct Map {
    vector<vector<char> > grid;
    int m, n;
    Point start, end;
    bool mechanic_found = false;
    bool electrical_found = false;
    bool official_found = false;
    bool programmer_found = false;
    double speed = 1.0;
    double time_spent = 0.0;
};

void initialize_map(Map &map, const vector<vector<char> > &g) {
    map.grid = g;
    map.m = g.size();
    map.n = g[0].size();

    for (int i = 0; i < map.m; ++i) {
        for (int j = 0; j < map.n; ++j) {
            if (map.grid[i][j] == 'S') {
                map.start.x = i;  
                map.start.y = j;
            }
            else if (map.grid[i][j] == 'F') {
                map.end.x = i;  
                map.end.y = j;
            }
        }
    }
}

bool is_within_bounds(const Map &map, const Point &p) {
    return p.x >= 0 && p.x < map.m && p.y >= 0 && p.y < map.n;
}

bool is_passable(const Map &map, const Point &p) {
    if (map.mechanic_found) return true;
    return map.grid[p.x][p.y] != 'x';  
}

string handle_cell(Map &map, const Point &p) {
    char cell = map.grid[p.x][p.y];
    string result = "";

    if (cell == 'M' && !map.mechanic_found) {
        map.mechanic_found = true;
        result = "Bertemu dengan mekanik, siap membasmi rintangan";
    } else if (cell == 'E' && !map.electrical_found) {
        map.electrical_found = true;
        map.speed = 2.0;
        result = "Bertemu dengan electrical, kecepatan roda naik menjadi 200%";
    } else if (cell == 'O' && !map.official_found) {
        map.official_found = true;
        map.time_spent *= 2;
        result = "Bertemu dengan official, diajak ngonten bareng";
    } else if (cell == 'P' && !map.programmer_found) {
        map.programmer_found = true;
        result = "Bertemu dengan programmer, diajak ngoding bareng";
    }
    return result;
}

string move_robot(Map &map, Point &position, char direction) {
    Point new_position = position;

    switch (direction) {
        case 'L': new_position.y -= 1; break;
        case 'R': new_position.y += 1; break;
        case 'U': new_position.x -= 1; break;
        case 'D': new_position.x += 1; break;
        default: return "Masukkan input yang benar";
    }

    if (!is_within_bounds(map, new_position)) {
        return "Robot di luar batas peta";
    }

    if (!is_passable(map, new_position)) {
        return "Robot nabrak dinding, silahkan diperbaiki";
    }

    position = new_position;
    map.time_spent += 2.0 / map.speed;  
    string result = handle_cell(map, new_position);
    return result;
}

bool find_path(Map &map, Point &position, const vector<char> &movements) {
    for (size_t i = 0; i < movements.size(); ++i) {
        char move = movements[i];
        string result = move_robot(map, position, move);
        if (!result.empty()) {
            cout << result << endl;
            if (result == "Robot di luar batas peta") return false;
        }
        if (position.x == map.end.x && position.y == map.end.y) return true;
    }
    return false;
}

int main() {
    int M, N;
    cin >> M >> N;

    vector<vector<char> > grid(M, vector<char>(N));
    
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> grid[i][j];
        }
    }

    int P;
    cin >> P;

    vector<char> movements(P);
    for (int i = 0; i < P; ++i) {
        cin >> movements[i];
    }

    Map map;
    initialize_map(map, grid);
    Point robot_position = map.start;

    bool found_path = find_path(map, robot_position, movements);
    if (found_path) {
        if (robot_position.x == map.end.x && robot_position.y == map.end.y) {
            cout << "Robot berhasil mencapai tujuan" << endl;
        } else {
            cout << "Robot gagal dalam mencapai tujuan :(" << endl;
        }
    } else {
        cout << "Robot gagal dalam mencapai tujuan :(" << endl;
    }

    cout << "Robot telah berjalan selama " << map.time_spent << " menit" << endl;

    return 0;
}