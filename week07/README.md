```mermaid
classDiagram
    class Person {
        +string name
        +virtual warn()
    }
    
    class UndergraduateStudent {
        +double gpa
        +warn() 학사경고
    }
    
    class DormitoryStudent {
        +int roomNumber
        +warn() 벌점부여
    }
    
    class UndergraduateDormitoryStudent {
        
    }
    
    Person <|-- UndergraduateStudent : virtual inheritance
    Person <|-- DormitoryStudent : virtual inheritance
    UndergraduateStudent <|-- UndergraduateDormitoryStudent
    DormitoryStudent <|-- UndergraduateDormitoryStudent
  ```