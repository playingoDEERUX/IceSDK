#include "pch.h"

#include "Assets/Texture2DAsset.h"

using namespace IceSDK;
using namespace IceSDK::Assets;

Texture2DAsset::Texture2DAsset(const std::string& pName,
                               const std::vector<uint8_t>& pData)
{
    this->_name = pName;
    this->_data = pData;
}

Memory::Ptr<Graphics::Texture2D> Texture2DAsset::LoadTexture() const
{
    return Graphics::Texture2D::Load(this->_name, this->_data);
}

std::vector<uint8_t> Texture2DAsset::ToByteArray() const
{
    return this->_data;
}

Texture2DAsset Texture2DAsset::From(const std::string& pName,
                                    const std::vector<uint8_t>& pData)
{
    return Texture2DAsset{ pName, pData };
}
