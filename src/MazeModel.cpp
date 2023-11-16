
// #include "MazeModel.h"

// namespace s21{
//     MazeModel::MazeModel(): Maze(std::make_unique<typename s21::Maze>()) {}
//     void MazeModel::set_parameters(const std::size_t& rows,const std::size_t& cols) { 
//         Maze->set_parameters(rows,cols);
//     }
// void MazeModel::ReadFromFile(const std::string& path) { 
//     Maze.reset(std::make_unique<typename s21::Maze>(FileManager::Read(path)).release());
// }

//    void MazeModel::WriteToFile(const std::string& path) {
//     FileManager::Save(*Maze,path);
//   }
//     void MazeModel::Generate() { 
//         Maze->GenerateMaze();
//     }
//     void MazeModel::Solution(const std::pair<std::size_t,std::size_t>& from,const std::pair<const std::size_t,const std::size_t>& to) {
//         Maze->SolutionWave(from,to);
//      }
// }