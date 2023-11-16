// #ifndef S21_A1_MAZE_MODEL_MAZEMODEL_H
// #define S21_A1_MAZE_MODEL_MAZEMODEL_H
// #include "ModelAbstract.h"

// namespace s21 {
// class MazeModel : public ModelAbstract { 
//     public:
//     MazeModel();
//     void set_parameters(const std::size_t&,const std::size_t&) final;
//     void ReadFromFile(const std::string& path) final;
//     virtual void WriteToFile(const std::string& path) final;
//     virtual void Generate() final;
//     virtual void Solution(const std::pair<std::size_t,std::size_t>&,const std::pair<const std::size_t,const std::size_t>&) final; 
//     private:
//     std::unique_ptr<Maze> Maze;
// };
// }
// #endif // S21_A1_MAZE_MODEL_MAZEMODEL_H