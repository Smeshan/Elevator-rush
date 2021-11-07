#ifndef TEXTLINE_H
#define TEXTLINE_H
/* C system icnludes */

/* C++ system icnludes */
#include <cstdint>
#include <vector>

/* Third-party icnludes */

/* Own icnludes */
#include "manager_utils/drawing/Text.h"
#include "common/CommonDefines.h"

/* Forward Declaration */

class TextLine {
public:
	void setLineIndx(const int32_t indx);
	void draw();
	void procesLastWord();
	void addChar(const char* input);
	bool removeChar();
	void addTabSpace();
	void increaseFontSize();

	std::string getLastWord(size_t& begin) const;
	Point getLastCharPos() const;

private:
	int32_t _indx;
<<<<<<< HEAD
	int32_t _textFontId = FontId::TERMINAL_20;
	int32_t _textSize = 20;
=======
	int32_t _textFontId = FontId::TERMINAL_14;
	int32_t _textSize = 14;
>>>>>>> 6bb771e45190decd39b99884f258ab88a9b899ff
	int32_t _currChar = 0;
	std::vector<Text> _line;
	std::string _text;

};
#endif