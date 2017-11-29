

#ifndef MYGAME_SNAKE_H
#define MYGAME_SNAKE_H

#include "cocos2d.h"
#include <cmath>
#include "partSnake.h"
#include "sizeGameScene.h"
#include "Food.h"
#include <vector>
#include <string.h>
#include "menu.h"
using namespace cocos2d;

class Snake : public cocos2d::Layer
{
public:

    float velocity;
    int score;
    int countApple = 0;

    Size screenSize;

    Vec2 origin;
    int i = 0;

    Label *labelScore;
    Label *startText;
    Label *endText;

    bool gameStart;

    partSnake* head;
    partSnake* tmpPartSnake;
    Vector<partSnake*> snakeBodyParts;
    partSnake* tail;

    Food* apple;

    static  cocos2d::Scene* createSnake();
    virtual bool init();

    bool snakeHeadCollisonWithBody();
    void snakeHeadCollisonWithFood();

    EventKeyboard::KeyCode onKeyboardPressed(EventKeyboard::KeyCode keyCode, Event* event);
    void onKeyboardReleased(EventKeyboard::KeyCode keyCode, Event* event);

    void update(float delta);

    void endGame();

    void menu(Ref* psender);

    void menuESC();
    CREATE_FUNC(Snake);
};



#endif //MYGAME_SNAKE_H
