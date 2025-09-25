```mermaid
classDiagram
    class Person {
        +string name
        +warn() virtual
    }
    
    class UndergraduateStudent {
        +double gpa
        +warn() "학사경고"
    }
    
    class DormitoryStudent {
        +int roomNumber
        +warn() "벌점부여"
    }
    
    class UndergraduateDormitoryStudent {
        +inherited: name, gpa, roomNumber
        +warn() ambiguous
    }
    
    Person ||--o{ UndergraduateStudent : "virtual inheritance"
    Person ||--o{ DormitoryStudent : "virtual inheritance"
    UndergraduateStudent ||--|| UndergraduateDormitoryStudent : "public inheritance"
    DormitoryStudent ||--|| UndergraduateDormitoryStudent : "public inheritance"
    
    note for Person "Base class with virtual warn() method"
    note for UndergraduateDormitoryStudent "Multiple inheritance from both student types
    Diamond problem solved by virtual inheritance"
  ```