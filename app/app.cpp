#include "app.h"
#include <algorithm>
#include <format>
#include <iostream>

namespace vsite::oop::v2
{
	/*
	* class member function implementations
	*/

	double color::clamp(double value) {
		return std::max(0.0, std::min(1.0, value));
	}

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
		red = clamp(value);
	}

	void color::set_green(double value) {
		green = clamp(value);
	}

	void color::set_blue(double value) {
		blue = clamp(value);
	}

	unsigned int color::get_color_ref() const {
		return RGB(static_cast<int>(red * 255),
			(static_cast<int>(green * 255)),
			(static_cast<int>(blue * 255)));
	}


	double color::get_luminance() const {
		return 0.2126 * red + 0.7152 * green + 0.0722 * blue;
	}

	std::string color::to_hex() const {
		return std::format("#{0:02X}{1:02X}{2:02X}",
			static_cast<int>(red * 255),
			static_cast<int>(green * 255),
			static_cast<int>(blue * 255)
		);
	}
} // namespace
