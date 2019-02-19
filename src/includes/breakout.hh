#pragma once

#include <iostream>
#include "SDL2/SDL.h"

#include "ball.hh"
#include "bar.hh"
#include "block.hh"
#include "map.hh"


void Event(void);
void Update(void);
void Draw(void);

/* Templates callable on most classes will be written here: move... */
