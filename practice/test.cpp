//#include <SFML/Graphics.hpp>
//#include <vector>
//
//// Define components
//struct PositionComponent {
//    float x, y;
//};
//
//struct VelocityComponent {
//    float dx, dy;
//};
//
//// Define entities
//struct Entity {
//    PositionComponent position;
//    VelocityComponent velocity;
//};
//
//// Define movement system
//class MovementSystem {
//public:
//    void update(Entity& entity, float deltaTime) {
//        entity.position.x += entity.velocity.dx * deltaTime;
//        entity.position.y += entity.velocity.dy * deltaTime;
//    }
//};
//
//int main() {
//    // Initialize SFML window
//    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML ECS Movement");
//
//    // Create entities
//    std::vector<Entity> entities;
//    entities.push_back({ {100, 100}, {50, 50} }); // Example entity with initial position and velocity
//
//    // Create movement system
//    MovementSystem movementSystem;
//
//    // Game loop
//    sf::Clock clock;
//    while (window.isOpen()) {
//        // Handle events
//        sf::Event event;
//        while (window.pollEvent(event)) {
//            if (event.type == sf::Event::Closed)
//                window.close();
//        }
//
//        // Update entities
//        float deltaTime = clock.restart().asSeconds();
//        for (auto& entity : entities) {
//            movementSystem.update(entity, deltaTime);
//        }
//
//        // Clear window
//        window.clear();
//
//        // Render entities
//        for (const auto& entity : entities) {
//            sf::CircleShape shape(20.f); // Example shape representing entity
//            shape.setPosition(entity.position.x, entity.position.y);
//            shape.setFillColor(sf::Color::Red);
//            window.draw(shape);
//        }
//
//        // Display window
//        window.display();
//    }
//
//    return 0;
//}
