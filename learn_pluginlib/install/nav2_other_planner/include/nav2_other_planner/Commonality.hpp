#ifndef NAV2_OTHER_PLANNER__COMMONALITY_HPP_
#define NAV2_OTHER_PLANNER__COMMONALITY_HPP_

#include "iostream"
#include "functional"   //这个头文件提供了std::hash
#include "cstddef"     //这个头文件提供了std::size_t
#include "array"
#include "unordered_set"
#include "vector"

namespace Commonality{
    struct GridLocation
    {
        int x, y;
        bool operator==(const GridLocation& other) const {
            return x == other.x && y == other.y;
        }        
    };
}

namespace std{
    template <> struct hash<Commonality::GridLocation>
    {
        std::size_t operator()(const Commonality::GridLocation& id) const noexcept {
            return std::hash<int>()(id.x ^ (id.y << 16));
        }
    };
}

namespace Commonality{

    struct SquareGrid
    {
        inline static std::array<GridLocation, 8> DIRS = {
            GridLocation{1, 0}, GridLocation{-1, 0},
            GridLocation{0, 1}, GridLocation{0, -1},
            GridLocation{1, 1}, GridLocation{1, -1},
            GridLocation{-1, -1}, GridLocation{-1, 1}
        };

        int width, height;
        SquareGrid(int width_, int height_) : width(width_), height(height_) {}

        std::unordered_set<GridLocation> walls;

        bool in_bound(GridLocation id) const {
            return 0 <= id.x && id.x < width && 0 <= id.y && id.y < height; 
        }

        bool passable(GridLocation id) const {
            return walls.find(id) == walls.end();
        }

        std::vector<GridLocation> neighbor(GridLocation id) const {
            std::vector<GridLocation> result;

            for(GridLocation dirs : DIRS){
                GridLocation next{id.x + dirs.x, id.y + dirs.y};
                if(passable(next) && in_bound(next)) result.push_back(next);
            }

            return result;
        }
    };
}

#endif //NAV2_OTHER_PLANNER__COMMONALITY_HPP_
