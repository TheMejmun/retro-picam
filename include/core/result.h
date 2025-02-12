//
// Created by Saman on 12.02.25.
//

#ifndef RETRO_PICAM_RESULT_H
#define RETRO_PICAM_RESULT_H

#include "optional"
#include "string"

namespace rpc::core {
    template<class T>
    struct Result {
        std::optional<T> value;
        std::optional<std::string> error;
    };
}

#endif //RETRO_PICAM_RESULT_H
