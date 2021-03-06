#pragma once

#include "ResourceManager.h"

#include <vector>

class Texture : public Resource {
public:
	int width;
	int height;
	int channels;
	std::vector<uint8_t> data;

	static constexpr const char* name = "Texture";

	explicit Texture() = default;
	explicit Texture(const fs::path& path);
};