/*
Copyright Soramitsu Co., Ltd. 2016 All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

                 http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/
#ifndef IROHA_ADD_H
#define IROHA_ADD_H

#include <functional>
#include <generated/commands_generated.h>

namespace runtime{
    namespace command{
        // iroha::AccountAdd
        std::function<Expected<int>(const void*,const std::string&)> accountAdd =
            [](const void* aAccountAdd, const std::string& creator){
                return 0;
            };

        // iroha::AssetAdd
        std::function<Expected<int>(const void*,const std::string&)> assetAdd =
            [](const void* aAssetAdd,const std::string& creator){
            return 0;
        };

        // iroha::ChaincodeAdd
        std::function<Expected<int>(const void*,const std::string&)> chaincodeAdd =
            [](const void* aChaincodeAdd,const std::string& creator){
                return 0;
            };

        // iroha::PeerAdd
        std::function<Expected<int>(const void*,const std::string&)> peerAdd =
            [](const void* aPeerAdd,const std::string& creator){
                return 0;
            };

    };
};
#endif //IROHA_ADD_H