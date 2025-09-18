```mermaid
classDiagram
  Pokemon <|-- Pikachu
  class Pokemon{
    +Pokemon()
    +~Pokemon()*
    +attack()* void
  }
  class Pikachu{
    +Pikachu()
    +~Pikachu()
    +attack() void
  }
  ```