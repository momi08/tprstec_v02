#include "app.h"
#include <algorithm>
#include <format>
#include <iostream>

namespace vsite::oop::v2
{
	/*
	* class member function implementations
	*/

	double color::get_red() const {
		return red;
	}

	double color::get_green() const {
		return green;
	}

	double color::get_blue() const {
		return blue;
	}

	void color::set_red(double value) {
		red = std::clamp(value, 0.0, 1.0);
	}

	void color::set_green(double value) {
		green = std::clamp(value, 0.0, 1.0);
	}

	void color::set_blue(double value) {
		blue = std::clamp(value, 0.0, 1.0);
	}

	unsigned int color::get_color_ref() const {
		return RGB(red * 255, green * 255, blue * 255);
	}

	double color::get_luminance() const {
		return 0.2126 * red + 0.7152 * green + 0.0722 * blue;
	}

	std::string to_hex(unsigned int color) {
		return std::format("#{:X}{:X}{:X}",
			(color & 0xFF),
			(color >> 8) & 0xFF,
			(color >> 16) & 0xFF);
	}
} // namespace
