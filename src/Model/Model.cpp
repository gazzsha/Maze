#include "Model.h"

namespace s21 {

Model::Model(): maze(std::make_unique<typename s21::Maze>()) {}
bool Model::SaveToFileMaze(const std::string& path) const { 
    try {
        return FileManager<Maze>::Save(*maze,path);
    } catch (...) {
        return false;
    }
}

 bool Model::SaveToFileCave(const std::string& path) const { 
    return FileManager<int>::Save(path);
 }
bool Model::ReadFromFileMaze(const std::string& path) { 
    try { 
        maze.reset(std::make_unique<typename s21::Maze>(FileManager<Maze>::Read(path)).release());
        return true;
    } catch (...) { 
        return false;
    }
}
bool Model::GenerateMaze(const size_t& rows,const size_t& cols) { 
   try { 
    maze->set_parameters(rows,cols);
    maze->GenerateMaze();
    return true;
   } catch (...) { 
    return false;
   }
}
 bool Model::SolutionWave(const std::pair<std::size_t,std::size_t>& from,const std::pair<const std::size_t,const std::size_t>& to) {
    try {
        maze->WaveAlgorithm(to,from);
        maze->SolutionWave(from,to);
        return true;
    } catch (...) { 
        return false;
    }
 }

/// @brief Returns pair of matrix. First field matrix of vertical lines, Second of horizontal lines 
/// @return Pair of matrix
std::pair<matrix,matrix> Model::get_data_Maze() const { 
    return maze->get_data();
}

}