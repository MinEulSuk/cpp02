```mermaid
classDiagram
    class Animal {
        <<abstract>>
        +makeSound()* = 0
    }
    
    class Dog {
        +makeSound() 멍멍
    }
    
    class Cat {
        +makeSound() 냐옹
    }
    
    Animal <|-- Dog : implements
    Animal <|-- Cat : implements
    
    note for Animal "Abstract class with pure virtual function
  ```