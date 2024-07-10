//TODO: No me aparece la fruta

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <iostream>
#include <deque>

const int WIDTH = 800;
const int HEIGHT = 600;
const int SIZE = 20;
const int INIT_LENGTH = 3;
const int FPS = 10;

int radius = 1;

enum class Direction { Up, Down, Left, Right };

struct Snake {
    std::deque<sf::RectangleShape> body;
    Direction direction;
};

sf::Vector2f fruit;
sf::CircleShape fruitShape(radius);

void handleInput(Snake& snake) {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && snake.direction != Direction::Down) {
        snake.direction = Direction::Up;
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) && snake.direction != Direction::Up) {
        snake.direction = Direction::Down;
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) && snake.direction != Direction::Right) {
        snake.direction = Direction::Left;
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) && snake.direction != Direction::Left) {
        snake.direction = Direction::Right;
    }
}

void spawnFruit() {
    int maxX = WIDTH / SIZE - 1;
    int maxY = HEIGHT / SIZE - 1;
    int x = rand() % maxX;
    int y = rand() % maxY;
    fruit = sf::Vector2f(x * SIZE, y * SIZE);
    
}

void update(Snake& snake) {
    sf::Vector2f headPos = snake.body.front().getPosition();
    sf::RectangleShape tail = snake.body.back();

    if (snake.direction == Direction::Up) {
        headPos.y -= SIZE;
        if (headPos.y < 0) {
            headPos.y = HEIGHT - SIZE;
        }
    }
    else if (snake.direction == Direction::Down) {
        headPos.y += SIZE;
        if (headPos.y >= HEIGHT) {
            headPos.y = 0;
        }
    }
    else if (snake.direction == Direction::Left) {
        headPos.x -= SIZE;
        if (headPos.x < 0) {
            headPos.x = WIDTH - SIZE;
        }
    }
    else if (snake.direction == Direction::Right) {
        headPos.x += SIZE;
        if (headPos.x >= WIDTH) {
            headPos.x = 0;
        }
    }

    if (headPos == fruit) {
        // La serpiente ha comido la fruta, incrementa su tamaño
        snake.body.push_back(tail);
        spawnFruit();
    }

    tail.setPosition(headPos);
    snake.body.push_front(tail);
    snake.body.pop_back();

}

void render(sf::RenderWindow& window, const Snake& snake) {
    window.clear();
    for (const auto& segment : snake.body) {
        window.draw(segment);
    }
    //fruitShape.setPosition(fruit.x, fruit.y); // Establecer la posición de la forma en las coordenadas de la fruta
    //fruitShape.setFillColor(sf::Color::Red); // Establecer el color de la forma (en este caso, rojo)
    //window.draw(fruitShape);
    window.display();
}

int main() {
    sf::RenderWindow window(sf::VideoMode(WIDTH, HEIGHT), "Snake Game");
    window.setFramerateLimit(FPS);

    Snake snake;
    snake.direction = Direction::Right;

    sf::RectangleShape segment(sf::Vector2f(SIZE, SIZE));
    segment.setFillColor(sf::Color::Green);

    spawnFruit();  

    for (int i = 0; i < INIT_LENGTH; ++i) {
        segment.setPosition(WIDTH / 2 - i * SIZE, HEIGHT / 2);
        snake.body.push_back(segment);
    }

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        handleInput(snake);
        update(snake);
        render(window, snake);
    }

    return 0;
}