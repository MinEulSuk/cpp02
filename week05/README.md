```mermaid
classDiagram
    class Animal {
        <<abstract>>
        +makeSound()* 순수가상함수
    }
    
    class Dog {
        +makeSound() 멍멍
    }
    
    class Cat {
        +makeSound() 냐옹
    }
    
    Animal <|-- Dog : implements
    Animal <|-- Cat : implements
  ```