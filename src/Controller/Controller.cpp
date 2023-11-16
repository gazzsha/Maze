#include "Controller.h"

namespace s21 { 
    Controller::Controller(std::unique_ptr<Model> model_) : model(std::move(model_)){}
    bool Controller::SaveToFileMaze(const std::string& path) const { 
        return model->SaveToFileMaze(path);
    }
    bool Controller::ReadFromFileMaze(const std::string& path) { 
        return model->ReadFromFileMaze(path);
    }
    bool Controller::GenerateMaze(const size_t& rows,const size_t& cols) { 
        return model->GenerateMaze(rows,cols);
    }
    bool Controller::SolutionWave(const std::pair<std::size_t,std::size_t>& from,const std::pair<const std::size_t,const std::size_t>& to) { 
        return model->SolutionWave(from,to);
    }
    bool Controller::SaveToFileCave(const std::string& path) const { 
        return model->SaveToFileCave(path);
    }
}