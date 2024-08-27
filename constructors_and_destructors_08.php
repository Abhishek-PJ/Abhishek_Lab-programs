//Develop a PHP program to demonstrate constructors and destructors.
<?php
// Define a class named 'Person'
class Person {
    // Properties
    private $name;
    private $age;

    // Constructor
    public function __construct($name, $age) {
        $this->name = $name;
        $this->age = $age;
        echo "Constructor called: Creating a Person named $name, age $age.<br>";
    }

    // Method to display person details
    public function displayInfo() {
        echo "Name: " . $this->name . "<br>";
        echo "Age: " . $this->age . "<br>";
    }

    // Destructor
    public function __destruct() {
        echo "Destructor called: Person object for $this->name is being destroyed.<br>";
    }
}

// Create a new Person object
$person1 = new Person("Abhishek", 22);

// Display person details
$person1->displayInfo();

// The destructor will be called automatically when the script ends or the object is no longer needed
?>
