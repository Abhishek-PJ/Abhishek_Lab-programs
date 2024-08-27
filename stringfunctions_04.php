//Develop a PHP program to demonstrate String functions. (any 6).
<?php
$string = "Hello, World!";

echo "Original String: $string<br>";

// 1. strlen() - Get string length
echo "Length: " . strlen($string) . "<br>";

// 2. strrev() - Reverse the string
echo "Reversed: " . strrev($string) . "<br>";

// 3. strpos() - Find position of 'World'
echo "Position of 'World': " . strpos($string, "World") . "<br>";

// 4. strtolower() - Convert to lowercase
echo "Lowercase: " . strtolower($string) . "<br>";

// 5. strtoupper() - Convert to uppercase
echo "Uppercase: " . strtoupper($string) . "<br>";

// 6. substr() - Get a substring (first 5 characters)
echo "Substring: " . substr($string, 0, 5) . "<br>";

// 7. str_replace() - Replace 'World' with 'PHP'
echo "Replaced: " . str_replace("World", "PHP", $string) . "<br>";
?>
