#ifndef S21_A1_MAZE_MODEL_MODEL_H
#define S21_A1_MAZE_MODEL_MODEL_H
#include "Maze.h"
#include "FileManager.h"
#include "memory"


namespace s21 {
class Model { 
    public:
    Model();
    ~Model() = default;
    Model(const Model&) = delete;
    Model(Model&&) noexcept = default;
    Model& operator=(Model&&) noexcept = default;
    bool SaveToFileMaze(const std::string& path) const;
    bool SaveToFileCave(const std::string& path) const;
    bool ReadFromFileMaze(const std::string& path);
    bool GenerateMaze(const size_t&,const size_t&);
    bool SolutionWave(const std::pair<std::size_t,std::size_t>&,const std::pair<const std::size_t,const std::size_t>&);
    std::pair<matrix,matrix> get_data_Maze() const;
    private: 
    std::unique_ptr<Maze> maze;
};
}

#endif // S21_A1_MAZE_MODEL_MODEL_H