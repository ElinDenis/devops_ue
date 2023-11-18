// My game. Copyright. All Rights Reserved.
#pragma once

#include "<Path>/Utils/InputRecordingUtils.h"
#include "CoreMinimal.h"

namespace MyGame
{
namespace Test
{

class JsonUtils
{
public:
    static bool WriteInputData(const FString& FileName, const FInputData& InputData);
    static bool ReadInputData(const FString& FileName, FInputData& InputData);
};

}  // namespace Test
}  // namespace MyGame