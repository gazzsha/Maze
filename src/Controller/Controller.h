#ifndef S21_A1_MAZE_CONTROLLER_CONTROLLER_H
#define S21_A1_MAZE_CONTROLLER_CONTROLLER_H
#include "../Model/Model.h"

namespace s21 {
class Controller { 
    public:
    Controller(std::unique_ptr<Model> model_);
    ~Controller() = default;
    Controller(const Controller&) = default;
    Controller(Controller&&) noexcept = default;
    Controller& operator=(Controller&&) noexcept = default;
    bool SaveToFileMaze(const std::string& path) const;
    bool SaveToFileCave(const std::string& path) const;
    bool ReadFromFileMaze(const std::string& path);
    bool GenerateMaze(const size_t&,const size_t&);
    bool SolutionWave(const std::pair<std::size_t,std::size_t>&,const std::pair<const std::size_t,const std::size_t>&);
    std::pair<matrix,matrix> get_data_Maze() const;
    private:
    std::unique_ptr<Model> model; 
};
}