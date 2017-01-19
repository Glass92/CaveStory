#ifndef INPUT_H
#define INPUT_H

#include <SDL2/sdl.h>
#include <map>
using namespace std;

class Input {
public:
	void beginNewFrame();
	void keyUpEvent(const SDL_Event& Event);
	void keyDownEvent(const SDL_Event& Event);

	bool wasKeyPressed(SDL_Scancode key);
	bool wasKeyReleased(SDL_Scancode key);
	bool isKeyHeld(SDL_Scancode key);
private:
	map<SDL_Scancode, bool> _heldKeys;
	map<SDL_Scancode, bool> _pressedKeys;
	map<SDL_Scancode, bool> _releasedKeys;
};


#endif // !INPUT_H
