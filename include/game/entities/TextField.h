#ifndef TEXTFIELD_H
#define TEXTFIELD_H
/* C system icnludes */

/* C++ system icnludes */
#include <cstdint>
#include <vector>

/* Third-party icnludes */

/* Own icnludes */
#include "manager_utils/drawing/Image.h"
#include "manager_utils/audio/Sound.h"
#include "game/entities/TextLine.h"  

/* Forward Declaration */
struct InputEvent;

class TextField{
public:
	int32_t init(int32_t config);
	void deinit();
	void draw();
	void handleEvent(const InputEvent& e);

private:
	void addLine();
	void removeLine();
	void increaseTextSize();

	int32_t _currLine = -1;
	std::vector<TextLine> _textLines;
	
	Image _cursor;
	Sound _keySound;
};
#endif